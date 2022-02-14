
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int chip_status; } ;
struct snd_vxpocket {int regDIALOG; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct snd_vxpocket* FUNC_0 (struct vx_core*) ;
 int FUNC_1 (struct snd_vxpocket*,int ) ;
 int FUNC_2 (struct snd_vxpocket*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct vx_core *VAR_6)
{
 struct snd_vxpocket *VAR_7 = FUNC_0(VAR_6);


 if (! (VAR_6->chip_status & VAR_5))
  return -VAR_2;

 if (! (FUNC_1(VAR_7, VAR_0) & VAR_4))
  return -VAR_1;



 FUNC_2(VAR_7, VAR_0, VAR_7->regDIALOG | VAR_3);



 FUNC_1(VAR_7, VAR_0);
 FUNC_2(VAR_7, VAR_0, VAR_7->regDIALOG & ~VAR_3);

 return 0;
}
