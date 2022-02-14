
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
struct TYPE_2__ {int commit_mgr; } ;
typedef int SeafCommit ;
typedef int GList ;
typedef int GHashTable ;


 int VAR_0 ;
 int * FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char*,char*) ;
 int * FUNC_2 (int *,int *,int ,int *) ;
 char* FUNC_3 (char const*) ;
 TYPE_1__* VAR_1 ;
 int * FUNC_4 (int ,char const*,int,char const*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) inline static int
FUNC_6 (GList **VAR_2, GHashTable *VAR_3,
                      const char *VAR_4, int VAR_5,
                      const char *VAR_6, gboolean VAR_7)
{
    SeafCommit *VAR_8;
    char *VAR_9;

    if (FUNC_0 (VAR_3, VAR_6) != ((void*)0))
        return 0;

    VAR_8 = FUNC_4 (VAR_1->commit_mgr,
                                        VAR_4, VAR_5,
                                        VAR_6);
    if (!VAR_8) {
        if (VAR_7)
            return 0;
        FUNC_5 ("Failed to find commit %s\n", VAR_6);
        return -1;
    }

    *VAR_2 = FUNC_2 (*VAR_2, VAR_8,
                                           VAR_0,
                                           ((void*)0));

    VAR_9 = FUNC_3 (VAR_6);
    FUNC_1 (VAR_3, VAR_9, VAR_9);

    return 0;
}
