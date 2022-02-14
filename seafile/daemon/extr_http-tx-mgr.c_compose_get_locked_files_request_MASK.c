
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_5__ {TYPE_1__* data; struct TYPE_5__* next; } ;
struct TYPE_4__ {int timestamp; int token; int repo_id; } ;
typedef TYPE_1__ HttpLockedFilesReq ;
typedef TYPE_2__ GList ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static char *
FUNC_9 (GList *VAR_0)
{
    GList *VAR_1;
    HttpLockedFilesReq *VAR_2;
    json_t *VAR_3, *VAR_4;
    char *VAR_5 = ((void*)0);

    VAR_4 = FUNC_0 ();

    for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next) {
        VAR_2 = VAR_1->data;

        VAR_3 = FUNC_5 ();
        FUNC_6 (VAR_3, "repo_id", FUNC_7(VAR_2->repo_id));
        FUNC_6 (VAR_3, "token", FUNC_7(VAR_2->token));
        FUNC_6 (VAR_3, "ts", FUNC_4(VAR_2->timestamp));

        FUNC_1 (VAR_4, VAR_3);
    }

    VAR_5 = FUNC_3 (VAR_4, 0);
    if (!VAR_5) {
        FUNC_8 ("Faile to json_dumps.\n");
    }

    FUNC_2 (VAR_4);
    return VAR_5;
}
