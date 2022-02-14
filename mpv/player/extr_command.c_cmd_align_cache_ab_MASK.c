
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_cmd_ctx {int on_osd; struct MPContext* mpctx; } ;
struct MPContext {TYPE_1__* opts; int demuxer; } ;
struct TYPE_2__ {int * ab_loop; } ;


 int VAR_0 ;
 double FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,int ,double*,struct MPContext*) ;
 int FUNC_2 (struct MPContext*,char*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
    struct mp_cmd_ctx *VAR_2 = VAR_1;
    struct MPContext *VAR_3 = VAR_2->mpctx;

    if (!VAR_3->demuxer)
        return;

    double VAR_4 = FUNC_0(VAR_3->demuxer,
                                             VAR_3->opts->ab_loop[0], 0);
    double VAR_5 = FUNC_0(VAR_3->demuxer,
                                             VAR_3->opts->ab_loop[1], 1);

    FUNC_1("ab-loop-a", VAR_0, &VAR_4, VAR_3);
    FUNC_1("ab-loop-b", VAR_0, &VAR_5, VAR_3);


    FUNC_2(VAR_3, "ab-loop-b", VAR_2->on_osd);
}
