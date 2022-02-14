
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_9__ {int pc; } ;
struct TYPE_8__ {TYPE_1__* anal; } ;
struct TYPE_7__ {int cpu; } ;
typedef TYPE_2__ RAnalEsil ;
typedef TYPE_3__ CPU_MODEL ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(RAnalEsil *VAR_0, const char *VAR_1, ut64 *VAR_2) {
 CPU_MODEL *VAR_3;

 if (!VAR_0 || !VAR_0->anal) {
  return 0;
 }


 VAR_3 = FUNC_2 (VAR_0->anal->cpu);


 if (!FUNC_3 (VAR_1, "pc")) {
  *VAR_2 &= FUNC_0 (VAR_3);
 } else if (!FUNC_3 (VAR_1, "pcl")) {
  if (VAR_3->pc < 8) {
   *VAR_2 &= FUNC_1 (8);
  }
 } else if (!FUNC_3 (VAR_1, "pch")) {
  *VAR_2 = VAR_3->pc > 8
   ? *VAR_2 & FUNC_1 (VAR_3->pc - 8)
   : 0;
 }

 return 0;
}
