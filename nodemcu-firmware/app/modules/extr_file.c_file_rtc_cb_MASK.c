
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_time ;
typedef int sint32_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static sint32_t FUNC_7( vfs_time *VAR_6 )
{
  sint32_t VAR_7 = VAR_3;

  if (VAR_5 != VAR_0) {
    lua_State *VAR_8 = FUNC_1();

    FUNC_4( VAR_8, VAR_1, VAR_5 );
    FUNC_0( VAR_8, 0, 1 );

    if (FUNC_5( VAR_8, FUNC_2( VAR_8 ) ) == VAR_2) {
      FUNC_6( VAR_8, VAR_6 );
      VAR_7 = VAR_4;
    }


    FUNC_3( VAR_8, 1 );
  }

  return VAR_7;
}
