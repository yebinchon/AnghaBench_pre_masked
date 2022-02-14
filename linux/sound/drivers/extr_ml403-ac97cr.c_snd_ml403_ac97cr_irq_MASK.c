
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ml403_ac97cr {int capture_ind2_rec; int capture_substream; scalar_t__ enable_capture_irq; int ind_rec; int playback_substream; scalar_t__ enable_irq; struct platform_device* pfdev; } ;
struct platform_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct platform_device*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ,int *,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct snd_ml403_ac97cr *VAR_9;
 struct platform_device *VAR_10;
 int VAR_11;

 VAR_9 = (struct snd_ml403_ac97cr *)VAR_8;
 if (VAR_9 == ((void*)0))
  return VAR_2;

 VAR_10 = VAR_9->pfdev;


 VAR_11 = FUNC_2(VAR_10, 0);
 if (VAR_7 == VAR_11) {
  if (VAR_9->enable_irq)
   FUNC_4(
    VAR_9->playback_substream,
    &VAR_9->ind_rec,
    VAR_5,
    VAR_6);
  else
   goto __disable_irq;
 } else {

  VAR_11 = FUNC_2(VAR_10, 1);
  if (VAR_7 == VAR_11) {
   if (VAR_9->enable_capture_irq)
    FUNC_3(
     VAR_9->capture_substream,
     &VAR_9->capture_ind2_rec,
     VAR_3,
     VAR_4);
   else
    goto __disable_irq;
  } else
   return VAR_2;
 }
 return VAR_1;

__disable_irq:
 FUNC_0(VAR_0, "irq(): irq %d is meant to be disabled! So, now try "
        "to disable it _really_!\n", VAR_7);
 FUNC_1(VAR_7);
 return VAR_1;
}
