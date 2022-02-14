
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int inet ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(inet *VAR_0, inet *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = (int) FUNC_0(VAR_0) - (int) FUNC_0(VAR_1);





 if ((VAR_3 > 0 && VAR_2 >= 0) ||
  (VAR_3 == 0 && VAR_2 >= -1 && VAR_2 <= 1) ||
  (VAR_3 < 0 && VAR_2 <= 0))
  return 0;






 return VAR_2;
}
