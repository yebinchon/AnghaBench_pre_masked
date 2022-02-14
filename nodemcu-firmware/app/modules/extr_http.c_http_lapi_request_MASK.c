
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char const*,char const*,char const*,int ,int ) ;
 char* FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_5 )
{
  int VAR_6;
  const char * VAR_7 = FUNC_1(VAR_5, 1, &VAR_6);
  const char * VAR_8 = FUNC_1(VAR_5, 2, &VAR_6);
  const char * VAR_9 = ((void*)0);
  const char * VAR_10 = ((void*)0);


  if ((VAR_7 == ((void*)0)) || (VAR_8 == ((void*)0)))
  {
    return FUNC_2( VAR_5, "wrong arg type" );
  }

  if (FUNC_5(VAR_5, 3))
  {
    VAR_9 = FUNC_1(VAR_5, 3, &VAR_6);
  }
  if (FUNC_5(VAR_5, 4))
  {
    VAR_10 = FUNC_1(VAR_5, 4, &VAR_6);
  }

  if (FUNC_7(VAR_5, 5) == VAR_1 || FUNC_7(VAR_5, 5) == VAR_2) {
    FUNC_6(VAR_5, 5);
    FUNC_4(VAR_5, VAR_0, VAR_4);
    VAR_4 = FUNC_3(VAR_5, VAR_0);
  }

  FUNC_0(VAR_7, VAR_8, VAR_9, VAR_10, VAR_3, 0);
  return 0;
}
