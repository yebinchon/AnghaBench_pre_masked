
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_8__ {int seed; } ;
struct TYPE_6__ {size_t lnglen; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_2__ TString ;


 TYPE_5__* FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int *,size_t,int ,int ) ;

TString *FUNC_2 (lua_State *VAR_1, size_t VAR_2) {
  TString *VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0, FUNC_0(VAR_1)->seed);
  VAR_3->u.lnglen = VAR_2;
  return VAR_3;
}
