
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int ,size_t*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int ,char const*,size_t) ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_3 )
{
  VAR_0;

  if(!VAR_2)
    return FUNC_1(VAR_3, "open a file first");
  size_t VAR_4, VAR_5;
  const char *VAR_6 = FUNC_0(VAR_3, VAR_1, &VAR_4);
  VAR_5 = FUNC_4(VAR_2, VAR_6, VAR_4);
  if(VAR_5==VAR_4)
    FUNC_2(VAR_3, 1);
  else
    FUNC_3(VAR_3);
  return 1;
}
