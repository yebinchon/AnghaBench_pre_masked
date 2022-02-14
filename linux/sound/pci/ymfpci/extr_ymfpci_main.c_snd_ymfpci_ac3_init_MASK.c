
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int addr; } ;
struct snd_ymfpci {int reg_lock; TYPE_1__*** bank_effect; TYPE_2__ ac3_tmp_base; int pci; } ;
struct TYPE_3__ {void* loop_end; void* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_ymfpci*,int ) ;
 int FUNC_4 (struct snd_ymfpci*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_ymfpci *VAR_3)
{
 if (FUNC_1(VAR_1, FUNC_2(VAR_3->pci),
    4096, &VAR_3->ac3_tmp_base) < 0)
  return -VAR_0;

 VAR_3->bank_effect[3][0]->base =
 VAR_3->bank_effect[3][1]->base = FUNC_0(VAR_3->ac3_tmp_base.addr);
 VAR_3->bank_effect[3][0]->loop_end =
 VAR_3->bank_effect[3][1]->loop_end = FUNC_0(1024);
 VAR_3->bank_effect[4][0]->base =
 VAR_3->bank_effect[4][1]->base = FUNC_0(VAR_3->ac3_tmp_base.addr + 2048);
 VAR_3->bank_effect[4][0]->loop_end =
 VAR_3->bank_effect[4][1]->loop_end = FUNC_0(1024);

 FUNC_5(&VAR_3->reg_lock);
 FUNC_4(VAR_3, VAR_2,
     FUNC_3(VAR_3, VAR_2) | 3 << 3);
 FUNC_6(&VAR_3->reg_lock);
 return 0;
}
