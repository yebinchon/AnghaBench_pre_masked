
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* be_priv; } ;
struct TYPE_4__ {char* block_dir; char const* v0_block_dir; int v0_block_dir_len; } ;
typedef TYPE_1__ FsPriv ;
typedef TYPE_2__ BlockBackend ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,int ,char*,char*,char const*) ;

__attribute__((used)) static char *
FUNC_2 (BlockBackend *VAR_1,
                const char *VAR_2,
                char VAR_3[],
                const char *VAR_4,
                int VAR_5)
{
    FsPriv *VAR_6 = VAR_1->be_priv;
    char *VAR_7 = VAR_3;
    int VAR_8;
    VAR_8 = FUNC_1 (VAR_3, VAR_0, "%s/%s/", VAR_6->block_dir, VAR_4);
    VAR_7 += VAR_8;


    FUNC_0 (VAR_7, VAR_2, 2);
    VAR_7[2] = '/';
    VAR_7 += 3;

    FUNC_0 (VAR_7, VAR_2 + 2, 41 - 2);

    return VAR_3;
}
