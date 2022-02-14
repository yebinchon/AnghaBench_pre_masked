
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int log; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char const*,char*) ;
 char* FUNC_3 (void*,struct mpv_global*,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (int *) ;
 char* FUNC_9 (int *,char*) ;

__attribute__((used)) static void FUNC_10(char *VAR_1, char **VAR_2, FILE **VAR_3,
                        const char *VAR_4, struct mpv_global *VAR_5)
{
    void *VAR_6 = FUNC_8(((void*)0));
    bool VAR_7 = 0;

    char *VAR_8 = FUNC_3(VAR_6, VAR_5, VAR_1);
    if (!VAR_8)
        VAR_8 = "";

    FUNC_4(&VAR_0);

    char *VAR_9 = *VAR_2 ? *VAR_2 : "";
    if (FUNC_6(VAR_9, VAR_8) != 0) {
        if (*VAR_3)
            FUNC_0(*VAR_3);
        *VAR_3 = ((void*)0);
        FUNC_7(*VAR_2);
        *VAR_2 = FUNC_9(((void*)0), VAR_8);
        if (VAR_8[0]) {
            *VAR_3 = FUNC_1(VAR_8, "wb");
            VAR_7 = !*VAR_3;
        }
    }

    FUNC_5(&VAR_0);

    if (VAR_7)
        FUNC_2(VAR_5->log, "Failed to open %s file '%s'\n", VAR_4, VAR_8);

    FUNC_7(VAR_6);
}
