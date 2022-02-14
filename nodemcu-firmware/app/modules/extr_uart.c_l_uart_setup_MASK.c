
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int lua_State ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_2 )
{
  uint32_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 = 1;
  uint32_t VAR_8, VAR_9;

  VAR_3 = FUNC_1( VAR_2, 1 );
  FUNC_0( VAR_0, VAR_3 );

  VAR_8 = FUNC_1( VAR_2, 2 );
  VAR_4 = FUNC_1( VAR_2, 3 );
  VAR_5 = FUNC_1( VAR_2, 4 );
  VAR_6 = FUNC_1( VAR_2, 5 );
  if(FUNC_2(VAR_2,6)){
    VAR_7 = FUNC_4(VAR_2,6);
    if(VAR_7!=0)
      VAR_1 = 1;
    else
      VAR_1 = 0;
  }

  VAR_9 = FUNC_5( VAR_3, VAR_8, VAR_4, VAR_5, VAR_6 );
  FUNC_3( VAR_2, VAR_9 );
  return 1;
}
