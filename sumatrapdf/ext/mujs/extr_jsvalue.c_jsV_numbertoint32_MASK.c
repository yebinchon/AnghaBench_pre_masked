
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double,double) ;
 int FUNC_3 (double) ;

int FUNC_4(double VAR_0)
{
 double VAR_1 = 4294967296.0;
 double VAR_2 = 2147483648.0;

 if (!FUNC_3(VAR_0) || VAR_0 == 0)
  return 0;

 VAR_0 = FUNC_2(VAR_0, VAR_1);
 VAR_0 = VAR_0 >= 0 ? FUNC_1(VAR_0) : FUNC_0(VAR_0) + VAR_1;
 if (VAR_0 >= VAR_2)
  return VAR_0 - VAR_1;
 else
  return VAR_0;
}
