
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rewriteConfigState {int numlines; int * lines; } ;
typedef int sds ;


 int * FUNC_0 (int *,int) ;

void FUNC_1(struct rewriteConfigState *VAR_0, sds VAR_1) {
    VAR_0->lines = FUNC_0(VAR_0->lines, sizeof(char*) * (VAR_0->numlines+1));
    VAR_0->lines[VAR_0->numlines++] = VAR_1;
}
