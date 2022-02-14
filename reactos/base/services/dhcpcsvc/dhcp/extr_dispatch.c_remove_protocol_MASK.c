
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeout {struct timeout* next; struct interface_info* what; } ;
struct protocol {struct protocol* next; struct interface_info* local; } ;
struct interface_info {int dummy; } ;


 int FUNC_0 (struct protocol*) ;
 struct timeout* VAR_0 ;
 struct protocol* VAR_1 ;
 struct timeout* VAR_2 ;

void
FUNC_1(struct protocol *VAR_3)
{
    struct protocol *VAR_4, *VAR_5, *VAR_6;
    struct interface_info *VAR_7 = VAR_3->local;
    struct timeout *VAR_8, *VAR_9, *VAR_10;

    VAR_8 = ((void*)0);
    VAR_9 = VAR_2;
    while (VAR_9 != ((void*)0))
    {

        if (VAR_9->what == VAR_7)
        {

            if (VAR_8)
                VAR_8->next = VAR_9->next;
            else
                VAR_2 = VAR_9->next;


            VAR_10 = VAR_9->next;


            VAR_9->next = VAR_0;
            VAR_0 = VAR_9;
        }
        else
        {

            VAR_10 = VAR_9->next;


            VAR_8 = VAR_9;
        }


        VAR_9 = VAR_10;
    }

    VAR_6 = ((void*)0);
    for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_5) {
        VAR_5 = VAR_4->next;
        if (VAR_4 == VAR_3) {
            if (VAR_6)
                VAR_6->next = VAR_4->next;
            else
                VAR_1 = VAR_4->next;
            FUNC_0(VAR_4);
        }
    }
}
