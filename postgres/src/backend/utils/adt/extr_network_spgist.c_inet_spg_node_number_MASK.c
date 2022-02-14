
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int inet ;


 int* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static int
FUNC_3(const inet *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1 < FUNC_2(VAR_0) &&
  FUNC_0(VAR_0)[VAR_1 / 8] & (1 << (7 - VAR_1 % 8)))
  VAR_2 |= 1;
 if (VAR_1 < FUNC_1(VAR_0))
  VAR_2 |= 2;

 return VAR_2;
}
