
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; struct snd_urb_ctx* context; } ;
struct snd_usb_endpoint {int active_mask; TYPE_1__* data_subs; TYPE_2__* chip; int flags; int lock; int ready_playback_urbs; int pipe; } ;
struct snd_urb_ctx {int index; int ready_list; struct snd_usb_endpoint* ep; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_4__ {int shutdown; } ;
struct TYPE_3__ {struct snd_pcm_substream* pcm_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct snd_usb_endpoint*,struct snd_urb_ctx*) ;
 int FUNC_4 (struct snd_usb_endpoint*,struct snd_urb_ctx*) ;
 int FUNC_5 (struct snd_usb_endpoint*) ;
 int FUNC_6 (struct snd_usb_endpoint*,struct snd_urb_ctx*) ;
 int FUNC_7 (struct snd_usb_endpoint*,struct snd_urb_ctx*) ;
 int FUNC_8 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_9 (struct snd_usb_endpoint*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (TYPE_2__*,char*,int) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_17(struct urb *VAR_6)
{
 struct snd_urb_ctx *VAR_7 = VAR_6->context;
 struct snd_usb_endpoint *VAR_8 = VAR_7->ep;
 struct snd_pcm_substream *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 if (FUNC_13(VAR_6->status == -VAR_2 ||
       VAR_6->status == -VAR_1 ||
       VAR_6->status == -VAR_0 ||
       VAR_6->status == -VAR_4))
  goto exit_clear;

 if (FUNC_13(FUNC_0(&VAR_8->chip->shutdown)))
  goto exit_clear;

 if (FUNC_13(!FUNC_12(VAR_3, &VAR_8->flags)))
  goto exit_clear;

 if (FUNC_15(VAR_8->pipe)) {
  FUNC_7(VAR_8, VAR_7);

  if (FUNC_13(!FUNC_12(VAR_3, &VAR_8->flags)))
   goto exit_clear;

  if (FUNC_9(VAR_8)) {
   FUNC_10(&VAR_8->lock, VAR_10);
   FUNC_2(&VAR_7->ready_list, &VAR_8->ready_playback_urbs);
   FUNC_11(&VAR_8->lock, VAR_10);
   FUNC_5(VAR_8);

   goto exit_clear;
  }

  FUNC_4(VAR_8, VAR_7);
 } else {
  FUNC_6(VAR_8, VAR_7);

  if (FUNC_13(!FUNC_12(VAR_3, &VAR_8->flags)))
   goto exit_clear;

  FUNC_3(VAR_8, VAR_7);
 }

 VAR_11 = FUNC_16(VAR_6, VAR_5);
 if (VAR_11 == 0)
  return;

 FUNC_14(VAR_8->chip, "cannot submit urb (err = %d)\n", VAR_11);
 if (VAR_8->data_subs && VAR_8->data_subs->pcm_substream) {
  VAR_9 = VAR_8->data_subs->pcm_substream;
  FUNC_8(VAR_9);
 }

exit_clear:
 FUNC_1(VAR_7->index, &VAR_8->active_mask);
}
