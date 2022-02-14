
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3sa2 {int reg_lock; } ;


 unsigned char FUNC_0 (struct snd_opl3sa2*,unsigned char) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned char FUNC_3(struct snd_opl3sa2 *VAR_0, unsigned char VAR_1)
{
 unsigned long VAR_2;
 unsigned char VAR_3;

 FUNC_1(&VAR_0->reg_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->reg_lock, VAR_2);
 return VAR_3;
}
