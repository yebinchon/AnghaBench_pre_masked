
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* anal; } ;
struct TYPE_7__ {scalar_t__ packed_size; } ;
struct TYPE_6__ {int reg; } ;
typedef TYPE_2__ RRegItem ;
typedef TYPE_3__ RAnalEsil ;


 TYPE_2__* FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static bool FUNC_1(RAnalEsil *VAR_0, const char *VAR_1) {
 RRegItem *VAR_2 = FUNC_0 (VAR_0->anal->reg, VAR_1, -1);
 return VAR_2? VAR_2->packed_size > 0: 0;
}
