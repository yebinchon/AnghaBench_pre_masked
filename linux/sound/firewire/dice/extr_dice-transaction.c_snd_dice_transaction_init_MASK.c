
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_address_handler {int length; struct snd_dice* callback_data; int address_callback; } ;
struct snd_dice {struct fw_address_handler notification_handler; } ;


 int VAR_0 ;
 int FUNC_0 (struct fw_address_handler*,int *) ;
 int FUNC_1 (struct fw_address_handler*) ;
 int VAR_1 ;
 int FUNC_2 (struct snd_dice*) ;
 int FUNC_3 (struct snd_dice*,int) ;

int FUNC_4(struct snd_dice *VAR_2)
{
 struct fw_address_handler *VAR_3 = &VAR_2->notification_handler;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_3->length = 4;
 VAR_3->address_callback = VAR_0;
 VAR_3->callback_data = VAR_2;
 VAR_4 = FUNC_0(VAR_3, &VAR_1);
 if (VAR_4 < 0) {
  VAR_3->callback_data = ((void*)0);
  return VAR_4;
 }


 VAR_4 = FUNC_3(VAR_2, 1);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3);
  VAR_3->callback_data = ((void*)0);
 }

 return VAR_4;
}
