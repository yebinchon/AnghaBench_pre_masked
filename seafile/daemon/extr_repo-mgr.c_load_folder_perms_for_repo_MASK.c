
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sql ;
struct TYPE_12__ {scalar_t__ data; struct TYPE_12__* next; } ;
struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {int db_lock; int db; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ GList ;
typedef scalar_t__ FolderPermType ;
typedef int FolderPerm ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,char*,char*,char const*) ;
 scalar_t__ FUNC_7 (int ,char*,int ,TYPE_3__**) ;

__attribute__((used)) static GList *
FUNC_8 (SeafRepoManager *VAR_4,
                            const char *VAR_5,
                            FolderPermType VAR_6)
{
    GList *VAR_7 = ((void*)0);
    char VAR_8[256];

    FUNC_3 ((VAR_6 == VAR_1 ||
                           VAR_6 == VAR_0),
                          ((void*)0));

    if (VAR_6 == VAR_1)
        FUNC_6 (sizeof(VAR_8), VAR_8,
                          "SELECT path, permission FROM FolderUserPerms "
                          "WHERE repo_id = '%q'",
                          VAR_5);
    else
        FUNC_6 (sizeof(VAR_8), VAR_8,
                          "SELECT path, permission FROM FolderGroupPerms "
                          "WHERE repo_id = '%q'",
                          VAR_5);

    FUNC_4 (&VAR_4->priv->db_lock);

    if (FUNC_7 (VAR_4->priv->db, VAR_8,
                                     VAR_3, &VAR_7) < 0) {
        FUNC_5 (&VAR_4->priv->db_lock);
        GList *VAR_9;
        for (VAR_9 = VAR_7; VAR_9; VAR_9 = VAR_9->next)
            FUNC_0 ((FolderPerm *)VAR_9->data);
        FUNC_1 (VAR_7);
        return ((void*)0);
    }

    FUNC_5 (&VAR_4->priv->db_lock);


    VAR_7 = FUNC_2 (VAR_7, VAR_2);

    return VAR_7;
}
