
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_id {int card; int device; int subdevice; int dev_sclass; int dev_class; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct snd_timer_id *VAR_2)
{
 VAR_2->dev_class = VAR_0;
 VAR_2->dev_sclass = VAR_1;
 VAR_2->card = -1;
 VAR_2->device = -1;
 VAR_2->subdevice = -1;
}
