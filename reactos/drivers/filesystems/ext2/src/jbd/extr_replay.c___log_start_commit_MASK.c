
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_3__ {int j_wait_commit; int j_commit_sequence; int j_commit_request; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(journal_t *VAR_0, tid_t VAR_1)
{



    if (!FUNC_1(VAR_0->j_commit_request, VAR_1)) {





        VAR_0->j_commit_request = VAR_1;
        FUNC_0(1, "JBD: requesting commit %d/%d\n",
                  VAR_0->j_commit_request,
                  VAR_0->j_commit_sequence);
        FUNC_2(&VAR_0->j_wait_commit);
        return 1;
    }
    return 0;
}
