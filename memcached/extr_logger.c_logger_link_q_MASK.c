
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ logger ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(logger *VAR_4) {
    FUNC_1(&VAR_2);
    FUNC_0(VAR_4 != VAR_1);

    VAR_4->prev = 0;
    VAR_4->next = VAR_1;
    if (VAR_4->next) VAR_4->next->prev = VAR_4;
    VAR_1 = VAR_4;
    if (VAR_3 == 0) VAR_3 = VAR_4;
    VAR_0++;
    FUNC_2(&VAR_2);
    return;
}
