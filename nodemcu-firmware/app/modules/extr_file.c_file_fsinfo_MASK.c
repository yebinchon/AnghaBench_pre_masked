
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
typedef int lua_State ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (char*,int*,int*) ;

__attribute__((used)) static int FUNC_4( lua_State* VAR_0 )
{
  u32_t VAR_1, VAR_2;
  if (FUNC_3("", &VAR_1, &VAR_2)) {
    return FUNC_1(VAR_0, "file system failed");
  }
  FUNC_0("total: %d, used:%d\n", VAR_1, VAR_2);
  if(VAR_1>0x7FFFFFFF || VAR_2>0x7FFFFFFF || VAR_2 > VAR_1)
  {
    return FUNC_1(VAR_0, "file system error");
  }
  FUNC_2(VAR_0, VAR_1-VAR_2);
  FUNC_2(VAR_0, VAR_2);
  FUNC_2(VAR_0, VAR_1);
  return 3;
}
