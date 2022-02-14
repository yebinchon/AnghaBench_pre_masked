
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef char gchar ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int db_lock; int * db; } ;
typedef TYPE_2__ SeafBranchManager ;
typedef int SeafBranch ;
typedef int GList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char const*,char*) ;
 int FUNC_6 (char*,int,char const*) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_8 (int *,int) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *,char*) ;

GList *
FUNC_13 (SeafBranchManager *VAR_3,
                                     const char *VAR_4)
{
    sqlite3 *VAR_5 = VAR_3->priv->db;

    int VAR_6;
    sqlite3_stmt *VAR_7;
    char VAR_8[256];
    char *VAR_9;
    char *VAR_10;
    GList *VAR_11 = ((void*)0);
    SeafBranch *VAR_12;

    FUNC_7 (VAR_8, 256, "SELECT name, commit_id FROM branch WHERE repo_id ='%s'",
              VAR_4);

    FUNC_2 (&VAR_3->priv->db_lock);

    if ( !(VAR_7 = FUNC_12(VAR_5, VAR_8)) ) {
        FUNC_3 (&VAR_3->priv->db_lock);
        return ((void*)0);
    }

    while (1) {
        VAR_6 = FUNC_11 (VAR_7);
        if (VAR_6 == VAR_2) {
            VAR_9 = (char *)FUNC_8(VAR_7, 0);
            VAR_10 = (char *)FUNC_8(VAR_7, 1);
            VAR_12 = FUNC_5 (VAR_9, VAR_4, VAR_10);
            VAR_11 = FUNC_0 (VAR_11, VAR_12);
        }
        if (VAR_6 == VAR_0)
            break;
        if (VAR_6 == VAR_1) {
            const gchar *VAR_13 = FUNC_9 (VAR_5);
            FUNC_6 ("Couldn't prepare query, error: %d->'%s'\n",
                       VAR_6, VAR_13 ? VAR_13 : "no error given");
            FUNC_10 (VAR_7);
            FUNC_4 (VAR_11);
            FUNC_3 (&VAR_3->priv->db_lock);
            return ((void*)0);
        }
    }

    FUNC_10 (VAR_7);
    FUNC_3 (&VAR_3->priv->db_lock);
    return FUNC_1(VAR_11);
}
