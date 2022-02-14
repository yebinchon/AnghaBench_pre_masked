
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_5__ {int mq_mgr; int sync_mgr; int repo_mgr; } ;
struct TYPE_4__ {char* name; } ;
typedef TYPE_1__ SeafRepo ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (char const*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_7 (int ,char*,char*) ;
 TYPE_1__* FUNC_8 (int ,char const*) ;
 int FUNC_9 (char const*,char const*,char const*,int) ;
 int FUNC_10 (int ,char const*,int) ;

void
FUNC_11 (const char *VAR_1,
                                   const char *VAR_2,
                                   const char *VAR_3,
                                   int VAR_4)
{
    if (!VAR_2) {
        SeafRepo *VAR_5 = FUNC_8 (VAR_0->repo_mgr, VAR_1);
        if (!VAR_5)
            return;
        VAR_2 = VAR_5->name;
    }

    FUNC_9 (VAR_1, VAR_2, VAR_3, VAR_4);

    FUNC_10 (VAR_0->sync_mgr, VAR_1, VAR_4);

    json_t *VAR_6;
    char *VAR_7;

    VAR_6 = FUNC_4 ();
    FUNC_5 (VAR_6, "repo_id", FUNC_6(VAR_1));
    FUNC_5 (VAR_6, "repo_name", FUNC_6(VAR_2));
    FUNC_5 (VAR_6, "path", FUNC_6(VAR_3));
    FUNC_5 (VAR_6, "err_id", FUNC_3(VAR_4));

    VAR_7 = FUNC_2 (VAR_6, 0);

    FUNC_7 (VAR_0->mq_mgr,
                                          "sync.error",
                                          VAR_7);

    FUNC_0 (VAR_7);
    FUNC_1 (VAR_6);
}
