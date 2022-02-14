
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vx222 {int regCFG; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_vx222* FUNC_0 (struct vx_core*) ;
 int FUNC_1 (struct snd_vx222*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vx_core *VAR_3, int VAR_4)
{
 struct snd_vx222 *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_1)
  VAR_5->regCFG &= ~VAR_2;
 else
  VAR_5->regCFG |= VAR_2;
 FUNC_1(VAR_5, VAR_0, VAR_5->regCFG);
}
