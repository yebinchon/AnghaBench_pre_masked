
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sample_t ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_0)
{
  FUNC_0 (VAR_0);

  sample_t VAR_1;
  uint32_t VAR_2 = 0;
  if (FUNC_2 (VAR_0, 1))
    VAR_2 = FUNC_3 (VAR_0, 1);
  if (!FUNC_4 (&VAR_1, VAR_2))
    return 0;
  else
    return FUNC_1 (VAR_0, &VAR_1);
}
