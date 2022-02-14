
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int result ;
struct TYPE_7__ {struct TYPE_7__* token; struct TYPE_7__* host; int user_data; int (* callback ) (TYPE_1__*,int ) ;int error_code; int head_commit; int is_deleted; int is_corrupt; int success; } ;
struct TYPE_6__ {int error_code; int head_commit; int is_deleted; int is_corrupt; int check_success; } ;
typedef TYPE_1__ HttpHeadCommit ;
typedef TYPE_2__ CheckHeadData ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4 (void *VAR_0)
{
    CheckHeadData *VAR_1 = VAR_0;
    HttpHeadCommit VAR_2;

    FUNC_2 (&VAR_2, 0, sizeof(VAR_2));
    VAR_2.check_success = VAR_1->success;
    VAR_2.is_corrupt = VAR_1->is_corrupt;
    VAR_2.is_deleted = VAR_1->is_deleted;
    FUNC_1 (VAR_2.head_commit, VAR_1->head_commit, 40);
    VAR_2.error_code = VAR_1->error_code;

    VAR_1->callback (&VAR_2, VAR_1->user_data);

    FUNC_0 (VAR_1->host);
    FUNC_0 (VAR_1->token);
    FUNC_0 (VAR_1);
}
