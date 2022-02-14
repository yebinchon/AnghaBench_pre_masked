
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_cmd_ctx {int success; TYPE_2__* args; struct MPContext* mpctx; } ;
struct MPContext {int input; } ;
struct TYPE_3__ {int i; } ;
struct TYPE_4__ {TYPE_1__ v; } ;


 int FUNC_0 (struct MPContext*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int const,int const) ;

__attribute__((used)) static void FUNC_3(void *VAR_4)
{
    struct mp_cmd_ctx *VAR_5 = VAR_4;
    struct MPContext *VAR_6 = VAR_5->mpctx;

    const int VAR_7 = VAR_5->args[0].v.i, VAR_8 = VAR_5->args[1].v.i;
    int VAR_9 = VAR_5->args[2].v.i;
    if (VAR_9 == -1) {
        FUNC_2(VAR_6->input, VAR_7, VAR_8);
        return;
    }
    if (VAR_9 < 0 || VAR_9 >= VAR_0) {
        FUNC_0(VAR_6, "%d is not a valid mouse button number.\n", VAR_9);
        VAR_5->success = 0;
        return;
    }
    const bool VAR_10 = VAR_5->args[3].v.i;
    if (VAR_10 && VAR_9 > (VAR_3 - VAR_1)) {
        FUNC_0(VAR_6, "%d is not a valid mouse button for double-clicks.\n",
               VAR_9);
        VAR_5->success = 0;
        return;
    }
    VAR_9 += VAR_10 ? VAR_2 : VAR_1;
    FUNC_2(VAR_6->input, VAR_7, VAR_8);
    FUNC_1(VAR_6->input, VAR_9);
}
