
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int number_of_packets; TYPE_1__* iso_frame_desc; struct snd_usb_caiaq_cb_info* context; scalar_t__ status; } ;
struct snd_usb_caiaqdev {int outurb_active_mask; int sub_capture; int sub_playback; int spinlock; struct urb** data_urbs_out; int streaming; } ;
struct snd_usb_caiaq_cb_info {int index; struct snd_usb_caiaqdev* cdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int actual_length; int length; size_t offset; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct device* FUNC_0 (struct snd_usb_caiaqdev*) ;
 int FUNC_1 (struct snd_usb_caiaqdev*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct snd_usb_caiaqdev*,struct urb*,TYPE_1__*) ;
 int FUNC_5 (struct snd_usb_caiaqdev*,struct urb*,TYPE_1__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int,int *) ;
 int FUNC_9 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_10(struct urb *VAR_4)
{
 struct snd_usb_caiaq_cb_info *VAR_5 = VAR_4->context;
 struct snd_usb_caiaqdev *VAR_6;
 struct device *VAR_7;
 struct urb *VAR_8 = ((void*)0);
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0, VAR_13 = 0;
 unsigned long VAR_14;
 size_t VAR_15 = 0;

 if (VAR_4->status || !VAR_5)
  return;

 VAR_6 = VAR_5->cdev;
 VAR_7 = FUNC_0(VAR_6);

 if (!VAR_6->streaming)
  return;


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  if (FUNC_8(VAR_9, &VAR_6->outurb_active_mask) == 0) {
   VAR_8 = VAR_6->data_urbs_out[VAR_9];
   break;
  }

 if (!VAR_8) {
  FUNC_3(VAR_7, "Unable to find an output urb to use\n");
  goto requeue;
 }



 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_4->iso_frame_desc[VAR_10].status)
   continue;

  VAR_11 = VAR_4->iso_frame_desc[VAR_13].actual_length;
  VAR_8->iso_frame_desc[VAR_13].length = VAR_11;
  VAR_8->iso_frame_desc[VAR_13].actual_length = 0;
  VAR_8->iso_frame_desc[VAR_13].offset = VAR_15;
  VAR_15 += VAR_11;

  if (VAR_11 > 0) {
   FUNC_6(&VAR_6->spinlock, VAR_14);
   FUNC_4(VAR_6, VAR_8, &VAR_8->iso_frame_desc[VAR_13]);
   FUNC_5(VAR_6, VAR_4, &VAR_4->iso_frame_desc[VAR_10]);
   FUNC_7(&VAR_6->spinlock, VAR_14);
   FUNC_1(VAR_6, VAR_6->sub_playback);
   FUNC_1(VAR_6, VAR_6->sub_capture);
   VAR_12 = 1;
  }

  VAR_13++;
 }

 if (VAR_12) {
  VAR_8->number_of_packets = VAR_13;
  FUNC_9(VAR_8, VAR_2);
 } else {
  struct snd_usb_caiaq_cb_info *VAR_16 = VAR_8->context;
  FUNC_2(VAR_16->index, &VAR_6->outurb_active_mask);
 }

requeue:

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_4->iso_frame_desc[VAR_10].offset = VAR_0 * VAR_10;
  VAR_4->iso_frame_desc[VAR_10].length = VAR_0;
  VAR_4->iso_frame_desc[VAR_10].actual_length = 0;
 }

 VAR_4->number_of_packets = VAR_1;
 FUNC_9(VAR_4, VAR_2);
}
