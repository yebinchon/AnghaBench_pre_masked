
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
struct playlist_entry {int num_redirects; char** redirects; int filename; } ;
struct demuxer {scalar_t__ partially_seekable; int seekable; } ;
struct MPContext {char** resume_defaults; int cached_watch_later_configdir; int global; struct demuxer* demuxer; struct playlist_entry* playing; } ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ bstr ;
typedef int FILE ;


 int FUNC_0 (struct MPContext*,char*) ;
 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,...) ;
 double FUNC_6 (struct MPContext*) ;
 TYPE_1__ FUNC_7 (char*) ;
 char* FUNC_8 (struct MPContext*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char const*,int ,char**,struct MPContext*) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (char*,int,char*,char*) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char const*,char*,int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (struct MPContext*,int *,int ) ;
 int FUNC_20 (struct MPContext*,char*) ;

void FUNC_21(struct MPContext *VAR_4)
{
    struct playlist_entry *VAR_5 = VAR_4->playing;
    char *VAR_6 = ((void*)0);
    if (!VAR_5)
        goto exit;

    struct demuxer *VAR_7 = VAR_4->demuxer;
    if (VAR_7 && (!VAR_7->seekable || VAR_7->partially_seekable)) {
        FUNC_0(VAR_4, "Not seekable - not saving state.\n");
        goto exit;
    }

    VAR_6 = FUNC_8(VAR_4, VAR_5->filename);
    if (!VAR_6)
        goto exit;

    FUNC_10(VAR_4->global, VAR_4->cached_watch_later_configdir);

    FUNC_0(VAR_4, "Saving state.\n");

    FILE *VAR_8 = FUNC_4(VAR_6, "wb");
    if (!VAR_8)
        goto exit;

    FUNC_19(VAR_4, VAR_8, VAR_5->filename);

    double VAR_9 = FUNC_6(VAR_4);
    if (VAR_9 != VAR_0)
        FUNC_5(VAR_8, "start=%f\n", VAR_9);
    for (int VAR_10 = 0; VAR_3[VAR_10]; VAR_10++) {
        const char *VAR_11 = VAR_3[VAR_10];
        char *VAR_12 = ((void*)0);
        int VAR_13 = FUNC_12(VAR_11, VAR_1, &VAR_12, VAR_4);
        if (VAR_13 == VAR_2) {
            if (FUNC_17(VAR_11, "options/", 8) == 0)
                VAR_11 += 8;

            char *VAR_14 = VAR_4->resume_defaults[VAR_10];
            if (!VAR_14 || FUNC_15(VAR_14, VAR_12) != 0) {
                if (FUNC_13(VAR_12)) {

                    FUNC_5(VAR_8, "%s=%%%d%%%s\n", VAR_11, (int)FUNC_16(VAR_12), VAR_12);
                } else {
                    FUNC_5(VAR_8, "%s=%s\n", VAR_11, VAR_12);
                }
            }
        }
        FUNC_18(VAR_12);
    }
    FUNC_3(VAR_8);
    for (int VAR_15 = 0; VAR_15 < VAR_5->num_redirects; VAR_15++)
        FUNC_20(VAR_4, VAR_5->redirects[VAR_15]);



    if (VAR_5->num_redirects) {
        char *VAR_16 = VAR_5->redirects[0];
        char VAR_17[4096];
        if (!FUNC_9(FUNC_1(VAR_16)) && FUNC_16(VAR_16) < sizeof(VAR_17)) {
            FUNC_14(VAR_17, sizeof(VAR_17), "%s", VAR_16);
            for (;;) {
                bstr VAR_18 = FUNC_7(VAR_17);
                if (VAR_18.len == FUNC_16(VAR_17) || !VAR_18.len || FUNC_2(VAR_18, "."))
                    break;

                VAR_17[VAR_18.len] = '\0';
                if (FUNC_16(VAR_17) >= 2)
                    FUNC_11(VAR_17);
                FUNC_20(VAR_4, VAR_17);
            }
        }
    }

exit:
    FUNC_18(VAR_6);
}
