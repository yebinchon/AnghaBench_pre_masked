
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeline {TYPE_1__* demuxer; } ;
struct dirent {char* d_name; } ;
struct bstr {int len; } ;
struct TYPE_2__ {char* filename; } ;
typedef int DIR ;


 int FUNC_0 (struct timeline*,char*) ;
 int FUNC_1 (struct timeline*,char*,...) ;
 struct bstr FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct bstr,struct bstr) ;
 struct bstr FUNC_4 (struct bstr) ;
 int FUNC_5 (void*,struct bstr) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (char*) ;
 struct bstr FUNC_8 (char*) ;
 char* FUNC_9 (void*,struct bstr,struct bstr) ;
 int * FUNC_10 (int ) ;
 struct dirent* FUNC_11 (int *) ;
 int FUNC_12 (void*) ;
 void* FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct timeline*,char*) ;

__attribute__((used)) static bool FUNC_15(struct timeline *VAR_0, char *VAR_1)
{
    void *VAR_2 = FUNC_13(((void*)0));
    bool VAR_3 = 0;

    struct bstr VAR_4 = FUNC_8(VAR_0->demuxer->filename);

    struct bstr VAR_5 = FUNC_2(FUNC_7(VAR_1));
    if (!VAR_5.len) {
        FUNC_1(VAR_0, "CUE: Invalid audio filename in .cue file!\n");
    } else {
        char *VAR_6 = FUNC_9(VAR_2, VAR_4, VAR_5);
        if (FUNC_14(VAR_0, VAR_6)) {
            VAR_3 = 1;
            goto out;
        }
    }






    struct bstr VAR_7 =
        FUNC_4(FUNC_2(FUNC_7(VAR_0->demuxer->filename)));

    DIR *VAR_8 = FUNC_10(FUNC_5(VAR_2, VAR_4));
    if (!VAR_8)
        goto out;
    struct dirent *VAR_9;
    while ((VAR_9 = FUNC_11(VAR_8))) {
        char *VAR_10 = VAR_9->d_name;
        struct bstr VAR_11 = FUNC_2(VAR_10);
        if (FUNC_3(VAR_11, VAR_7)) {
            FUNC_1(VAR_0, "CUE: No useful audio filename "
                    "in .cue file found, trying with '%s' instead!\n",
                    VAR_10);
            if (FUNC_14(VAR_0, FUNC_9(VAR_2, VAR_4, VAR_11))) {
                VAR_3 = 1;
                break;
            }
        }
    }
    FUNC_6(VAR_8);

out:
    FUNC_12(VAR_2);
    if (!VAR_3)
        FUNC_0(VAR_0, "CUE: Could not open audio file!\n");
    return VAR_3;
}
