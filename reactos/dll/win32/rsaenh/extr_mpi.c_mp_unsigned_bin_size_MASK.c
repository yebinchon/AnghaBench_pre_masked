
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_int ;


 int FUNC_0 (int const*) ;

int
FUNC_1 (const mp_int * VAR_0)
{
  int VAR_1 = FUNC_0 (VAR_0);
  return (VAR_1 / 8 + ((VAR_1 & 7) != 0 ? 1 : 0));
}
