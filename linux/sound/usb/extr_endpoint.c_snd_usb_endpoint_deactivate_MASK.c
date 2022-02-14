
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_endpoint {scalar_t__ use_count; } ;


 int FUNC_0 (struct snd_usb_endpoint*,int) ;
 int FUNC_1 (struct snd_usb_endpoint*) ;

void FUNC_2(struct snd_usb_endpoint *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->use_count != 0)
  return;

 FUNC_0(VAR_0, 1);
 FUNC_1(VAR_0);
}
