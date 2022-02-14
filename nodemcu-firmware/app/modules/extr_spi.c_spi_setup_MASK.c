
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int lua_State ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int,int,int,int,int) ;
 int VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_11 )
{
  int VAR_12 = FUNC_1( VAR_11, 1 );
  int VAR_13 = FUNC_1( VAR_11, 2 );
  int VAR_14 = FUNC_1( VAR_11, 3 );
  int VAR_15 = FUNC_1( VAR_11, 4 );
  int VAR_16 = FUNC_1( VAR_11, 5 );
  u32 VAR_17 = FUNC_1( VAR_11, 6 );
  int VAR_18 = FUNC_3( VAR_11, 7, VAR_7 );

  FUNC_0( VAR_8, VAR_12 );

  if (VAR_13 != VAR_5 && VAR_13 != VAR_4) {
    return FUNC_2( VAR_11, "wrong arg type" );
  }

  if (VAR_14 != VAR_3 && VAR_14 != VAR_2) {
    return FUNC_2( VAR_11, "wrong arg type" );
  }

  if (VAR_15 != VAR_1 && VAR_15 != VAR_0) {
    return FUNC_2( VAR_11, "wrong arg type" );
  }

  if (VAR_16 < 0 || VAR_16 > 32) {
    return FUNC_2( VAR_11, "out of range" );
  }

  if (VAR_17 == 0) {

    VAR_17 = 8;
  }

  if (VAR_18 == VAR_7 || VAR_18 == VAR_6)
  {
    VAR_10[VAR_12] = VAR_18;
  }
  else
  {
    return FUNC_2( VAR_11, "out of range" );
  }

  VAR_9[VAR_12] = VAR_16;

  u32 VAR_19 = FUNC_5(VAR_12, VAR_13, VAR_14, VAR_15, VAR_17);
  FUNC_4( VAR_11, VAR_19 );
  return 1;
}
