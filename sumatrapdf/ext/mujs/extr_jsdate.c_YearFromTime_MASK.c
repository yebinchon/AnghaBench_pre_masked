
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (int) ;
 double FUNC_1 (int) ;
 int FUNC_2 (double) ;
 double VAR_0 ;

__attribute__((used)) static int FUNC_3(double VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1 / (VAR_0 * 365.2425)) + 1970;
 double VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 > VAR_1)
  --VAR_2;
 else if (VAR_3 + VAR_0 * FUNC_0(VAR_2) <= VAR_1)
  ++VAR_2;
 return VAR_2;
}
