
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int enc_iv; int enc_key; int salt; int random_key; int enc_version; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int db_lock; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ SeafRepo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,char const*,int ,int ,int ,int ) ;

int
FUNC_4 (SeafRepoManager *VAR_0,
                                   SeafRepo *VAR_1,
                                   const char *VAR_2)
{
    int VAR_3;

    if (FUNC_3 (VAR_1->enc_version, VAR_2, VAR_1->random_key,
                                      VAR_1->salt,
                                      VAR_1->enc_key, VAR_1->enc_iv) < 0)
        return -1;

    FUNC_0 (&VAR_0->priv->db_lock);

    VAR_3 = FUNC_2 (VAR_0, VAR_1);

    FUNC_1 (&VAR_0->priv->db_lock);

    return VAR_3;
}
