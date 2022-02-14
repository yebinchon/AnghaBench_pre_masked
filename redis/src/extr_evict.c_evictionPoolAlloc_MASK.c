
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evictionPoolEntry {scalar_t__ dbid; int cached; int * key; scalar_t__ idle; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct evictionPoolEntry* VAR_2 ;
 int FUNC_0 (int *,int ) ;
 struct evictionPoolEntry* FUNC_1 (int) ;

void FUNC_2(void) {
    struct evictionPoolEntry *VAR_3;
    int VAR_4;

    VAR_3 = FUNC_1(sizeof(*VAR_3)*VAR_1);
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        VAR_3[VAR_4].idle = 0;
        VAR_3[VAR_4].key = ((void*)0);
        VAR_3[VAR_4].cached = FUNC_0(((void*)0),VAR_0);
        VAR_3[VAR_4].dbid = 0;
    }
    VAR_2 = VAR_3;
}
