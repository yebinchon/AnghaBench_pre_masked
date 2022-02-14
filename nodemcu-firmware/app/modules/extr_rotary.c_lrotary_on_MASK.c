
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *,unsigned int,int) ;
 scalar_t__ FUNC_2 (int *,unsigned int,int,int) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_1 )
{
  unsigned int VAR_2;
  VAR_2 = FUNC_3( VAR_1, 1 );
  FUNC_0( VAR_0, VAR_2 );

  int VAR_3 = FUNC_3(VAR_1, 2);

  if (FUNC_5(VAR_1) >= 3) {
    if (FUNC_2(VAR_1, VAR_2, VAR_3, 3)) {
      return FUNC_4( VAR_1, "Unable to set callback." );
    }
  } else {
    FUNC_1(VAR_1, VAR_2, VAR_3);
  }

  return 0;
}
