
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs42l42_private {int* bias_thresholds; char plug_state; int regmap; int hs_type; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char VAR_19 ;
 char VAR_20 ;
 char VAR_21 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct cs42l42_private *VAR_22)
{
 unsigned int VAR_23;

 VAR_22->hs_type = VAR_10;


 FUNC_1(VAR_22->regmap, VAR_9,
   VAR_7 |
   VAR_0 |
   VAR_5,
   (1 << VAR_8) |
   (0 << VAR_1) |
   (VAR_22->bias_thresholds[0] <<
   VAR_6));


 FUNC_1(VAR_22->regmap,
   VAR_2,
   VAR_3,
   (1 << VAR_4));


 FUNC_1(VAR_22->regmap, VAR_11,
   VAR_12 |
   VAR_16 |
   VAR_14,
   (3 << VAR_13) |
   (0 << VAR_17) |
   (2 << VAR_15));


 FUNC_0(VAR_22->regmap,
     VAR_18,
     &VAR_23);
 VAR_22->plug_state = (((char) VAR_23) &
        (VAR_19 | VAR_21)) >>
        VAR_20;
}
