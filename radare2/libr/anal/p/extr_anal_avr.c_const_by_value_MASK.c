
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_6__ {int value; int size; int type; scalar_t__ key; } ;
struct TYPE_5__ {struct TYPE_5__* inherit_cpu_p; TYPE_2__** consts; } ;
typedef TYPE_1__ CPU_MODEL ;
typedef TYPE_2__ CPU_CONST ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static CPU_CONST *FUNC_1(CPU_MODEL *VAR_1, int VAR_2, ut32 VAR_3) {
 CPU_CONST **VAR_4, *VAR_5;

 for (VAR_4 = VAR_1->consts; *VAR_4; VAR_4++) {
  for (VAR_5 = *VAR_4; VAR_5 && VAR_5->key; VAR_5++) {
   if (VAR_5->value == (FUNC_0 (VAR_5->size * 8) & VAR_3)
   && (VAR_2 == VAR_0 || VAR_2 == VAR_5->type)) {
    return VAR_5;
   }
  }
 }
 if (VAR_1->inherit_cpu_p) {
  return FUNC_1 (VAR_1->inherit_cpu_p, VAR_2, VAR_3);
 }
 return ((void*)0);
}
