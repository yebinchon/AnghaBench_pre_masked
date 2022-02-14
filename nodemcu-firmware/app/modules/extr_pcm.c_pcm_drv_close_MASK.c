
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {TYPE_1__* drv; } ;
struct TYPE_3__ {int (* close ) (int ) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3( lua_State *VAR_2 )
{
  FUNC_0();

  VAR_1->drv->close( VAR_0 );

  return FUNC_1( VAR_2 );
}
