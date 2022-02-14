
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_8__ {TYPE_1__* anal; } ;
struct TYPE_7__ {scalar_t__ size; } ;
struct TYPE_6__ {int reg; } ;
typedef TYPE_2__ RRegItem ;
typedef TYPE_3__ RAnalEsil ;


 TYPE_2__* FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static ut8 FUNC_1(RAnalEsil *VAR_0, const char *VAR_1) {
 if (!VAR_0 || !VAR_0->anal || !VAR_0->anal->reg || !VAR_1) {
  return 0;
 }
 RRegItem *VAR_2 = FUNC_0(VAR_0->anal->reg, VAR_1, -1);
 return VAR_2 ? (ut8)VAR_2->size : 0;
}
