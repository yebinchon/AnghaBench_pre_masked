
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct cs43130_bitwidth_map {int ch_bit; int sp_bit; } ;


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
 struct cs43130_bitwidth_map* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct regmap*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(int VAR_10, unsigned int VAR_11,
     struct regmap *VAR_12)
{
 const struct cs43130_bitwidth_map *VAR_13;

 VAR_13 = FUNC_0(VAR_11);
 if (!VAR_13)
  return -VAR_9;

 switch (VAR_10) {
 case 129:
 case 130:
  FUNC_1(VAR_12, VAR_1,
       VAR_3, VAR_13->ch_bit);
  FUNC_1(VAR_12, VAR_2,
       VAR_3, VAR_13->ch_bit);
  FUNC_1(VAR_12, VAR_4,
       VAR_0, VAR_13->sp_bit);
  break;
 case 128:
  FUNC_1(VAR_12, VAR_7,
       VAR_3, VAR_13->ch_bit);
  FUNC_1(VAR_12, VAR_8,
       VAR_3, VAR_13->ch_bit);
  FUNC_1(VAR_12, VAR_4,
       VAR_5, VAR_13->sp_bit <<
       VAR_6);
  break;
 default:
  return -VAR_9;
 }

 return 0;
}
