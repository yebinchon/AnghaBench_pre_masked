
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int chip_status; int lock; } ;
struct snd_vxpocket {int regCDSP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_vxpocket* FUNC_2 (struct vx_core*) ;
 int FUNC_3 (struct vx_core*,int ,int) ;

void FUNC_4(struct vx_core *VAR_5, int VAR_6)
{
 struct snd_vxpocket *VAR_7 = FUNC_2(VAR_5);

 if (VAR_5->chip_status & VAR_4)
  return;

 FUNC_0(&VAR_5->lock);
 if (VAR_7->regCDSP & VAR_3) {
  if (VAR_6) {

   VAR_7->regCDSP &= ~VAR_1;
   VAR_7->regCDSP |= VAR_2;
  } else {

   VAR_7->regCDSP |= VAR_1;
   VAR_7->regCDSP &= ~VAR_2;
                }
  FUNC_3(VAR_5, VAR_0, VAR_7->regCDSP);
 }
 FUNC_1(&VAR_5->lock);
}
