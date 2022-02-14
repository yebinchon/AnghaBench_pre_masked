
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int context; } ;
struct snd_usb_endpoint {int use_count; unsigned int nurbs; scalar_t__ flags; scalar_t__ active_mask; TYPE_1__* chip; int pipe; struct snd_urb_ctx* urb; int ready_playback_urbs; scalar_t__ phase; scalar_t__ unlink_mask; } ;
struct snd_urb_ctx {struct urb* urb; int ready_list; } ;
struct TYPE_2__ {int shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (unsigned int,scalar_t__*) ;
 int FUNC_2 (struct snd_usb_endpoint*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct snd_usb_endpoint*,int ) ;
 int FUNC_5 (struct snd_usb_endpoint*,int ) ;
 int FUNC_6 (unsigned int,scalar_t__*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct snd_usb_endpoint*) ;
 int FUNC_9 (struct snd_usb_endpoint*) ;
 int FUNC_10 (TYPE_1__*,char*,unsigned int,int,int ) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct urb*,int ) ;

int FUNC_14(struct snd_usb_endpoint *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;

 if (FUNC_0(&VAR_4->chip->shutdown))
  return -VAR_0;


 if (++VAR_4->use_count != 1)
  return 0;


 FUNC_2(VAR_4, 0);

 VAR_4->active_mask = 0;
 VAR_4->unlink_mask = 0;
 VAR_4->phase = 0;

 FUNC_9(VAR_4);
 FUNC_6(VAR_2, &VAR_4->flags);

 if (FUNC_8(VAR_4)) {
  for (VAR_6 = 0; VAR_6 < VAR_4->nurbs; VAR_6++) {
   struct snd_urb_ctx *VAR_7 = VAR_4->urb + VAR_6;
   FUNC_3(&VAR_7->ready_list, &VAR_4->ready_playback_urbs);
  }

  return 0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->nurbs; VAR_6++) {
  struct urb *VAR_8 = VAR_4->urb[VAR_6].urb;

  if (FUNC_7(!VAR_8))
   goto __error;

  if (FUNC_12(VAR_4->pipe)) {
   FUNC_5(VAR_4, VAR_8->context);
  } else {
   FUNC_4(VAR_4, VAR_8->context);
  }

  VAR_5 = FUNC_13(VAR_8, VAR_3);
  if (VAR_5 < 0) {
   FUNC_10(VAR_4->chip,
    "cannot submit urb %d, error %d: %s\n",
    VAR_6, VAR_5, FUNC_11(VAR_5));
   goto __error;
  }
  FUNC_6(VAR_6, &VAR_4->active_mask);
 }

 return 0;

__error:
 FUNC_1(VAR_2, &VAR_4->flags);
 VAR_4->use_count--;
 FUNC_2(VAR_4, 0);
 return -VAR_1;
}
