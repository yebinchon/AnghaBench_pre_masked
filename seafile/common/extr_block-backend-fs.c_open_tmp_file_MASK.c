
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* be_priv; } ;
struct TYPE_4__ {int tmp_dir; } ;
typedef TYPE_1__ FsPriv ;
typedef TYPE_2__ BlockBackend ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ,char const*) ;

__attribute__((used)) static int
FUNC_3 (BlockBackend *VAR_0,
               const char *VAR_1,
               char **VAR_2)
{
    FsPriv *VAR_3 = VAR_0->be_priv;
    int VAR_4;

    *VAR_2 = FUNC_2 ("%s/%s.XXXXXX", VAR_3->tmp_dir, VAR_1);
    VAR_4 = FUNC_1 (*VAR_2);
    if (VAR_4 < 0)
        FUNC_0 (*VAR_2);

    return VAR_4;
}
