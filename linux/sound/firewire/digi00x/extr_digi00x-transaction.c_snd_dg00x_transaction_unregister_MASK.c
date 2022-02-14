
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * callback_data; } ;
struct snd_dg00x {TYPE_1__ async_handler; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct snd_dg00x *VAR_0)
{
 if (VAR_0->async_handler.callback_data == ((void*)0))
  return;

 FUNC_0(&VAR_0->async_handler);

 VAR_0->async_handler.callback_data = ((void*)0);
}
