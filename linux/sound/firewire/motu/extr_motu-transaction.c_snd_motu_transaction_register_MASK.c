
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int * address_callback; struct snd_motu* callback_data; } ;
struct snd_motu {TYPE_1__ async_handler; } ;
struct fw_address_region {int start; int end; } ;


 int FUNC_0 (TYPE_1__*,struct fw_address_region const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * VAR_0 ;
 int FUNC_2 (struct snd_motu*) ;

int FUNC_3(struct snd_motu *VAR_1)
{
 static const struct fw_address_region VAR_2 = {
  .start = 0xffffe0000000ull,
  .end = 0xffffe000ffffull,
 };
 int VAR_3;


 VAR_1->async_handler.length = 4;
 VAR_1->async_handler.address_callback = VAR_0;
 VAR_1->async_handler.callback_data = VAR_1;

 VAR_3 = FUNC_0(&VAR_1->async_handler,
       &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0) {
  FUNC_1(&VAR_1->async_handler);
  VAR_1->async_handler.address_callback = ((void*)0);
 }

 return VAR_3;
}
