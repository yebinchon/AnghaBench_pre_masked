
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct MPOpts {char* watch_later_directory; scalar_t__ ignore_path_in_watch_later_config; } ;
struct MPContext {char* cached_watch_later_configdir; int global; struct MPOpts* opts; } ;
typedef int bstr ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (struct MPContext*,int ,int ) ;
 char* FUNC_4 (struct MPContext*,int ,char*) ;
 char* FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (void*,char*,char const*) ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (char*,char*,int ) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (int *) ;
 char* FUNC_12 (void*,char*) ;

__attribute__((used)) static char *FUNC_13(struct MPContext *VAR_1,
                                                    const char *VAR_2)
{
    struct MPOpts *VAR_3 = VAR_1->opts;
    char *VAR_4 = ((void*)0);
    void *VAR_5 = FUNC_11(((void*)0));
    const char *VAR_6 = VAR_2;
    bstr VAR_7 = FUNC_1(VAR_2);
    if (!FUNC_6(VAR_7)) {
        if (VAR_3->ignore_path_in_watch_later_config) {
            VAR_6 = FUNC_2(VAR_2);
        } else {
            char *VAR_8 = FUNC_5(VAR_5);
            if (!VAR_8)
                goto exit;
            VAR_6 = FUNC_7(VAR_5, VAR_8, VAR_2);
        }
    }
    uint8_t VAR_9[16];
    FUNC_0(VAR_9, VAR_6, FUNC_8(VAR_6));
    char *VAR_10 = FUNC_12(VAR_5, "");
    for (int VAR_11 = 0; VAR_11 < 16; VAR_11++)
        VAR_10 = FUNC_9(VAR_10, "%02X", VAR_9[VAR_11]);

    if (!VAR_1->cached_watch_later_configdir) {
        char *VAR_12 = VAR_1->opts->watch_later_directory;
        if (VAR_12 && VAR_12[0]) {
            VAR_1->cached_watch_later_configdir =
                FUNC_4(VAR_1, VAR_1->global, VAR_12);
        }
    }

    if (!VAR_1->cached_watch_later_configdir) {
        VAR_1->cached_watch_later_configdir =
            FUNC_3(VAR_1, VAR_1->global, VAR_0);
    }

    if (VAR_1->cached_watch_later_configdir)
        VAR_4 = FUNC_7(((void*)0), VAR_1->cached_watch_later_configdir, VAR_10);

exit:
    FUNC_10(VAR_5);
    return VAR_4;
}
