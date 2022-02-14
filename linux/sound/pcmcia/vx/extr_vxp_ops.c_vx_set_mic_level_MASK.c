
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int chip_status; int lock; } ;
struct snd_vxpocket {int regCDSP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_vxpocket* FUNC_2 (struct vx_core*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vx_core*,int ,int) ;

void FUNC_5(struct vx_core *VAR_3, int VAR_4)
{
 struct snd_vxpocket *VAR_5 = FUNC_2(VAR_3);

 if (VAR_3->chip_status & VAR_2)
  return;

 FUNC_0(&VAR_3->lock);
 if (VAR_5->regCDSP & VAR_1) {
  VAR_4 = FUNC_3(VAR_4);
  FUNC_4(VAR_3, VAR_0, VAR_4);
 }
 FUNC_1(&VAR_3->lock);
}
