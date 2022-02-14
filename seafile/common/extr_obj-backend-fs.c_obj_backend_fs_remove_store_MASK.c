
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* obj_dir; } ;
struct TYPE_4__ {TYPE_2__* priv; } ;
typedef TYPE_1__ ObjBackend ;
typedef int GDir ;
typedef TYPE_2__ FsPriv ;


 char* FUNC_0 (char*,char const*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8 (ObjBackend *VAR_0, const char *VAR_1)
{
    FsPriv *VAR_2 = VAR_0->priv;
    char *VAR_3 = ((void*)0);
    GDir *VAR_4, *VAR_5;
    const char *VAR_6, *VAR_7;
    char *VAR_8, *VAR_9;

    VAR_3 = FUNC_0 (VAR_2->obj_dir, VAR_1, ((void*)0));

    VAR_4 = FUNC_2 (VAR_3, 0, ((void*)0));
    if (!VAR_4) {
        FUNC_4 (VAR_3);
        return 0;
    }

    while ((VAR_6 = FUNC_3(VAR_4)) != ((void*)0)) {
        VAR_8 = FUNC_0 (VAR_3, VAR_6, ((void*)0));

        VAR_5 = FUNC_2 (VAR_8, 0, ((void*)0));
        if (!VAR_5) {
            FUNC_7 ("Failed to open obj dir %s.\n", VAR_8);
            FUNC_1 (VAR_4);
            FUNC_4 (VAR_8);
            FUNC_4 (VAR_3);
            return -1;
        }

        while ((VAR_7 = FUNC_3(VAR_5)) != ((void*)0)) {
            VAR_9 = FUNC_0 (VAR_8, VAR_7, ((void*)0));
            FUNC_6 (VAR_9);
            FUNC_4 (VAR_9);
        }
        FUNC_1 (VAR_5);

        FUNC_5 (VAR_8);
        FUNC_4 (VAR_8);
    }

    FUNC_1 (VAR_4);
    FUNC_5 (VAR_3);
    FUNC_4 (VAR_3);

    return 0;
}
