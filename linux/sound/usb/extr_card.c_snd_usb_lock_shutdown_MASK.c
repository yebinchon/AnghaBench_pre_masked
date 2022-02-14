
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_audio {int shutdown_wait; int usage_count; int shutdown; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct snd_usb_audio*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct snd_usb_audio *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->usage_count);
 if (FUNC_2(&VAR_1->shutdown)) {
  VAR_2 = -VAR_0;
  goto error;
 }
 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0)
  goto error;
 return 0;

 error:
 if (FUNC_0(&VAR_1->usage_count))
  FUNC_4(&VAR_1->shutdown_wait);
 return VAR_2;
}
