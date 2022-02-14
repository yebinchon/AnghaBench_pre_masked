
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs35l36_private {int dummy; } ;
struct cs35l36_pll_config {int freq; } ;


 int FUNC_0 (struct cs35l36_pll_config const*) ;
 struct cs35l36_pll_config const* VAR_0 ;

__attribute__((used)) static const struct cs35l36_pll_config *FUNC_1(
  struct cs35l36_private *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3].freq == VAR_2)
   return &VAR_0[VAR_3];
 }

 return ((void*)0);
}
