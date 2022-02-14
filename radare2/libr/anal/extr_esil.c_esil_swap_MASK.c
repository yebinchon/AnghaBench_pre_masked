
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** stack; int stackptr; } ;
typedef TYPE_1__ RAnalEsil ;



__attribute__((used)) static bool FUNC_0(RAnalEsil *VAR_0) {
 char *VAR_1;
 if (!VAR_0 || !VAR_0->stack || VAR_0->stackptr < 2) {
  return 0;
 }
 if (!VAR_0->stack[VAR_0->stackptr-1] || !VAR_0->stack[VAR_0->stackptr-2]) {
  return 0;
 }
 VAR_1 = VAR_0->stack[VAR_0->stackptr-1];
 VAR_0->stack[VAR_0->stackptr-1] = VAR_0->stack[VAR_0->stackptr-2];
 VAR_0->stack[VAR_0->stackptr-2] = VAR_1;
 return 1;
}
