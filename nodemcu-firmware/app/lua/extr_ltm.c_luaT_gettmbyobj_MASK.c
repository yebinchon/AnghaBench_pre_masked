
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
 int const* FUNC_3 (int *,int ) ;
 int const* VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int const*) ;
 size_t FUNC_7 (int const*) ;
 TYPE_1__* FUNC_8 (int const*) ;

const TValue *FUNC_9 (lua_State *VAR_1, const TValue *VAR_2, TMS VAR_3) {
  Table *VAR_4;
  switch (FUNC_7(VAR_2)) {
    case 129:
      VAR_4 = FUNC_1(VAR_2)->metatable;
      break;
    case 130:
      VAR_4 = (Table*)FUNC_4(FUNC_6(VAR_2));
      break;
    case 128:
      VAR_4 = FUNC_8(VAR_2)->metatable;
      break;
    default:
      VAR_4 = FUNC_0(VAR_1)->mt[FUNC_7(VAR_2)];
  }
  if (!VAR_4)
    return VAR_0;
  else if (FUNC_5(VAR_4))
    return FUNC_3(VAR_4, FUNC_0(VAR_1)->tmname[VAR_3]);
  else
    return FUNC_2(VAR_4, FUNC_0(VAR_1)->tmname[VAR_3]);
}
