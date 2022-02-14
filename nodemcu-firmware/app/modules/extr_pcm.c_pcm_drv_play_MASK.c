
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int os_param_t ;
typedef int lua_State ;
struct TYPE_2__ {scalar_t__ rate; scalar_t__ self_ref; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int *,int,int,char*) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_8 )
{
  FUNC_0();

  VAR_5->rate = FUNC_2( VAR_8, 2, VAR_4 );

  FUNC_1( VAR_8, (VAR_5->rate >= VAR_3) && (VAR_5->rate <= VAR_2), 2, "invalid bit rate" );

  if (VAR_5->self_ref == VAR_0) {
    FUNC_4( VAR_8, 1 );
    VAR_5->self_ref = FUNC_3( VAR_8, VAR_1 );
  }



  FUNC_5( VAR_6, (os_param_t)VAR_7 );

  return 0;
}
