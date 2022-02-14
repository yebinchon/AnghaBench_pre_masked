
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int total; TYPE_2__* nalus; } ;
struct ftl_stream {int total_bytes_sent; int ftl_handle; int frames_sent; TYPE_1__ coded_pic_buffer; } ;
struct encoder_packet {scalar_t__ type; int data; scalar_t__ size; int dts_usec; } ;
struct TYPE_4__ {int len; scalar_t__ send_marker_bit; int data; } ;
typedef TYPE_2__ nalu_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ftl_stream*,struct encoder_packet*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int,scalar_t__) ;
 int FUNC_3 (struct encoder_packet*) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ftl_stream *VAR_4, struct encoder_packet *VAR_5,
         bool VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;

 if (VAR_5->type == VAR_3) {
  VAR_4->coded_pic_buffer.total = 0;
  FUNC_0(VAR_4, VAR_5, VAR_6);

  int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_4->coded_pic_buffer.total; VAR_9++) {
   nalu_t *VAR_10 = &VAR_4->coded_pic_buffer.nalus[VAR_9];
   VAR_7 += FUNC_2(
    &VAR_4->ftl_handle, VAR_1,
    VAR_5->dts_usec, VAR_10->data, VAR_10->len,
    VAR_10->send_marker_bit);

   if (VAR_10->send_marker_bit) {
    VAR_4->frames_sent++;
   }
  }

 } else if (VAR_5->type == VAR_2) {
  VAR_7 += FUNC_2(
   &VAR_4->ftl_handle, VAR_0, VAR_5->dts_usec,
   VAR_5->data, (int)VAR_5->size, 0);
 } else {
  FUNC_4("Got packet type %d", VAR_5->type);
 }

 if (VAR_6) {
  FUNC_1(VAR_5->data);
 } else {
  FUNC_3(VAR_5);
 }

 VAR_4->total_bytes_sent += VAR_7;
 return VAR_8;
}
