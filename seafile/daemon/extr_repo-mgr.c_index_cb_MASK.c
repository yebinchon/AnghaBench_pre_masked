
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gint64 ;
typedef int gboolean ;
struct TYPE_2__ {int disable_block_hash; int fs_mgr; } ;
typedef int SeafileCrypt ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int,char const*,unsigned char*,int *,int *,int ,int) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_1,
          int VAR_2,
          const char *VAR_3,
          unsigned char VAR_4[],
          SeafileCrypt *VAR_5,
          gboolean VAR_6)
{
    gint64 VAR_7;


    if (FUNC_0 (VAR_0->fs_mgr, VAR_1, VAR_2,
                                      VAR_3, VAR_4, &VAR_7, VAR_5, VAR_6, !VAR_0->disable_block_hash) < 0) {
        FUNC_1 ("Failed to index file %s.\n", VAR_3);
        return -1;
    }
    return 0;
}
