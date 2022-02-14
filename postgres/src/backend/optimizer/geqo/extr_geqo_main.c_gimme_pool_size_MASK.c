
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (double) ;
 double FUNC_1 (double,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_2)
{
 double VAR_3;
 int VAR_4;
 int VAR_5;


 if (VAR_1 >= 2)
  return VAR_1;

 VAR_3 = FUNC_1(2.0, VAR_2 + 1.0);

 VAR_5 = 50 * VAR_0;
 if (VAR_3 > VAR_5)
  return VAR_5;

 VAR_4 = 10 * VAR_0;
 if (VAR_3 < VAR_4)
  return VAR_4;

 return (int) FUNC_0(VAR_3);
}
