
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd_ass_priv {int * ass_renderer; int ass_library; } ;
struct sd {int log; int global; TYPE_1__* opts; struct sd_ass_priv* priv; } ;
struct TYPE_2__ {int sub_style; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_0, bool VAR_1)
{
    struct sd_ass_priv *VAR_2 = VAR_0->priv;
    if (VAR_1 == !!VAR_2->ass_renderer)
        return;
    if (VAR_2->ass_renderer) {
        FUNC_0(VAR_2->ass_renderer);
        VAR_2->ass_renderer = ((void*)0);
    } else {
        VAR_2->ass_renderer = FUNC_1(VAR_2->ass_library);

        FUNC_2(VAR_2->ass_renderer, VAR_0->opts->sub_style,
                               VAR_0->global, VAR_0->log);
    }
}
