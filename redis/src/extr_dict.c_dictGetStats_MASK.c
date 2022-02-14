
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ht; } ;
typedef TYPE_1__ dict ;


 size_t FUNC_0 (char*,size_t,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

void FUNC_2(char *VAR_0, size_t VAR_1, dict *VAR_2) {
    size_t VAR_3;
    char *VAR_4 = VAR_0;
    size_t VAR_5 = VAR_1;

    VAR_3 = FUNC_0(VAR_0,VAR_1,&VAR_2->ht[0],0);
    VAR_0 += VAR_3;
    VAR_1 -= VAR_3;
    if (FUNC_1(VAR_2) && VAR_1 > 0) {
        FUNC_0(VAR_0,VAR_1,&VAR_2->ht[1],1);
    }

    if (VAR_5) VAR_4[VAR_5-1] = '\0';
}
