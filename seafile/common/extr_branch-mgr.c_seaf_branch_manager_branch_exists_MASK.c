
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_7__ {TYPE_1__* seaf; TYPE_2__* priv; } ;
struct TYPE_6__ {int db_lock; int db; } ;
struct TYPE_5__ {int db; } ;
typedef TYPE_3__ SeafBranchManager ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int *,int,char*,char const*,char*,char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char const*,char const*) ;
 int FUNC_5 (int ,char*) ;

gboolean
FUNC_6 (SeafBranchManager *VAR_1,
                                   const char *VAR_2,
                                   const char *VAR_3)
{

    char *VAR_4;
    gboolean VAR_5;

    FUNC_0 (&VAR_1->priv->db_lock);

    VAR_4 = FUNC_4 ("SELECT name FROM Branch WHERE name = %Q "
                           "AND repo_id='%s'", VAR_3, VAR_2);
    VAR_5 = FUNC_5 (VAR_1->priv->db, VAR_4);
    FUNC_3 (VAR_4);

    FUNC_1 (&VAR_1->priv->db_lock);
    return VAR_5;
}
