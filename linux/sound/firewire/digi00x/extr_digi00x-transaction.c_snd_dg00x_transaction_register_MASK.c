
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; struct snd_dg00x* callback_data; int address_callback; } ;
struct snd_dg00x {TYPE_1__ async_handler; } ;
struct fw_address_region {int start; int end; } ;


 int FUNC_0 (TYPE_1__*,struct fw_address_region const*) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_dg00x*) ;
 int FUNC_2 (struct snd_dg00x*) ;

int FUNC_3(struct snd_dg00x *VAR_1)
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

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 < 0)
  FUNC_2(VAR_1);

 return VAR_3;
}
