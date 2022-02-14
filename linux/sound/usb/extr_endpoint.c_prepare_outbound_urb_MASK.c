
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {unsigned char* transfer_buffer; TYPE_2__* iso_frame_desc; int dev; } ;
struct snd_usb_endpoint {int type; unsigned char freqn; TYPE_1__* chip; int data_subs; int (* prepare_data_urb ) (int ,struct urb*) ;} ;
struct snd_urb_ctx {struct urb* urb; } ;
struct TYPE_4__ {int length; int offset; } ;
struct TYPE_3__ {int dev; } ;




 int VAR_0 ;
 int FUNC_0 (struct snd_usb_endpoint*,struct snd_urb_ctx*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct urb*) ;

__attribute__((used)) static void FUNC_3(struct snd_usb_endpoint *VAR_1,
     struct snd_urb_ctx *VAR_2)
{
 struct urb *VAR_3 = VAR_2->urb;
 unsigned char *VAR_4 = VAR_3->transfer_buffer;

 VAR_3->dev = VAR_1->chip->dev;

 switch (VAR_1->type) {
 case 129:
  if (VAR_1->prepare_data_urb) {
   VAR_1->prepare_data_urb(VAR_1->data_subs, VAR_3);
  } else {

   FUNC_0(VAR_1, VAR_2);
  }
  break;

 case 128:
  if (FUNC_1(VAR_1->chip->dev) >= VAR_0) {




   VAR_3->iso_frame_desc[0].length = 4;
   VAR_3->iso_frame_desc[0].offset = 0;
   VAR_4[0] = VAR_1->freqn;
   VAR_4[1] = VAR_1->freqn >> 8;
   VAR_4[2] = VAR_1->freqn >> 16;
   VAR_4[3] = VAR_1->freqn >> 24;
  } else {




   VAR_3->iso_frame_desc[0].length = 3;
   VAR_3->iso_frame_desc[0].offset = 0;
   VAR_4[0] = VAR_1->freqn >> 2;
   VAR_4[1] = VAR_1->freqn >> 10;
   VAR_4[2] = VAR_1->freqn >> 18;
  }

  break;
 }
}
