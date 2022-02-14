
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int repo_mgr; } ;
struct TYPE_5__ {int state; int runtime_state; scalar_t__ type; int repo_id; } ;
typedef TYPE_1__ HttpTxTask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_3__* VAR_5 ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5 (HttpTxTask *VAR_6, int VAR_7, int VAR_8)
{
    FUNC_3 ("Transfer repo '%.8s': ('%s', '%s') --> ('%s', '%s')\n",
                  VAR_6->repo_id,
                  FUNC_2(VAR_6->state),
                  FUNC_1(VAR_6->runtime_state),
                  FUNC_2(VAR_7),
                  FUNC_1(VAR_8));

    if (VAR_7 != VAR_6->state)
        VAR_6->state = VAR_7;
    VAR_6->runtime_state = VAR_8;

    if (VAR_8 == VAR_1) {

        if (VAR_6->type == VAR_3 &&
            VAR_7 == VAR_2)
            FUNC_4 (VAR_5->repo_mgr,
                                                 VAR_6->repo_id,
                                                 VAR_4,
                                                 VAR_0);

        FUNC_0 (VAR_6);
    }
}
