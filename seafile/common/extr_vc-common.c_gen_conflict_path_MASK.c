
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int gint64 ;
typedef int GString ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char*,char const*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,int ) ;
 char* FUNC_7 (char*,char) ;

char *
FUNC_8 (const char *VAR_1,
                   const char *VAR_2,
                   gint64 VAR_3)
{
    char VAR_4[64];
    time_t VAR_5 = (time_t)VAR_3;
    char *VAR_6 = FUNC_1 (VAR_1);
    GString *VAR_7 = FUNC_3 (((void*)0));
    char *VAR_8, *VAR_9;

    FUNC_6(VAR_4, 64, "%Y-%m-%d-%H-%M-%S", FUNC_5(&VAR_5));

    VAR_8 = FUNC_7 (VAR_6, '.');

    if (VAR_8 != ((void*)0)) {
        *VAR_8 = '\0';
        VAR_9 = VAR_8 + 1;
        if (VAR_2)
            FUNC_4 (VAR_7, "%s (SFConflict %s %s).%s",
                             VAR_6, VAR_2, VAR_4, VAR_9);
        else
            FUNC_4 (VAR_7, "%s (SFConflict %s).%s",
                             VAR_6, VAR_4, VAR_9);
    } else {
        if (VAR_2)
            FUNC_4 (VAR_7, "%s (SFConflict %s %s)",
                             VAR_6, VAR_2, VAR_4);
        else
            FUNC_4 (VAR_7, "%s (SFConflict %s)",
                             VAR_6, VAR_4);
    }

    FUNC_0 (VAR_6);
    return FUNC_2 (VAR_7, VAR_0);
}
