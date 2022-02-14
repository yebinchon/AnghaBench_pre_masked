
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * data; struct TYPE_5__* next; } ;
typedef int SeafCommit ;
typedef TYPE_1__ GList ;


 int ** FUNC_0 (int,int) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,int,int **) ;

SeafCommit *
FUNC_5 (SeafCommit *VAR_0, SeafCommit *VAR_1)
{
    GList *VAR_2, *VAR_3;
    SeafCommit *VAR_4, **VAR_5;
    int VAR_6, VAR_7;
    SeafCommit *VAR_8 = ((void*)0);

    VAR_4 = VAR_0;
    VAR_5 = (SeafCommit **) FUNC_0 (1, sizeof(SeafCommit *));
    VAR_5[0] = VAR_1;
    VAR_6 = 1;
    VAR_2 = FUNC_4 (VAR_4, VAR_6, VAR_5);
    FUNC_1 (VAR_5);
    if (!VAR_2 || !VAR_2->next)
        goto done;





    while (1) {
        VAR_6 = FUNC_3 (VAR_2) - 1;
        VAR_4 = VAR_2->data;
        VAR_5 = FUNC_0 (VAR_6, sizeof(SeafCommit *));
        for (VAR_3 = VAR_2->next, VAR_7 = 0; VAR_7 < VAR_6; VAR_3 = VAR_3->next, VAR_7++) {
            VAR_5[VAR_7] = VAR_3->data;
        }
        FUNC_2 (VAR_2);

        VAR_2 = FUNC_4 (VAR_4, VAR_6, VAR_5);
        FUNC_1 (VAR_5);
        if (!VAR_2 || !VAR_2->next)
            break;
    }

done:
    if (VAR_2)
        VAR_8 = VAR_2->data;
    FUNC_2 (VAR_2);

    return VAR_8;
}
