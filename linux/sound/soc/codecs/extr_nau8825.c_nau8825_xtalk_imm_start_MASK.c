
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8825 {int xtalk_state; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct nau8825 *VAR_9, int VAR_10)
{

 FUNC_1(VAR_9->regmap, VAR_6,
    VAR_0, VAR_10);



 FUNC_1(VAR_9->regmap, VAR_7,
  VAR_4 | VAR_3,
  VAR_3);
 switch (VAR_9->xtalk_state) {
 case 128:

  FUNC_1(VAR_9->regmap, VAR_7,
   VAR_2 | VAR_1,
   VAR_2);
  break;
 case 129:

  FUNC_1(VAR_9->regmap, VAR_7,
   VAR_2 | VAR_1,
   VAR_1);
  break;
 default:
  break;
 }
 FUNC_0(100);

 FUNC_1(VAR_9->regmap, VAR_8,
    VAR_5, VAR_5);
}
