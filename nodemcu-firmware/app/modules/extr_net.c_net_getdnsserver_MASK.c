
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int addr; } ;
typedef TYPE_1__ ip_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* VAR_1 ;
 TYPE_1__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_8( lua_State* VAR_2 ) {
  int VAR_3 = FUNC_4(VAR_2, 1, 0);
  if (VAR_3 >= VAR_0)
    return FUNC_3( VAR_2, "server index out of range [0-%d]", VAR_0 - 1);




  ip_addr_t VAR_4 = FUNC_1(VAR_3);

  if ( FUNC_2(&VAR_4) ) {
    FUNC_5( VAR_2 );
  } else {
    char VAR_5[20] = {0};
    FUNC_7(VAR_5, VAR_1, FUNC_0( &VAR_4.addr ) );
    FUNC_6( VAR_2, VAR_5 );
  }

  return 1;
}
