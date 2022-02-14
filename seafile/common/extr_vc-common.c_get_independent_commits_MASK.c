
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* data; struct TYPE_17__* next; } ;
struct TYPE_16__ {int commit_id; } ;
typedef TYPE_1__ SeafCommit ;
typedef TYPE_2__ GList ;


 TYPE_1__** FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,int,TYPE_1__**) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static GList *
FUNC_9 (GList *VAR_1)
{
    SeafCommit **VAR_2;
    GList *VAR_3, *VAR_4;
    int VAR_5, VAR_6, VAR_7;
    SeafCommit *VAR_8;

    FUNC_2 ("Get independent commits.\n");

    VAR_5 = FUNC_5 (VAR_1);

    VAR_2 = FUNC_0(VAR_5, sizeof(*VAR_2));
    for (VAR_3 = VAR_1, VAR_6 = 0; VAR_3; VAR_3 = VAR_3->next)
        VAR_2[VAR_6++] = VAR_3->data;
    FUNC_3 (VAR_1);

    for (VAR_6 = 0; VAR_6 < VAR_5 - 1; VAR_6++) {
        for (VAR_7 = VAR_6+1; VAR_7 < VAR_5; VAR_7++) {
            if (!VAR_2[VAR_6] || !VAR_2[VAR_7])
                continue;
            VAR_4 = FUNC_6(VAR_2[VAR_6], 1, &VAR_2[VAR_7]);
            for (VAR_3 = VAR_4; VAR_3; VAR_3 = VAR_3->next) {
                VAR_8 = VAR_3->data;



                if (FUNC_8 (VAR_2[VAR_6]->commit_id, VAR_8->commit_id) == 0) {
                    FUNC_7 (VAR_2[VAR_6]);
                    VAR_2[VAR_6] = ((void*)0);
                }
                if (FUNC_8 (VAR_2[VAR_7]->commit_id, VAR_8->commit_id) == 0) {
                    FUNC_7 (VAR_2[VAR_7]);
                    VAR_2[VAR_7] = ((void*)0);
                }
                FUNC_7 (VAR_8);
            }
        }
    }


    VAR_4 = ((void*)0);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        if (VAR_2[VAR_6])
            VAR_4 = FUNC_4 (VAR_4, VAR_2[VAR_6],
                                                     VAR_0,
                                                     ((void*)0));
    }
    FUNC_1(VAR_2);
    return VAR_4;
}
