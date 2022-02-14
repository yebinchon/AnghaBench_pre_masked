
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4( lua_State* VAR_2 )
{
  VAR_0;

  if(!VAR_1)
    return FUNC_0(VAR_2, "open a file first");
  if(FUNC_3(VAR_1) == 0)
    FUNC_1(VAR_2, 1);
  else
    FUNC_2(VAR_2);
  return 1;
}
