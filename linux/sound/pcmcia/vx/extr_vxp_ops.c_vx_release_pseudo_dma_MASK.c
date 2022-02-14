
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vxpocket {int regDIALOG; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_vxpocket* FUNC_0 (struct vx_core*) ;
 int FUNC_1 (struct snd_vxpocket*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct vx_core *VAR_5)
{
 struct snd_vxpocket *VAR_6 = FUNC_0(VAR_5);


 VAR_6->regDIALOG &= ~(VAR_4|
        VAR_3|
        VAR_2);
 FUNC_1(VAR_6, VAR_0, VAR_6->regDIALOG);

 FUNC_1(VAR_6, VAR_1, 0);
}
