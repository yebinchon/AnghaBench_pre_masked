
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int little; } ;
struct TYPE_4__ {int maxalign; int islittle; int * L; } ;
typedef TYPE_1__ Header ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_0 (lua_State *VAR_1, Header *VAR_2) {
  VAR_2->L = VAR_1;
  VAR_2->islittle = VAR_0.little;
  VAR_2->maxalign = 1;
}
