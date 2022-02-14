
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* anal; } ;
struct TYPE_8__ {int bits; } ;
typedef TYPE_2__ RAnalEsil ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_4(RAnalEsil *VAR_0) {
 switch (VAR_0->anal->bits) {
 case 64: return FUNC_3 (VAR_0);
 case 32: return FUNC_2 (VAR_0);
 case 16: return FUNC_1 (VAR_0);
 case 8: return FUNC_0 (VAR_0);
 }
 return 0;
}
