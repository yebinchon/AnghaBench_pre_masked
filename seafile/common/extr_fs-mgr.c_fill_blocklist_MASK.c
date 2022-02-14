
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_4__ {int n_blocks; int * blk_sha1s; } ;
typedef TYPE_1__ Seafile ;
typedef int SeafFSManager ;
typedef int BlockList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *,char const*,int,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static gboolean
FUNC_4 (SeafFSManager *VAR_3,
                const char *VAR_4, int VAR_5,
                const char *VAR_6, int VAR_7,
                void *VAR_8, gboolean *VAR_9)
{
    BlockList *VAR_10 = VAR_8;
    Seafile *VAR_11;
    int VAR_12;

    if (VAR_7 == VAR_1) {
        VAR_11 = FUNC_1 (VAR_3, VAR_4, VAR_5, VAR_6);
        if (!VAR_11) {
            FUNC_2 ("[fs mgr] Failed to find file %s.\n", VAR_6);
            return VAR_0;
        }

        for (VAR_12 = 0; VAR_12 < VAR_11->n_blocks; ++VAR_12)
            FUNC_0 (VAR_10, VAR_11->blk_sha1s[VAR_12]);

        FUNC_3 (VAR_11);
    }

    return VAR_2;
}
