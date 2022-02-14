
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_ctl {int input_freq; } ;


 int FUNC_0 (struct pll_ctl*) ;
 struct pll_ctl* VAR_0 ;

__attribute__((used)) static const struct pll_ctl *FUNC_1(int VAR_1)
{
 int VAR_2;
 const struct pll_ctl *VAR_3 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2)
  if (VAR_1 == VAR_0[VAR_2].input_freq) {
   VAR_3 = &VAR_0[VAR_2];
   break;
  }

 return VAR_3;
}
