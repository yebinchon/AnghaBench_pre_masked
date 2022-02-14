
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_wm8766 {int* regs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_wm8766*,size_t,int) ;

void FUNC_1(struct snd_wm8766 *VAR_2)
{
 u16 VAR_3 = VAR_2->regs[VAR_0];

 FUNC_0(VAR_2, VAR_0, VAR_3 | VAR_1);
}
