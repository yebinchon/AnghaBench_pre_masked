
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_endpoint {scalar_t__ use_count; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_usb_endpoint*,int) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct snd_usb_endpoint *VAR_1)
{
 if (!VAR_1)
  return;

 if (FUNC_2(VAR_1->use_count == 0))
  return;

 if (--VAR_1->use_count == 0) {
  FUNC_0(VAR_1, 0);
  FUNC_1(VAR_0, &VAR_1->flags);
 }
}
