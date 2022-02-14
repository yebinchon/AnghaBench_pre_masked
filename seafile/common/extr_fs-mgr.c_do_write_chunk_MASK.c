
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int * block_mgr; } ;
typedef int SeafBlockManager ;
typedef int BlockHandle ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int *,char const*,int,char*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,char const*,int,char*,int ) ;
 int FUNC_6 (int *,int *,char const*,int) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8 (const char *VAR_2, int VAR_3,
                uint8_t *VAR_4, const char *VAR_5, int VAR_6)
{
    SeafBlockManager *VAR_7 = VAR_1->block_mgr;
    char VAR_8[41];
    BlockHandle *VAR_9;
    int VAR_10;

    FUNC_0 (VAR_4, VAR_8, 20);


    if (FUNC_1 (VAR_1->block_mgr,
                                         VAR_2, VAR_3,
                                         VAR_8))
        return 0;

    VAR_9 = FUNC_5 (VAR_7,
                                            VAR_2, VAR_3,
                                            VAR_8, VAR_0);
    if (!VAR_9) {
        FUNC_7 ("Failed to open block %s.\n", VAR_8);
        return -1;
    }

    VAR_10 = FUNC_6 (VAR_7, VAR_9, VAR_5, VAR_6);
    if (VAR_10 < 0) {
        FUNC_7 ("Failed to write chunk %s.\n", VAR_8);
        FUNC_3 (VAR_7, VAR_9);
        FUNC_2 (VAR_7, VAR_9);
        return -1;
    }

    if (FUNC_3 (VAR_7, VAR_9) < 0) {
        FUNC_7 ("failed to close block %s.\n", VAR_8);
        FUNC_2 (VAR_7, VAR_9);
        return -1;
    }

    if (FUNC_4 (VAR_7, VAR_9) < 0) {
        FUNC_7 ("failed to commit chunk %s.\n", VAR_8);
        FUNC_2 (VAR_7, VAR_9);
        return -1;
    }

    FUNC_2 (VAR_7, VAR_9);
    return 0;
}
