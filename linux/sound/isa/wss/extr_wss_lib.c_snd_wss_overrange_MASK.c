
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_wss {TYPE_2__* capture_substream; int reg_lock; } ;
struct TYPE_4__ {TYPE_1__* runtime; } ;
struct TYPE_3__ {int overrange; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (struct snd_wss*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct snd_wss *VAR_1)
{
 unsigned long VAR_2;
 unsigned char VAR_3;

 FUNC_1(&VAR_1->reg_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_0);
 FUNC_2(&VAR_1->reg_lock, VAR_2);
 if (VAR_3 & (0x08 | 0x02))
  VAR_1->capture_substream->runtime->overrange++;
}
