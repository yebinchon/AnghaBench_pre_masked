
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int gsize ;
typedef int gboolean ;
struct TYPE_2__ {int block_ids; int type; } ;
typedef TYPE_1__ SeafileOndisk ;
typedef int GChecksum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char*,char const*) ;

__attribute__((used)) static gboolean
FUNC_8 (const char *VAR_4, const void *VAR_5, int VAR_6, gboolean VAR_7)
{
    const SeafileOndisk *VAR_8 = VAR_5;
    GChecksum *VAR_9;
    uint8_t VAR_10[20];
    gsize VAR_11 = 20;
    char VAR_12[41];

    if (VAR_6 < sizeof(SeafileOndisk)) {
        FUNC_6 ("[fs mgr] Corrupt seafile object %s.\n", VAR_4);
        return VAR_0;
    }

    if (FUNC_4(VAR_8->type) != VAR_2) {
        FUNC_6 ("[fd mgr] %s is not a file.\n", VAR_4);
        return VAR_0;
    }

    int VAR_13 = VAR_6 - sizeof(SeafileOndisk);
    if (VAR_13 % 20 != 0) {
        FUNC_6 ("[fs mgr] Bad seafile id list length %d.\n", VAR_13);
        return VAR_0;
    }

    if (!VAR_7)
        return VAR_3;

    VAR_9 = FUNC_2 (VAR_1);
    FUNC_3 (VAR_9, VAR_8->block_ids, VAR_6 - sizeof(SeafileOndisk));
    FUNC_1 (VAR_9, VAR_10, &VAR_11);
    FUNC_0 (VAR_9);

    FUNC_5 (VAR_10, VAR_12, 20);

    if (FUNC_7 (VAR_12, VAR_4) == 0)
        return VAR_3;
    else
        return VAR_0;
}
