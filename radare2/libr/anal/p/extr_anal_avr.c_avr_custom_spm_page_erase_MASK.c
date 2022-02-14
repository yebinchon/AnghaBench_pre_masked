
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
typedef unsigned long long ut64 ;
struct TYPE_7__ {TYPE_1__* anal; } ;
struct TYPE_6__ {int cpu; int reg; } ;
typedef TYPE_2__ RAnalEsil ;
typedef int CPU_MODEL ;


 int VAR_0 ;
 unsigned long long FUNC_0 (int *) ;
 unsigned long long FUNC_1 (unsigned long long) ;
 int FUNC_2 (TYPE_2__*,unsigned long long*) ;
 int FUNC_3 (int *,int ,char*) ;
 unsigned long long FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,unsigned long long,int*,int) ;

__attribute__((used)) static bool FUNC_7(RAnalEsil *VAR_1) {
 CPU_MODEL *VAR_2;
 ut8 VAR_3;
 ut64 VAR_4, VAR_5, VAR_6;


 if (!VAR_1 || !VAR_1->anal || !VAR_1->anal->reg) {
  return 0;
 }


 if (!FUNC_2(VAR_1, &VAR_4)) {
  return 0;
 }


 VAR_2 = FUNC_5 (VAR_1->anal->cpu);
 VAR_5 = FUNC_4 (FUNC_3 (VAR_2, VAR_0, "page_size"));


 VAR_4 &= ~(FUNC_1 (VAR_5));



 VAR_3 = 0xff;
 for (VAR_6 = 0; VAR_6 < (1ULL << VAR_5); VAR_6++) {
  FUNC_6 (
   VAR_1, (VAR_4 + VAR_6) & FUNC_0 (VAR_2), &VAR_3, 1);
 }

 return 1;
}
