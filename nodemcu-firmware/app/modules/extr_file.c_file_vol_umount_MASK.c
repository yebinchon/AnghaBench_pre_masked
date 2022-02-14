
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * vol; } ;
typedef TYPE_1__ volume_type ;
typedef int lua_State ;


 int FUNC_0 (int *,TYPE_1__*,int,char*) ;
 TYPE_1__* FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4( lua_State *VAR_0 )
{
  volume_type *VAR_1 = FUNC_1( VAR_0, 1, "file.vol" );
  FUNC_0( VAR_0, VAR_1, 1, "volume expected" );

  FUNC_2( VAR_0, 0 <= FUNC_3( VAR_1->vol ) );


  VAR_1->vol = ((void*)0);
  return 1;
}
