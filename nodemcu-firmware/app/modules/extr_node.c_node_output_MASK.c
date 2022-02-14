
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_6 )
{

  if (FUNC_5(VAR_6, 1) == VAR_2 || FUNC_5(VAR_6, 1) == VAR_3) {
    FUNC_3(VAR_6, 1);
    if (VAR_4 != VAR_0)
      FUNC_1(VAR_6, VAR_1, VAR_4);
    VAR_4 = FUNC_0(VAR_6, VAR_1);
  } else {
    if (VAR_4 != VAR_0)
      FUNC_1(VAR_6, VAR_1, VAR_4);
    VAR_4 = VAR_0;
    VAR_5 = 1;
    return 0;
  }

  if ( FUNC_2(VAR_6, 2) )
  {
    VAR_5 = FUNC_4(VAR_6, 2);
    if (VAR_5 != 0)
      VAR_5 = 1;
  } else {
    VAR_5 = 1;
  }

  return 0;
}
