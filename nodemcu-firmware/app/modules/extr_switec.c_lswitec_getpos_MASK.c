
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int int32_t ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (unsigned int,int *,int *,int *) ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_1 )
{
  unsigned int VAR_2;

  VAR_2 = FUNC_1( VAR_1, 1 );
  FUNC_0( VAR_0, VAR_2 );
  int32_t VAR_3;
  int32_t VAR_4;
  int32_t VAR_5;
  if (FUNC_4( VAR_2, &VAR_3, &VAR_4, &VAR_5 )) {
    return FUNC_2( VAR_1, "Unable to get position." );
  }
  FUNC_3(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_4);
  return 2;
}
