
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char const*,char const*,char const*,int ) ;
 char* FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_6 )
{
  int VAR_7;
  const char * VAR_8 = FUNC_1(VAR_6, 1, &VAR_7);
  const char * VAR_9 = ((void*)0);
  const char * VAR_10 = ((void*)0);


  if (VAR_8 == ((void*)0))
  {
    return FUNC_2( VAR_6, "wrong arg type" );
  }

  if (FUNC_5(VAR_6, 2))
  {
    VAR_9 = FUNC_1(VAR_6, 2, &VAR_7);
  }
  if (FUNC_5(VAR_6, 3))
  {
    VAR_10 = FUNC_1(VAR_6, 3, &VAR_7);
  }

  if (FUNC_7(VAR_6, 4) == VAR_2 || FUNC_7(VAR_6, 4) == VAR_3) {
    FUNC_6(VAR_6, 4);
    if (VAR_5 != VAR_0)
      FUNC_4(VAR_6, VAR_1, VAR_5);
    VAR_5 = FUNC_3(VAR_6, VAR_1);
  }

  FUNC_0(VAR_8, VAR_9, VAR_10, VAR_4);
  return 0;
}
