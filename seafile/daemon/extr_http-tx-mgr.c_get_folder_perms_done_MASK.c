
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int cb_data ;
struct TYPE_10__ {scalar_t__ data; struct TYPE_10__* next; } ;
struct TYPE_9__ {struct TYPE_9__* host; TYPE_3__* results; int user_data; int (* callback ) (TYPE_1__*,int ) ;int success; } ;
struct TYPE_8__ {TYPE_3__* results; int success; } ;
typedef TYPE_1__ HttpFolderPerms ;
typedef int HttpFolderPermRes ;
typedef TYPE_2__ GetFolderPermsData ;
typedef TYPE_3__ GList ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_5 (void *VAR_0)
{
    GetFolderPermsData *VAR_1 = VAR_0;
    HttpFolderPerms VAR_2;

    FUNC_3 (&VAR_2, 0, sizeof(VAR_2));
    VAR_2.success = VAR_1->success;
    VAR_2.results = VAR_1->results;

    VAR_1->callback (&VAR_2, VAR_1->user_data);

    GList *VAR_3;
    for (VAR_3 = VAR_1->results; VAR_3; VAR_3 = VAR_3->next)
        FUNC_2 ((HttpFolderPermRes *)VAR_3->data);
    FUNC_1 (VAR_1->results);

    FUNC_0 (VAR_1->host);
    FUNC_0 (VAR_1);
}
