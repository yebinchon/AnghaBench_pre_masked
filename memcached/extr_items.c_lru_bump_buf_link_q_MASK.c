
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ lru_bump_buf ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(lru_bump_buf *VAR_3) {
    FUNC_1(&VAR_1);
    FUNC_0(VAR_3 != VAR_0);

    VAR_3->prev = 0;
    VAR_3->next = VAR_0;
    if (VAR_3->next) VAR_3->next->prev = VAR_3;
    VAR_0 = VAR_3;
    if (VAR_2 == 0) VAR_2 = VAR_3;
    FUNC_2(&VAR_1);
    return;
}
