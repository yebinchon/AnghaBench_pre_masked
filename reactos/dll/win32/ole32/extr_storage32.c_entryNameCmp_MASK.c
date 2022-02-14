
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OLECHAR ;
typedef scalar_t__ LONG ;


 scalar_t__ FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static LONG FUNC_2(
    const OLECHAR *VAR_0,
    const OLECHAR *VAR_1)
{
  LONG VAR_2 = FUNC_0(VAR_0) - FUNC_0(VAR_1);

  while (VAR_2 == 0 && *VAR_0 != 0)
  {



    VAR_2 = FUNC_1(*VAR_0++) - FUNC_1(*VAR_1++);
  }

  return VAR_2;
}
