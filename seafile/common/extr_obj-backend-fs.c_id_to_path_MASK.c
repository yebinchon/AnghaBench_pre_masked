
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* obj_dir; char const* v0_obj_dir; int v0_dir_len; } ;
typedef TYPE_1__ FsPriv ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,int ,char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_2 (FsPriv *VAR_1, const char *VAR_2, char VAR_3[],
            const char *VAR_4, int VAR_5)
{
    char *VAR_6 = VAR_3;
    int VAR_7;
    VAR_7 = FUNC_1 (VAR_3, VAR_0, "%s/%s/", VAR_1->obj_dir, VAR_4);
    VAR_6 += VAR_7;


    FUNC_0 (VAR_6, VAR_2, 2);
    VAR_6[2] = '/';
    VAR_6 += 3;

    FUNC_0 (VAR_6, VAR_2 + 2, 41 - 2);
}
