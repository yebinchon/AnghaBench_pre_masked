
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci {int reg_lock; } ;
struct snd_timer {int dummy; } ;


 int VAR_0 ;
 struct snd_ymfpci* FUNC_0 (struct snd_timer*) ;
 int FUNC_1 (struct snd_ymfpci*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_timer *VAR_1)
{
 struct snd_ymfpci *VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(&VAR_2->reg_lock, VAR_3);
 FUNC_1(VAR_2, VAR_0, 0x00);
 FUNC_3(&VAR_2->reg_lock, VAR_3);
 return 0;
}
