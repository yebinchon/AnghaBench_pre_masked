
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int sql ;
struct TYPE_8__ {int enc_version; char* id; int enc_iv; int enc_key; } ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int * db; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ SeafRepo ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int,char*,char*,char*,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;

__attribute__((used)) static int
FUNC_3 (SeafRepoManager *VAR_0,
                    SeafRepo *VAR_1)
{
    sqlite3 *VAR_2 = VAR_0->priv->db;
    char VAR_3[512];
    char VAR_4[65], VAR_5[33];

    if (VAR_1->enc_version == 1) {
        FUNC_0 (VAR_1->enc_key, VAR_4, 16);
        FUNC_0 (VAR_1->enc_iv, VAR_5, 16);
    } else if (VAR_1->enc_version >= 2) {
        FUNC_0 (VAR_1->enc_key, VAR_4, 32);
        FUNC_0 (VAR_1->enc_iv, VAR_5, 16);
    }

    FUNC_1 (VAR_3, sizeof(VAR_3), "REPLACE INTO RepoKeys VALUES ('%s', '%s', '%s')",
              VAR_1->id, VAR_4, VAR_5);
    if (FUNC_2 (VAR_2, VAR_3) < 0)
        return -1;

    return 0;
}
