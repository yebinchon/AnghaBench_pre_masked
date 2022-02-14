
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vol; } ;
typedef TYPE_1__ volume_type ;
typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char const*,int) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_0 )
{
  const char *VAR_1 = FUNC_0( VAR_0, 1 );
  int VAR_2 = FUNC_2( VAR_0, 2, -1 );
  volume_type *VAR_3 = (volume_type *)FUNC_3( VAR_0, sizeof( volume_type ) );

  if ((VAR_3->vol = FUNC_6( VAR_1, VAR_2 ))) {

    FUNC_1(VAR_0, "file.vol");
    FUNC_5(VAR_0, -2);
    return 1;
  } else {

    FUNC_4( VAR_0, 1 );
    return 0;
  }
}
