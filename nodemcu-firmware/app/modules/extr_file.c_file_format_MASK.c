
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4( lua_State* VAR_0 )
{
  size_t VAR_1;
  FUNC_1(VAR_0);
  if( !FUNC_3() )
  {
    FUNC_0( "\n*** ERROR ***: unable to format. FS might be compromised.\n" );
    FUNC_0( "It is advised to re-flash the NodeMCU image.\n" );
    FUNC_2(VAR_0, "Failed to format file system");
  }
  else{
    FUNC_0( "format done.\n" );
  }
  return 0;
}
