
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static double
FUNC_1(void)
{
 int VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 VAR_5 = VAR_3 - VAR_4;

 if (VAR_5 == 0)
  return (double) 0;

 if (VAR_5 < 0)
 {

  VAR_5 += VAR_1 + 1;
 }

 return (double) VAR_5 / (double) ((VAR_1 + 1) / 2);
}
