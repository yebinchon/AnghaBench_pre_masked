
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_5__ {int text; } ;
typedef TYPE_1__ json_error_t ;
struct TYPE_6__ {int head_commit; int repo_id; int is_corrupt; } ;
typedef TYPE_2__ CheckHeadData ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int
FUNC_7 (const char *VAR_1, int VAR_2, CheckHeadData *VAR_3)
{
    json_t *VAR_4 = ((void*)0);
    json_error_t VAR_5;
    const char *VAR_6;

    VAR_4 = FUNC_1 (VAR_1, VAR_2, 0, &VAR_5);
    if (!VAR_4) {
        FUNC_6 ("Parse response failed: %s.\n", VAR_5.text);
        return -1;
    }

    if (FUNC_4 (VAR_4, "is_corrupted") &&
        FUNC_2 (VAR_4, "is_corrupted"))
        VAR_3->is_corrupt = VAR_0;

    if (!VAR_3->is_corrupt) {
        VAR_6 = FUNC_3 (VAR_4, "head_commit_id");
        if (!VAR_6) {
            FUNC_6 ("Check head commit for repo %s failed. "
                          "Response doesn't contain head commit id.\n",
                          VAR_3->repo_id);
            FUNC_0 (VAR_4);
            return -1;
        }
        FUNC_5 (VAR_3->head_commit, VAR_6, 40);
    }

    FUNC_0 (VAR_4);
    return 0;
}
