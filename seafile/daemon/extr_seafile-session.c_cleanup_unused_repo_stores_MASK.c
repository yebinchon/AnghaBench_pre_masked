
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int repo_mgr; int seaf_dir; } ;
struct TYPE_4__ {int message; } ;
typedef TYPE_1__ GError ;
typedef int GDir ;


 char* FUNC_0 (int ,char*,char const*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ,TYPE_1__**) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_6 (char*,char const*,char const*) ;
 int FUNC_7 (int ,char const*,char const*) ;
 int FUNC_8 (char*,char*,int ) ;

__attribute__((used)) static void
FUNC_9 (const char *VAR_1)
{
    char *VAR_2;
    const char *VAR_3;

    VAR_2 = FUNC_0 (VAR_0->seaf_dir, "storage", VAR_1, ((void*)0));

    GError *VAR_4 = ((void*)0);
    GDir *VAR_5 = FUNC_2 (VAR_2, 0, &VAR_4);
    if (!VAR_5) {
        FUNC_8 ("Failed to open store dir %s: %s.\n",
                      VAR_2, VAR_4->message);
        FUNC_4 (VAR_2);
        return;
    }

    while ((VAR_3 = FUNC_3(VAR_5)) != ((void*)0)) {
        if (!FUNC_5 (VAR_3)) {
            FUNC_6 ("Moving %s for deleted repo %s.\n", VAR_1, VAR_3);
            FUNC_7 (VAR_0->repo_mgr, VAR_1, VAR_3);
        }
    }

    FUNC_4 (VAR_2);
    FUNC_1 (VAR_5);
}
