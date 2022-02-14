
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef int lua_State ;


 void* VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (int ,void*,void*) ;
 int FUNC_8 (int,int,void*) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_1)
{
  uint32_t VAR_2 = VAR_0;
  uint32_t VAR_3 = 0;
  int VAR_4 = -1, VAR_5 = -1;

  if (FUNC_4 (VAR_1, 1))
  {







    FUNC_1 (VAR_1, 1, "sensor_count");
    if (FUNC_3 (VAR_1, -1))
      VAR_2 = FUNC_6 (VAR_1, -1);
    FUNC_5 (VAR_1, 1);

    FUNC_1 (VAR_1, 1, "storage_begin");
    if (FUNC_3 (VAR_1, -1))
      VAR_4 = FUNC_6 (VAR_1, -1);
    FUNC_5 (VAR_1, 1);
    FUNC_1 (VAR_1, 1, "storage_end");
    if (FUNC_3 (VAR_1, -1))
      VAR_5 = FUNC_6 (VAR_1, -1);
    FUNC_5 (VAR_1, 1);
  }
  else if (!FUNC_2 (VAR_1, 1))
    return FUNC_0 (VAR_1, "expected table as arg #1");

  FUNC_7 (0, VAR_3, VAR_2);

  if (VAR_4 != -1 && VAR_5 != -1)
    FUNC_8 (VAR_4, VAR_5, VAR_2);

  return 0;
}
