
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int length; struct snd_tscm* callback_data; int address_callback; } ;
struct snd_tscm {TYPE_2__ async_handler; TYPE_1__* out_ports; int unit; } ;
struct fw_address_region {int start; int end; } ;
struct TYPE_4__ {int work; scalar_t__ next_ktime; int parent; } ;


 int FUNC_0 (int *,int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (TYPE_2__*,struct fw_address_region const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct snd_tscm*) ;

int FUNC_5(struct snd_tscm *VAR_3)
{
 static const struct fw_address_region VAR_4 = {
  .start = 0xffffe0000000ull,
  .end = 0xffffe000ffffull,
 };
 unsigned int VAR_5;
 int VAR_6;






 VAR_3->async_handler.length = 8 * 8;
 VAR_3->async_handler.address_callback = VAR_1;
 VAR_3->async_handler.callback_data = VAR_3;

 VAR_6 = FUNC_1(&VAR_3->async_handler,
       &VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 < 0)
  goto error;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3->out_ports[VAR_5].parent = FUNC_3(VAR_3->unit);
  VAR_3->out_ports[VAR_5].next_ktime = 0;
  FUNC_0(&VAR_3->out_ports[VAR_5].work, VAR_2);
 }

 return VAR_6;
error:
 FUNC_2(&VAR_3->async_handler);
 VAR_3->async_handler.callback_data = ((void*)0);
 return VAR_6;
}
