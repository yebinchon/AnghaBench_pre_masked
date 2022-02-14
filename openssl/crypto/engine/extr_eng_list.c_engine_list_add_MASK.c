
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int struct_ref; struct TYPE_6__* prev; int id; } ;
typedef TYPE_1__ ENGINE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(ENGINE *VAR_7)
{
    int VAR_8 = 0;
    ENGINE *VAR_9 = ((void*)0);

    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }
    VAR_9 = VAR_5;
    while (VAR_9 && !VAR_8) {
        VAR_8 = (FUNC_3(VAR_9->id, VAR_7->id) == 0);
        VAR_9 = VAR_9->next;
    }
    if (VAR_8) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    if (VAR_5 == ((void*)0)) {

        if (VAR_6) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        VAR_5 = VAR_7;
        VAR_7->prev = ((void*)0);



        FUNC_1(VAR_4);
    } else {

        if ((VAR_6 == ((void*)0)) || (VAR_6->next != ((void*)0))) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        VAR_6->next = VAR_7;
        VAR_7->prev = VAR_6;
    }



    VAR_7->struct_ref++;
    FUNC_2(VAR_7, 0, 1);

    VAR_6 = VAR_7;
    VAR_7->next = ((void*)0);
    return 1;
}
