
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int number_of_packets; scalar_t__ transfer_buffer; TYPE_1__* iso_frame_desc; } ;
struct snd_usb_substream {int dummy; } ;
typedef int packet_length ;
typedef int __le32 ;
struct TYPE_2__ {unsigned int length; unsigned int offset; } ;


 int FUNC_0 (struct snd_usb_substream*,struct urb*,unsigned int,int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__,int *,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct snd_usb_substream *VAR_0,
          struct urb *VAR_1, int VAR_2,
          unsigned int VAR_3)
{
 __le32 VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1->number_of_packets; VAR_5++) {
  unsigned int VAR_6 = VAR_1->iso_frame_desc[VAR_5].length;
  unsigned int VAR_7 = VAR_1->iso_frame_desc[VAR_5].offset;

  VAR_4 = FUNC_1(VAR_6);
  VAR_7 += VAR_5 * sizeof(VAR_4);
  VAR_1->iso_frame_desc[VAR_5].offset = VAR_7;
  VAR_1->iso_frame_desc[VAR_5].length += sizeof(VAR_4);
  FUNC_2(VAR_1->transfer_buffer + VAR_7,
         &VAR_4, sizeof(VAR_4));
  FUNC_0(VAR_0, VAR_1, VAR_7 + sizeof(VAR_4),
       VAR_2, VAR_6);
 }

 VAR_3 += VAR_1->number_of_packets * sizeof(VAR_4);
 return VAR_3;
}
