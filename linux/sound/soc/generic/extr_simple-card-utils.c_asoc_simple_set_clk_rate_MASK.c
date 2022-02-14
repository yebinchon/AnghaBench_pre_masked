
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asoc_simple_dai {int clk; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct asoc_simple_dai *VAR_0,
        unsigned long VAR_1)
{
 if (!VAR_0)
  return 0;

 if (!VAR_0->clk)
  return 0;

 if (FUNC_0(VAR_0->clk) == VAR_1)
  return 0;

 return FUNC_1(VAR_0->clk, VAR_1);
}
