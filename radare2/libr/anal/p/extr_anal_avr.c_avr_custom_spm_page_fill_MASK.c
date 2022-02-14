
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_7__ {TYPE_1__* anal; } ;
struct TYPE_6__ {int cpu; int reg; } ;
typedef TYPE_2__ RAnalEsil ;
typedef int CPU_MODEL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,int*,int) ;

__attribute__((used)) static bool FUNC_6(RAnalEsil *VAR_1) {
 CPU_MODEL *VAR_2;
 ut64 VAR_3, VAR_4, VAR_5;
 ut8 VAR_6, VAR_7;


 if (!VAR_1 || !VAR_1->anal || !VAR_1->anal->reg) {
  return 0;
 }


 if (!FUNC_1(VAR_1, &VAR_3)) {
  return 0;
 }

 if (!FUNC_1 (VAR_1, &VAR_5)) {
  return 0;
 }
 VAR_6 = VAR_5;

 if (!FUNC_1 (VAR_1, &VAR_5)) {
  return 0;
 }
 VAR_7 = VAR_5;


 VAR_2 = FUNC_4 (VAR_1->anal->cpu);
 VAR_4 = FUNC_3 (FUNC_2 (VAR_2, VAR_0, "page_size"));


 VAR_3 &= (FUNC_0 (VAR_4) ^ 1);



 FUNC_5 (VAR_1, VAR_3++, &VAR_6, 1);
 FUNC_5 (VAR_1, VAR_3++, &VAR_7, 1);

 return 1;
}
