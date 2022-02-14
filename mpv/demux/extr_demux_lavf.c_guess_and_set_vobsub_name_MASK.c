
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct demuxer {TYPE_1__* priv; } ;
struct TYPE_3__ {int filename; } ;
typedef TYPE_1__ lavf_priv_t ;
typedef int bstr ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct demuxer*,char*,char*) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 char* FUNC_7 (void*,int ) ;
 char* FUNC_8 (void*,char*,char*,...) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct demuxer *VAR_0, AVDictionary **VAR_1)
{
    lavf_priv_t *VAR_2 = VAR_0->priv;
    if (!FUNC_5(VAR_2, "vobsub"))
        return;

    void *VAR_3 = FUNC_10(((void*)0));
    bstr VAR_4 = FUNC_3(VAR_2->filename);
    char *VAR_5 = ((void*)0);
    if (FUNC_6(VAR_4)) {


        bstr VAR_6, VAR_7;
        if (FUNC_4(VAR_4, "?", &VAR_6, &VAR_7)) {
            VAR_5 = FUNC_7(VAR_3, VAR_6);
            if (VAR_5)
                VAR_5 = FUNC_8(VAR_3, "%s?%.*s", VAR_5, FUNC_0(VAR_7));
        }
    }
    if (!VAR_5)
        VAR_5 = FUNC_7(VAR_3, VAR_4);
    if (!VAR_5)
        VAR_5 = FUNC_8(VAR_3, "%.*s.sub", FUNC_0(VAR_4));

    FUNC_1(VAR_0, "Assuming associated .sub file: %s\n", VAR_5);
    FUNC_2(VAR_1, "sub_name", VAR_5, 0);
    FUNC_9(VAR_3);
}
