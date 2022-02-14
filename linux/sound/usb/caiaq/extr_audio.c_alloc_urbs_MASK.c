
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_iso_packet_descriptor {int offset; int length; } ;
struct usb_device {int dummy; } ;
struct urb {unsigned int pipe; int transfer_buffer_length; int interval; int number_of_packets; int complete; int * context; struct usb_device* dev; struct usb_iso_packet_descriptor* iso_frame_desc; void* transfer_buffer; } ;
struct TYPE_2__ {struct usb_device* dev; } ;
struct snd_usb_caiaqdev {int * data_cb_info; TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int,int,int ) ;
 int VAR_9 ;
 struct urb* FUNC_1 (int,int ) ;
 unsigned int FUNC_2 (struct usb_device*,int ) ;
 unsigned int FUNC_3 (struct usb_device*,int ) ;
 int VAR_10 ;

__attribute__((used)) static struct urb **FUNC_4(struct snd_usb_caiaqdev *VAR_11, int VAR_12, int *VAR_13)
{
 int VAR_14, VAR_15;
 struct urb **VAR_16;
 struct usb_device *VAR_17 = VAR_11->chip.dev;
 unsigned int VAR_18;

 VAR_18 = (VAR_12 == VAR_8) ?
  FUNC_3(VAR_17, VAR_2) :
  FUNC_2(VAR_17, VAR_1);

 VAR_16 = FUNC_0(VAR_6, sizeof(*VAR_16), VAR_5);
 if (!VAR_16) {
  *VAR_13 = -VAR_3;
  return ((void*)0);
 }

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  VAR_16[VAR_14] = FUNC_1(VAR_4, VAR_5);
  if (!VAR_16[VAR_14]) {
   *VAR_13 = -VAR_3;
   return VAR_16;
  }

  VAR_16[VAR_14]->transfer_buffer =
   FUNC_0(VAR_0, VAR_4,
          VAR_5);
  if (!VAR_16[VAR_14]->transfer_buffer) {
   *VAR_13 = -VAR_3;
   return VAR_16;
  }

  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
   struct usb_iso_packet_descriptor *VAR_19 =
    &VAR_16[VAR_14]->iso_frame_desc[VAR_15];

   VAR_19->offset = VAR_0 * VAR_15;
   VAR_19->length = VAR_0;
  }

  VAR_16[VAR_14]->dev = VAR_17;
  VAR_16[VAR_14]->pipe = VAR_18;
  VAR_16[VAR_14]->transfer_buffer_length = VAR_4
      * VAR_0;
  VAR_16[VAR_14]->context = &VAR_11->data_cb_info[VAR_14];
  VAR_16[VAR_14]->interval = 1;
  VAR_16[VAR_14]->number_of_packets = VAR_4;
  VAR_16[VAR_14]->complete = (VAR_12 == VAR_7) ?
     VAR_9 : VAR_10;
 }

 *VAR_13 = 0;
 return VAR_16;
}
