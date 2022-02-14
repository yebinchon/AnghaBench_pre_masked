
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double
FUNC_0(int VAR_0, double VAR_1)
{
 double VAR_2 = VAR_0;
 double VAR_3 = VAR_1;
 double VAR_4,
    VAR_5;

 VAR_4 = VAR_2 * (VAR_3 - VAR_2);
 VAR_5 = VAR_3 - VAR_2 + 0.04 * VAR_2 * (VAR_3 - 1);


 if (VAR_5 == 0.0)
  return 0.0;

 return VAR_4 / VAR_5;
}
