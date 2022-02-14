
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_id {int card; int device; scalar_t__ subdevice; int dev_sclass; int dev_class; } ;
struct snd_timer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,struct snd_timer_id*,struct snd_timer**) ;

int FUNC_1(char *VAR_2, int VAR_3, struct snd_timer **VAR_4)
{
 struct snd_timer_id VAR_5;

 VAR_5.dev_class = VAR_0;
 VAR_5.dev_sclass = VAR_1;
 VAR_5.card = -1;
 VAR_5.device = VAR_3;
 VAR_5.subdevice = 0;
 return FUNC_0(((void*)0), VAR_2, &VAR_5, VAR_4);
}
