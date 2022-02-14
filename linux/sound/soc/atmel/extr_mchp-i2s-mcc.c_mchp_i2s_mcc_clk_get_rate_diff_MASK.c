
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 unsigned int FUNC_0 (unsigned long) ;
 long FUNC_1 (struct clk*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_0,
       unsigned long VAR_1,
       struct clk **VAR_2,
       unsigned long *VAR_3,
       unsigned long *VAR_4)
{
 long VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_1(VAR_0, VAR_1);
 if (VAR_5 < 0)
  return (int)VAR_5;

 VAR_6 = FUNC_0(VAR_1 - VAR_5);
 if (VAR_6 < *VAR_4) {
  *VAR_2 = VAR_0;
  *VAR_4 = VAR_6;
  *VAR_3 = VAR_1;
 }

 return 0;
}
