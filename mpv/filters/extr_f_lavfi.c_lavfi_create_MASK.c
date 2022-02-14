
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_lavfi {struct mp_filter* f; } ;
struct mp_filter {struct lavfi* priv; } ;
struct lavfi_user_opts {int fix_pts; int graph; int avopts; int type; int filter_opts; int filter_name; scalar_t__ is_bridge; } ;
struct lavfi {int emulate_audio_pts; } ;


 struct mp_lavfi* FUNC_0 (struct mp_filter*,int ,int,int ,int ,int ) ;
 struct mp_lavfi* FUNC_1 (struct mp_filter*,int ,int,int ,int ) ;
 int FUNC_2 (struct lavfi_user_opts*) ;

__attribute__((used)) static struct mp_filter *FUNC_3(struct mp_filter *VAR_0, void *VAR_1)
{
    struct lavfi_user_opts *VAR_2 = VAR_1;
    struct mp_lavfi *VAR_3;
    if (VAR_2->is_bridge) {
        VAR_3 = FUNC_0(VAR_0, VAR_2->type, 1, VAR_2->avopts,
                                   VAR_2->filter_name, VAR_2->filter_opts);
    } else {
        VAR_3 = FUNC_1(VAR_0, VAR_2->type, 1,
                                  VAR_2->avopts, VAR_2->graph);
    }
    if (VAR_3) {
        struct lavfi *VAR_4 = VAR_3->f->priv;
        VAR_4->emulate_audio_pts = VAR_2->fix_pts;
    }
    FUNC_2(VAR_2);
    return VAR_3 ? VAR_3->f : ((void*)0);
}
