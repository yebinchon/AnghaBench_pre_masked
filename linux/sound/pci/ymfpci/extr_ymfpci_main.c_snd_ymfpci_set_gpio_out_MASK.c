
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_ymfpci {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ymfpci*,int ) ;
 int FUNC_1 (struct snd_ymfpci*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_ymfpci *VAR_2, int VAR_3, int VAR_4)
{
 u16 VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_2->reg_lock, VAR_6);
 VAR_5 = FUNC_0(VAR_2, VAR_0);
 VAR_5 &= ~(1 << VAR_3);
 VAR_5 &= ~(1 << (VAR_3 + 8));
 FUNC_1(VAR_2, VAR_0, VAR_5);
 FUNC_1(VAR_2, VAR_1, VAR_4 << VAR_3);
 FUNC_1(VAR_2, VAR_0, VAR_5 | (1 << (VAR_3 + 8)));
 FUNC_3(&VAR_2->reg_lock, VAR_6);

 return 0;
}
