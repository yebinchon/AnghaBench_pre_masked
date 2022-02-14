
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t total; TYPE_2__* nalus; } ;
struct ftl_stream {TYPE_1__ coded_pic_buffer; } ;
struct encoder_packet {size_t size; unsigned char* data; } ;
struct TYPE_4__ {unsigned char* data; int len; int send_marker_bit; } ;
typedef TYPE_2__ nalu_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(struct ftl_stream *VAR_0,
          struct encoder_packet *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = (int)VAR_1->size;
 nalu_t *VAR_5;

 unsigned char *VAR_6 = VAR_1->data;

 while ((size_t)VAR_3 < VAR_1->size) {
  size_t VAR_7 = sizeof(VAR_0->coded_pic_buffer.nalus) /
       sizeof(VAR_0->coded_pic_buffer.nalus[0]);

  if ((size_t)VAR_0->coded_pic_buffer.total >= VAR_7) {
   FUNC_0("ERROR: cannot continue, nalu buffers are full");
   return -1;
  }

  VAR_5 = &VAR_0->coded_pic_buffer
    .nalus[VAR_0->coded_pic_buffer.total];

  if (VAR_2) {
   if (VAR_3 == 0) {


    VAR_6 += 6;
    VAR_3 += 6;
   } else {

    VAR_6 += 1;
    VAR_3 += 1;
   }

   VAR_4 = VAR_6[0] << 8 | VAR_6[1];
   VAR_6 += 2;
   VAR_3 += 2;
  } else {
   VAR_4 = VAR_6[0] << 24 | VAR_6[1] << 16 |
         VAR_6[2] << 8 | VAR_6[3];

   if ((size_t)VAR_4 > (VAR_1->size - (size_t)VAR_3)) {
    FUNC_0("ERROR: got len of %d but packet only "
         "has %d left",
         VAR_4, (int)(VAR_1->size - VAR_3));
   }

   VAR_3 += 4;
   VAR_6 += 4;
  }

  VAR_3 += VAR_4;

  uint8_t VAR_8 = VAR_6[0] & 0x1F;
  uint8_t VAR_9 = (VAR_6[0] >> 5) & 0x3;

  if ((VAR_8 != 12 && VAR_8 != 6 && VAR_8 != 9) ||
      VAR_9) {
   VAR_5->data = VAR_6;
   VAR_5->len = VAR_4;
   VAR_5->send_marker_bit = 0;
   VAR_0->coded_pic_buffer.total++;
  }

  VAR_6 += VAR_4;
 }

 if (!VAR_2) {
  size_t VAR_10 = VAR_0->coded_pic_buffer.total - 1;
  VAR_0->coded_pic_buffer.nalus[VAR_10].send_marker_bit = 1;
 }

 return 0;
}
