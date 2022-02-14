
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct overlay {int x; int y; TYPE_3__* source; } ;
struct mp_cmd_ctx {int success; TYPE_2__* args; struct MPContext* mpctx; } ;
struct MPContext {int dummy; } ;
struct TYPE_7__ {int * stride; int * planes; } ;
struct TYPE_5__ {int i; char* s; } ;
struct TYPE_6__ {TYPE_1__ v; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPContext*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int,int ,int) ;
 void* FUNC_3 (int *,int,int ,int ,int,int ) ;
 TYPE_3__* FUNC_4 (int ,int,int) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct MPContext*,int,struct overlay*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char**,int) ;
 unsigned long long FUNC_10 (char*,char**,int ) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_12(void *VAR_7)
{
    struct mp_cmd_ctx *VAR_8 = VAR_7;
    struct MPContext *VAR_9 = VAR_8->mpctx;
    int VAR_10 = VAR_8->args[0].v.i, VAR_11 = VAR_8->args[1].v.i, VAR_12 = VAR_8->args[2].v.i;
    char *VAR_13 = VAR_8->args[3].v.s;
    int VAR_14 = VAR_8->args[4].v.i;
    char *VAR_15 = VAR_8->args[5].v.s;
    int VAR_16 = VAR_8->args[6].v.i, VAR_17 = VAR_8->args[7].v.i, VAR_18 = VAR_8->args[8].v.i;

    if (FUNC_8(VAR_15, "bgra") != 0) {
        FUNC_0(VAR_9, "overlay-add: unsupported OSD format '%s'\n", VAR_15);
        goto error;
    }
    if (VAR_10 < 0 || VAR_10 >= 64) {
        FUNC_0(VAR_9, "overlay-add: invalid id %d\n", VAR_10);
        goto error;
    }
    if (VAR_16 <= 0 || VAR_17 <= 0 || VAR_18 < VAR_16 * 4 || (VAR_18 % 4)) {
        FUNC_0(VAR_9, "overlay-add: inconsistent parameters\n");
        goto error;
    }
    struct overlay VAR_19 = {
        .source = FUNC_4(VAR_0, VAR_16, VAR_17),
        .x = VAR_11,
        .y = VAR_12,
    };
    if (!VAR_19.source)
        goto error;
    int VAR_20 = -1;
    bool VAR_21 = 1;
    void *VAR_22 = ((void*)0);
    if (VAR_13[0] == '@') {
        char *VAR_23;
        VAR_20 = FUNC_9(&VAR_13[1], &VAR_23, 10);
        if (!VAR_13[1] || VAR_23[0])
            VAR_20 = -1;
        VAR_21 = 0;
    } else if (VAR_13[0] == '&') {
        char *VAR_24;
        unsigned long long VAR_25 = FUNC_10(&VAR_13[1], &VAR_24, 0);
        if (!VAR_13[1] || VAR_24[0])
            VAR_25 = 0;
        VAR_22 = (void *)(uintptr_t)VAR_25;
    } else {
        VAR_20 = FUNC_6(VAR_13, VAR_5 | VAR_3 | VAR_4);
    }
    int VAR_26 = 0;
    if (VAR_20 >= 0) {
        VAR_26 = VAR_14 + VAR_17 * VAR_18;
        void *VAR_27 = FUNC_3(((void*)0), VAR_26, VAR_6, VAR_2, VAR_20, 0);
        if (VAR_21)
            FUNC_1(VAR_20);
        if (VAR_27 && VAR_27 != VAR_1)
            VAR_22 = VAR_27;
    }
    if (!VAR_22) {
        FUNC_0(VAR_9, "overlay-add: could not open or map '%s'\n", VAR_13);
        FUNC_11(VAR_19.source);
        goto error;
    }
    FUNC_2(VAR_19.source->planes[0], (char *)VAR_22 + VAR_14, VAR_16 * 4, VAR_17,
               VAR_19.source->stride[0], VAR_18);
    if (VAR_26)
        FUNC_5(VAR_22, VAR_26);

    FUNC_7(VAR_9, VAR_10, &VAR_19);
    return;
error:
    VAR_8->success = 0;
}
