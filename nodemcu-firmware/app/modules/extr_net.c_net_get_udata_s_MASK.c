
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ lnet_userdata ;


 char** VAR_0 ;



 TYPE_1__* FUNC_0 (int *,int,char const*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;

lnet_userdata *FUNC_3( lua_State *VAR_1, int VAR_2 ) {
  if (!FUNC_1(VAR_1, VAR_2)) return ((void*)0);
  lnet_userdata *VAR_3 = (lnet_userdata *)FUNC_2(VAR_1, VAR_2);
  switch (VAR_3->type) {
    case 130:
    case 129:
    case 128:
      break;
    default: return ((void*)0);
  }
  const char *VAR_4 = VAR_0[VAR_3->type];
  VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_4);
  return VAR_3;
}
