
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs43130_pll_params {unsigned int pll_in; unsigned int pll_out; } ;


 int FUNC_0 (struct cs43130_pll_params const*) ;
 struct cs43130_pll_params const* VAR_0 ;

__attribute__((used)) static const struct cs43130_pll_params *FUNC_1(
  unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3].pll_in == VAR_1 &&
      VAR_0[VAR_3].pll_out == VAR_2)
   return &VAR_0[VAR_3];
 }

 return ((void*)0);
}
