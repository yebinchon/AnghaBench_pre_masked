
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * callback_data; } ;
struct snd_ff {TYPE_2__ async_handler; TYPE_1__* spec; int unit; } ;
typedef int reg ;
typedef int __le32 ;
struct TYPE_3__ {int midi_high_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,int *,int,int ) ;

void FUNC_3(struct snd_ff *VAR_1)
{
 __le32 VAR_2;

 if (VAR_1->async_handler.callback_data == ((void*)0))
  return;
 VAR_1->async_handler.callback_data = ((void*)0);


 VAR_2 = FUNC_0(0x00000000);
 FUNC_2(VAR_1->unit, VAR_0,
      VAR_1->spec->midi_high_addr,
      &VAR_2, sizeof(VAR_2), 0);

 FUNC_1(&VAR_1->async_handler);
}
