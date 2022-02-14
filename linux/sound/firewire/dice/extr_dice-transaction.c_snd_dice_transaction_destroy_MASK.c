
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_address_handler {int * callback_data; } ;
struct snd_dice {struct fw_address_handler notification_handler; } ;


 int FUNC_0 (struct fw_address_handler*) ;
 int FUNC_1 (struct snd_dice*) ;

void FUNC_2(struct snd_dice *VAR_0)
{
 struct fw_address_handler *VAR_1 = &VAR_0->notification_handler;

 if (VAR_1->callback_data == ((void*)0))
  return;

 FUNC_1(VAR_0);

 FUNC_0(VAR_1);
 VAR_1->callback_data = ((void*)0);
}
