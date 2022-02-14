
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nau8825 {int xtalk_state; int* imp_rms; int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nau8825*,int) ;
 int FUNC_3 (struct nau8825*,int) ;
 int FUNC_4 (struct nau8825*) ;
 int FUNC_5 (struct nau8825*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static void FUNC_9(struct nau8825 *VAR_3)
{
 u32 VAR_4;

 switch (VAR_3->xtalk_state) {
 case 128:



  FUNC_5(VAR_3);
  FUNC_1(280);

  VAR_3->xtalk_state = 130;
  FUNC_3(VAR_3, 0x00d2);
  break;
 case 130:



  FUNC_7(VAR_3->regmap, VAR_1,
   &VAR_3->imp_rms[130]);
  FUNC_0(VAR_3->dev, "HPR_R2L imm: %x\n",
   VAR_3->imp_rms[130]);

  FUNC_4(VAR_3);

  VAR_3->xtalk_state = 131;
  FUNC_3(VAR_3, 0x00ff);
  break;
 case 131:






  FUNC_7(VAR_3->regmap, VAR_1,
   &VAR_3->imp_rms[131]);
  FUNC_0(VAR_3->dev, "HPL_R2L imm: %x\n",
   VAR_3->imp_rms[131]);
  FUNC_4(VAR_3);
  FUNC_1(150);
  VAR_3->xtalk_state = 129;
  break;
 case 129:





  VAR_4 = FUNC_6(
   VAR_3->imp_rms[130],
   VAR_3->imp_rms[131]);
  FUNC_0(VAR_3->dev, "cross talk sidetone: %x\n", VAR_4);
  FUNC_8(VAR_3->regmap, VAR_0,
     (VAR_4 << 8) | VAR_4);
  FUNC_2(VAR_3, 0);
  VAR_3->xtalk_state = VAR_2;
  break;
 default:
  break;
 }
}
