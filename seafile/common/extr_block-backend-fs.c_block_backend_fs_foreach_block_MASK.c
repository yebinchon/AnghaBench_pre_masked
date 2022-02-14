
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int path ;
typedef int block_id ;
struct TYPE_5__ {TYPE_1__* be_priv; } ;
struct TYPE_4__ {int block_dir; int v0_block_dir; } ;
typedef int (* SeafBlockFunc ) (char const*,int,char*,void*) ;
typedef int GDir ;
typedef TYPE_1__ FsPriv ;
typedef TYPE_2__ BlockBackend ;


 int VAR_0 ;
 char* FUNC_0 (int ,char const*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int,char*,char const*,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10 (BlockBackend *VAR_1,
                                const char *VAR_2,
                                int VAR_3,
                                SeafBlockFunc VAR_4,
                                void *VAR_5)
{
    FsPriv *VAR_6 = VAR_1->be_priv;
    char *VAR_7 = ((void*)0);
    int VAR_8;
    GDir *VAR_9 = ((void*)0), *VAR_10;
    const char *VAR_11, *VAR_12;
    char VAR_13[128];
    char VAR_14[VAR_0], *VAR_15;
    int VAR_16 = 0;







    VAR_7 = FUNC_0 (VAR_6->block_dir, VAR_2, ((void*)0));

    VAR_8 = FUNC_9 (VAR_7);

    VAR_9 = FUNC_2 (VAR_7, 0, ((void*)0));
    if (!VAR_9) {
        goto out;
    }

    FUNC_6 (VAR_14, VAR_7, VAR_8);
    VAR_15 = VAR_14 + VAR_8;

    while ((VAR_11 = FUNC_3(VAR_9)) != ((void*)0)) {
        FUNC_8 (VAR_15, sizeof(VAR_14) - VAR_8, "/%s", VAR_11);

        VAR_10 = FUNC_2 (VAR_14, 0, ((void*)0));
        if (!VAR_10) {
            FUNC_7 ("Failed to open block dir %s.\n", VAR_14);
            continue;
        }

        while ((VAR_12 = FUNC_3(VAR_10)) != ((void*)0)) {
            FUNC_8 (VAR_13, sizeof(VAR_13), "%s%s", VAR_11, VAR_12);
            if (!VAR_4 (VAR_2, VAR_3, VAR_13, VAR_5)) {
                FUNC_1 (VAR_10);
                goto out;
            }
        }
        FUNC_1 (VAR_10);
    }

out:
    if (VAR_9)
        FUNC_1 (VAR_9);
    FUNC_4 (VAR_7);

    return VAR_16;
}
