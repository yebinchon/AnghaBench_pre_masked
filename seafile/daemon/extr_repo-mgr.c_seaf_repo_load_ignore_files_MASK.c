
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_mode; } ;
typedef TYPE_1__ SeafStat ;
typedef int GList ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 char* FUNC_3 (int ,char const*,int ,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int *,char*) ;
 char* FUNC_7 (char*,char const*,char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,TYPE_1__*) ;
 int FUNC_10 (char*) ;

GList *FUNC_11 (const char *VAR_3)
{
    GList *VAR_4 = ((void*)0);
    SeafStat VAR_5;
    FILE *VAR_6;
    char *VAR_7, *VAR_8;
    char VAR_9[VAR_1];

    VAR_7 = FUNC_3 (VAR_2, VAR_3,
                              VAR_0, ((void*)0));
    if (FUNC_9 (VAR_7, &VAR_5) < 0)
        goto error;
    if (!FUNC_0(VAR_5.st_mode))
        goto error;
    VAR_6 = FUNC_4(VAR_7, "r");
    if (VAR_6 == ((void*)0))
        goto error;

    while (FUNC_2(VAR_9, VAR_1, VAR_6) != ((void*)0)) {

        FUNC_8 (VAR_9);


        if (VAR_9[0] == '#' || VAR_9[0] == '\0')
            continue;


        if (VAR_9[FUNC_10(VAR_9)-1] == '/')
            VAR_8 = FUNC_7("%s/%s*", VAR_3, VAR_9);
        else
            VAR_8 = FUNC_7("%s/%s", VAR_3, VAR_9);

        VAR_4 = FUNC_6(VAR_4, VAR_8);
    }

    FUNC_1(VAR_6);
    FUNC_5 (VAR_7);
    return VAR_4;

error:
    FUNC_5 (VAR_7);
    return ((void*)0);
}
