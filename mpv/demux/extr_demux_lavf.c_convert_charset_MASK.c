
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct demuxer {int global; int log; TYPE_2__* priv; } ;
struct TYPE_10__ {int own_stream; int stream; TYPE_1__* opts; } ;
typedef TYPE_2__ lavf_priv_t ;
struct TYPE_11__ {scalar_t__ start; int len; } ;
typedef TYPE_3__ bstr ;
struct TYPE_9__ {char* sub_cp; } ;


 int VAR_0 ;
 int FUNC_0 (struct demuxer*,char*,char*) ;
 int FUNC_1 (struct demuxer*,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,TYPE_3__,char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 TYPE_3__ FUNC_5 (int ,TYPE_3__,char*,int ) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 TYPE_3__ FUNC_7 (int ,int *,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct demuxer *VAR_1)
{
    lavf_priv_t *VAR_2 = VAR_1->priv;
    char *VAR_3 = VAR_2->opts->sub_cp;
    if (!VAR_3 || FUNC_4(VAR_3))
        return;
    bstr VAR_4 = FUNC_7(VAR_2->stream, ((void*)0), 128 * 1024 * 1024);
    if (!VAR_4.start) {
        FUNC_1(VAR_1, "File too big (or error reading) - skip charset probing.\n");
        return;
    }
    void *VAR_5 = VAR_4.start;
    VAR_3 = (char *)FUNC_2(VAR_2, VAR_1->log, VAR_4, VAR_3, 0);
    if (VAR_3 && !FUNC_4(VAR_3))
        FUNC_0(VAR_1, "Using subtitle charset: %s\n", VAR_3);

    if (!FUNC_3(VAR_3) && !FUNC_4(VAR_3)) {
        bstr VAR_6 = FUNC_5(VAR_1->log, VAR_4, VAR_3, VAR_0);
        if (VAR_6.start && VAR_6.start != VAR_4.start)
            FUNC_9(VAR_5, VAR_6.start);
        if (VAR_6.start)
            VAR_4 = VAR_6;
    }
    if (VAR_4.start) {
        VAR_2->stream = FUNC_6(VAR_1->global, VAR_4.start, VAR_4.len);
        VAR_2->own_stream = 1;
    }
    FUNC_8(VAR_5);
}
