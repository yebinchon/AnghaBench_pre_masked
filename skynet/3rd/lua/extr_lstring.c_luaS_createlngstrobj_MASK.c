
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {size_t lnglen; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ TString ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,size_t,int ,int ) ;

TString *FUNC_1 (lua_State *VAR_2, size_t VAR_3) {
  TString *VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0, VAR_1);
  VAR_4->u.lnglen = VAR_3;
  return VAR_4;
}
