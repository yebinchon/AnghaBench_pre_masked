
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint32 ;
typedef scalar_t__ MultiXactOffset ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (double*,scalar_t__*) ;
 int VAR_2 ;

int
FUNC_1(void)
{
 MultiXactOffset VAR_3;
 uint32 VAR_4;
 uint32 VAR_5;
 double VAR_6;


 if (!FUNC_0(&VAR_4, &VAR_3))
  return 0;


 if (VAR_3 <= VAR_1)
  return VAR_2;






 VAR_6 = (double) (VAR_3 - VAR_1) /
  (VAR_0 - VAR_1);
 VAR_5 = VAR_4 * VAR_6;


 if (VAR_5 > VAR_4)
  return 0;
 return VAR_4 - VAR_5;
}
