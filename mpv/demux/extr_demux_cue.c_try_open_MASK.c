
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeline {int global; int cancel; TYPE_1__* demuxer; } ;
struct demuxer_params {char* force_format; } ;
struct demuxer {int dummy; } ;
struct bstr {int dummy; } ;
struct TYPE_2__ {char* filename; } ;


 int FUNC_0 (struct timeline*,char*,char*) ;
 int FUNC_1 (struct timeline*,char*) ;
 int FUNC_2 (struct timeline*,struct demuxer*) ;
 struct bstr FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct bstr,struct bstr) ;
 scalar_t__ FUNC_5 (struct bstr,struct bstr) ;
 struct demuxer* FUNC_6 (char*,struct demuxer_params*,int ,int ) ;

__attribute__((used)) static bool FUNC_7(struct timeline *VAR_0, char *VAR_1)
{
    struct bstr VAR_2 = FUNC_3(VAR_1);



    if (FUNC_4(VAR_2, FUNC_3(".cue"))
        || FUNC_5(FUNC_3(VAR_0->demuxer->filename), VAR_2) == 0)
        return 0;

    struct demuxer *VAR_3 = FUNC_6(VAR_1, ((void*)0), VAR_0->cancel, VAR_0->global);






    if (!VAR_3 && FUNC_4(VAR_2, FUNC_3(".bin"))) {
        FUNC_1(VAR_0, "CUE: Opening as BIN file!\n");
        struct demuxer_params VAR_4 = {.force_format = "rawaudio"};
        VAR_3 = FUNC_6(VAR_1, &VAR_4, VAR_0->cancel, VAR_0->global);
    }
    if (VAR_3) {
        FUNC_2(VAR_0, VAR_3);
        return 1;
    }
    FUNC_0(VAR_0, "Could not open source '%s'!\n", VAR_1);
    return 0;
}
