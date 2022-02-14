
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_address_handler {int * callback_data; } ;
struct snd_dice {struct fw_address_handler notification_handler; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_dice*,int) ;

int FUNC_1(struct snd_dice *VAR_1)
{
 struct fw_address_handler *VAR_2 = &VAR_1->notification_handler;

 if (VAR_2->callback_data == ((void*)0))
  return -VAR_0;

 return FUNC_0(VAR_1, 0);
}
