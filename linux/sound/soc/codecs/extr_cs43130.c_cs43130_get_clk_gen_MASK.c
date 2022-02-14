
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs43130_clk_gen {int mclk_int; int fs; } ;



__attribute__((used)) static const struct cs43130_clk_gen *FUNC_0(int VAR_0, int VAR_1,
  const struct cs43130_clk_gen *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4].mclk_int == VAR_0 &&
      VAR_2[VAR_4].fs == VAR_1)
   return &VAR_2[VAR_4];
 }

 return ((void*)0);
}
