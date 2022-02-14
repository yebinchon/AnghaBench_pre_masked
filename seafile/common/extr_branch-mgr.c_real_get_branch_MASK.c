
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int db_lock; int * db; } ;
typedef TYPE_2__ SeafBranchManager ;
typedef int SeafBranch ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char const*,char*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char const*,char const*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,char*) ;

__attribute__((used)) static SeafBranch *
FUNC_11 (SeafBranchManager *VAR_2,
                 const char *VAR_3,
                 const char *VAR_4)
{
    SeafBranch *VAR_5 = ((void*)0);
    sqlite3_stmt *VAR_6;
    sqlite3 *VAR_7;
    char *VAR_8;
    int VAR_9;

    FUNC_0 (&VAR_2->priv->db_lock);

    VAR_7 = VAR_2->priv->db;
    VAR_8 = FUNC_8 ("SELECT commit_id FROM Branch "
                           "WHERE name = %Q and repo_id='%s'",
                           VAR_4, VAR_3);
    if (!(VAR_6 = FUNC_10 (VAR_7, VAR_8))) {
        FUNC_3 ("[Branch mgr] Couldn't prepare query %s\n", VAR_8);
        FUNC_7 (VAR_8);
        FUNC_1 (&VAR_2->priv->db_lock);
        return ((void*)0);
    }
    FUNC_7 (VAR_8);

    VAR_9 = FUNC_9 (VAR_6);
    if (VAR_9 == VAR_1) {
        char *VAR_10 = (char *)FUNC_4 (VAR_6, 0);

        VAR_5 = FUNC_2 (VAR_4, VAR_3, VAR_10);
        FUNC_1 (&VAR_2->priv->db_lock);
        FUNC_6 (VAR_6);
        return VAR_5;
    } else if (VAR_9 == VAR_0) {
        const char *VAR_11 = FUNC_5 (VAR_7);
        FUNC_3 ("Couldn't prepare query, error: %d->'%s'\n",
                   VAR_9, VAR_11 ? VAR_11 : "no error given");
    }

    FUNC_6 (VAR_6);
    FUNC_1 (&VAR_2->priv->db_lock);
    return ((void*)0);
}
