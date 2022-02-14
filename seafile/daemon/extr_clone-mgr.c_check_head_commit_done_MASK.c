
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state; int server_head_id; } ;
struct TYPE_7__ {int error_code; int head_commit; int is_deleted; int is_corrupt; scalar_t__ check_success; } ;
typedef TYPE_1__ HttpHeadCommit ;
typedef TYPE_2__ CloneTask ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_4 (HttpHeadCommit *VAR_2, void *VAR_3)
{
    CloneTask *VAR_4 = VAR_3;

    if (VAR_4->state == VAR_1) {
        FUNC_2 (VAR_4, VAR_0);
        return;
    }

    if (VAR_2->check_success && !VAR_2->is_corrupt && !VAR_2->is_deleted) {
        FUNC_0 (VAR_4->server_head_id, VAR_2->head_commit, 40);
        FUNC_1 (VAR_4);
    } else {
        FUNC_3 (VAR_4, VAR_2->error_code);
    }
}
