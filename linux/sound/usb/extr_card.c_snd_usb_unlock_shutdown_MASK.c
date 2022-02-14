
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int shutdown_wait; int usage_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_usb_audio*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct snd_usb_audio *VAR_0)
{
 FUNC_1(VAR_0);
 if (FUNC_0(&VAR_0->usage_count))
  FUNC_2(&VAR_0->shutdown_wait);
}
