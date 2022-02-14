
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct snd_vxpocket* FUNC_0 (struct vx_core*) ;
 int FUNC_1 (struct snd_vxpocket*,int ) ;
 int FUNC_2 (struct snd_vxpocket*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vx_core *VAR_8, int VAR_9)
{
 struct snd_vxpocket *VAR_10 = FUNC_0(VAR_8);


 FUNC_2(VAR_10, VAR_1, VAR_9 ? VAR_3 : VAR_2);

 FUNC_1(VAR_10, VAR_4);
 FUNC_2(VAR_10, VAR_4, 0);


 VAR_10->regDIALOG |= VAR_5;
 VAR_10->regDIALOG |= VAR_9 ? VAR_7 : VAR_6;
 FUNC_2(VAR_10, VAR_0, VAR_10->regDIALOG);

}
