
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int regCDSP; scalar_t__ type; int regSELMIC; } ;
struct snd_vx222 {int regCDSP; scalar_t__ type; int regSELMIC; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int) ;
 struct vx_core* FUNC_1 (struct vx_core*) ;
 int FUNC_2 (struct vx_core*,int ) ;
 int FUNC_3 (struct vx_core*,int ) ;
 int FUNC_4 (struct vx_core*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct vx_core *VAR_13)
{
 struct snd_vx222 *VAR_14 = FUNC_1(VAR_13);


 FUNC_4(VAR_14, VAR_4, VAR_14->regCDSP &~ VAR_10);
 FUNC_3(VAR_14, VAR_4);
 FUNC_0(10);

 VAR_14->regCDSP |= VAR_10;
 FUNC_4(VAR_14, VAR_4, VAR_14->regCDSP);
 FUNC_3(VAR_14, VAR_4);
 if (VAR_13->type == VAR_11) {
  FUNC_0(1);
  return;
 }

 FUNC_0(5);

 FUNC_2(VAR_13, VAR_2);

 FUNC_2(VAR_13, VAR_0);
 FUNC_2(VAR_13, VAR_1);
 FUNC_2(VAR_13, VAR_3);

 if (VAR_13->type == VAR_12) {

  VAR_14->regSELMIC = VAR_5 |
   VAR_8 |
   VAR_6;


  VAR_14->regSELMIC &= ~VAR_7;

  FUNC_4(VAR_13, VAR_9, VAR_14->regSELMIC);
 }
}
