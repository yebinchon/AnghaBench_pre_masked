
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_sequence {int member_0; int member_1; } ;
struct ad193x_priv {int regmap; } ;


 int FUNC_0 (struct reg_sequence const*) ;
 scalar_t__ FUNC_1 (struct ad193x_priv*) ;
 int FUNC_2 (int ,struct reg_sequence const*,int ) ;

__attribute__((used)) static void FUNC_3(struct ad193x_priv *VAR_0)
{
 static const struct reg_sequence VAR_1[] = {
  { 0, 0x99 },
  { 1, 0x04 },
  { 2, 0x40 },
  { 3, 0x00 },
  { 4, 0x1A },
  { 5, 0x00 },
  { 6, 0x00 },
  { 7, 0x00 },
  { 8, 0x00 },
  { 9, 0x00 },
  { 10, 0x00 },
  { 11, 0x00 },
  { 12, 0x00 },
  { 13, 0x00 },
 };
 static const struct reg_sequence VAR_2[] = {
  { 14, 0x03 },
  { 15, 0x43 },
  { 16, 0x00 },
 };

 FUNC_2(VAR_0->regmap, VAR_1, FUNC_0(VAR_1));

 if (FUNC_1(VAR_0)) {
  FUNC_2(VAR_0->regmap, VAR_2,
           FUNC_0(VAR_2));
 }
}
