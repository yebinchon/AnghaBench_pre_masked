
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 long FUNC_0 (unsigned long,unsigned long) ;
 long VAR_0 ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(*VAR_3, VAR_2);
 if (VAR_4 > 128)
  return -VAR_0;

 return FUNC_0(*VAR_3, VAR_4);
}
