
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (char*,int,size_t) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int,char const*,size_t) ;

__attribute__((used)) static int FUNC_3(lua_State* VAR_0, const void* VAR_1, size_t VAR_2, void* VAR_3)
{
  FUNC_1(VAR_0);
  int VAR_4 = *( (int *)VAR_3 );
  if (!VAR_4)
    return 1;
  FUNC_0("get fd:%d,size:%d\n", VAR_4, VAR_2);

  if (VAR_2 != 0 && (VAR_2 != FUNC_2(VAR_4, (const char *)VAR_1, VAR_2)) )
    return 1;
  FUNC_0("write fd:%d,size:%d\n", VAR_4, VAR_2);
  return 0;
}
