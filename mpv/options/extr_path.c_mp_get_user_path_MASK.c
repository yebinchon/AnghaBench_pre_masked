
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int type ;
struct mpv_global {int dummy; } ;
struct TYPE_11__ {char* start; } ;
typedef TYPE_1__ bstr ;


 char* FUNC_0 (TYPE_1__) ;
 int FUNC_1 (struct mpv_global*,char*,char const*,char*) ;
 TYPE_1__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__,char*,TYPE_1__*,TYPE_1__*) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (void*,struct mpv_global*,char const*) ;
 char* FUNC_8 (void*,struct mpv_global*,char*) ;
 char* FUNC_9 (void*,TYPE_1__,TYPE_1__) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (void*) ;
 void* FUNC_12 (int *) ;
 char* FUNC_13 (void*,char const*) ;

char *FUNC_14(void *VAR_0, struct mpv_global *VAR_1,
                       const char *VAR_2)
{
    if (!VAR_2)
        return ((void*)0);
    char *VAR_3 = ((void*)0);
    bstr VAR_4 = FUNC_2(VAR_2);
    if (FUNC_3(&VAR_4, "~")) {

        bstr VAR_5, VAR_6;
        if (FUNC_5(VAR_4, "/", &VAR_5, &VAR_6)) {
            const char *VAR_7 = VAR_6.start;
            if (FUNC_4(VAR_5, "~")) {
                VAR_3 = FUNC_7(VAR_0, VAR_1, VAR_7);
                if (!VAR_3) {
                    void *VAR_8 = FUNC_12(((void*)0));
                    const char *VAR_9 = FUNC_8(VAR_8, VAR_1, "home");
                    VAR_3 = FUNC_9(VAR_0, FUNC_2(VAR_9), VAR_6);
                    FUNC_11(VAR_8);
                }
            } else if (FUNC_4(VAR_5, "")) {
                char *VAR_10 = FUNC_6("HOME");
                if (!VAR_10)
                    VAR_10 = FUNC_6("USERPROFILE");
                VAR_3 = FUNC_9(VAR_0, FUNC_2(VAR_10), VAR_6);
            } else if (FUNC_3(&VAR_5, "~")) {
                void *VAR_11 = FUNC_12(((void*)0));
                char VAR_12[80];
                FUNC_10(VAR_12, sizeof(VAR_12), "%.*s", FUNC_0(VAR_5));
                const char *VAR_13 = FUNC_8(VAR_11, VAR_1, VAR_12);
                VAR_3 = FUNC_9(VAR_0, FUNC_2(VAR_13), VAR_6);
                FUNC_11(VAR_11);
            }
        }
    }
    if (!VAR_3)
        VAR_3 = FUNC_13(VAR_0, VAR_2);
    FUNC_1(VAR_1, "user path: '%s' -> '%s'\n", VAR_2, VAR_3);
    return VAR_3;
}
