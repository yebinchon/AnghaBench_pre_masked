
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_1__ ENGINE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_2(ENGINE *VAR_5)
{
    ENGINE *VAR_6;

    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    VAR_6 = VAR_3;
    while (VAR_6 && (VAR_6 != VAR_5))
        VAR_6 = VAR_6->next;
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_0,
                  VAR_1);
        return 0;
    }

    if (VAR_5->next)
        VAR_5->next->prev = VAR_5->prev;
    if (VAR_5->prev)
        VAR_5->prev->next = VAR_5->next;

    if (VAR_3 == VAR_5)
        VAR_3 = VAR_5->next;
    if (VAR_4 == VAR_5)
        VAR_4 = VAR_5->prev;
    FUNC_1(VAR_5, 0);
    return 1;
}
