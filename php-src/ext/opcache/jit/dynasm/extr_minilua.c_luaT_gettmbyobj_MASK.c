
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int Table ;
struct TYPE_6__ {int * tmname; int ** mt; } ;
struct TYPE_5__ {int * metatable; } ;
struct TYPE_4__ {int * metatable; } ;
typedef int TValue ;
typedef size_t TMS ;


 TYPE_3__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int const*) ;
 int const* FUNC_2 (int *,int ) ;
 int const VAR_0 ;
 size_t FUNC_3 (int const*) ;
 TYPE_1__* FUNC_4 (int const*) ;

__attribute__((used)) static const TValue*FUNC_5(lua_State*VAR_1,const TValue*VAR_2,TMS VAR_3){
Table*VAR_4;
switch(FUNC_3(VAR_2)){
case 5:
VAR_4=FUNC_1(VAR_2)->metatable;
break;
case 7:
VAR_4=FUNC_4(VAR_2)->metatable;
break;
default:
VAR_4=FUNC_0(VAR_1)->mt[FUNC_3(VAR_2)];
}
return(VAR_4?FUNC_2(VAR_4,FUNC_0(VAR_1)->tmname[VAR_3]):(&VAR_0));
}
