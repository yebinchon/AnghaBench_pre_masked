
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int timeout; } ;
struct TYPE_5__ {TYPE_1__ server; } ;
typedef TYPE_2__ lnet_userdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,int) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;

int FUNC_5( lua_State *VAR_3 ) {
  int VAR_4, VAR_5;

  VAR_4 = FUNC_1(VAR_3, 1, VAR_0);
  VAR_5 = FUNC_1(VAR_3, 2, 30);

  if (VAR_4 == VAR_2) {
    FUNC_4("net.createServer with net.UDP type", "in next version");
    return FUNC_3( VAR_3 );
  }
  if (VAR_4 != VAR_0) return FUNC_0(VAR_3, "invalid type");

  lnet_userdata *VAR_6 = FUNC_2(VAR_3, VAR_1);
  VAR_6->server.timeout = VAR_5;
  return 1;
}
