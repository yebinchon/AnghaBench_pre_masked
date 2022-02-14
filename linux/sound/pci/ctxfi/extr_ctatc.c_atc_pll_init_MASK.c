
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int (* pll_init ) (struct hw*,int) ;} ;
struct ct_atc {int pll_rate; struct hw* hw; } ;


 int FUNC_0 (struct hw*,int) ;

__attribute__((used)) static int FUNC_1(struct ct_atc *VAR_0, int VAR_1)
{
 struct hw *VAR_2 = VAR_0->hw;
 int VAR_3;
 VAR_3 = VAR_2->pll_init(VAR_2, VAR_1);
 VAR_0->pll_rate = VAR_3 ? 0 : VAR_1;
 return VAR_3;
}
