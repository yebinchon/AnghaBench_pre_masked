
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ SessionInfo ;
typedef int HANDLE ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

VOID
FUNC_4(SessionInfo* VAR_2)
{
    HANDLE VAR_3 = FUNC_1();
    SessionInfo* VAR_4;
    SessionInfo* VAR_5;





    FUNC_0(&VAR_1);

    VAR_4 = VAR_0;
    VAR_5 = ((void*)0);

    while ( VAR_4 )
    {
        if ( VAR_4 == VAR_2 )
        {

            VAR_5->next = VAR_2->next;
            break;
        }


        VAR_5 = VAR_4;
        VAR_4 = VAR_4->next;
    }

    FUNC_3(&VAR_1);

    FUNC_2(VAR_3, 0, VAR_2);
}
