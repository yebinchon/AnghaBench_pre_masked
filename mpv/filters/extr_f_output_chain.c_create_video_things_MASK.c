
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_user_filter {char* name; int f; int wrapper; } ;
struct TYPE_4__ {int get_display_fps; struct chain* priv; } ;
struct chain {int num_post_filters; int post_filters; int num_pre_filters; int pre_filters; TYPE_2__ stream_info; TYPE_1__* f; int frame_type; } ;
struct TYPE_3__ {TYPE_2__* stream_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct chain*,int ,int ,struct mp_user_filter*) ;
 int FUNC_1 () ;
 struct mp_user_filter* FUNC_2 (struct chain*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct chain *VAR_2)
{
    VAR_2->frame_type = VAR_0;

    VAR_2->stream_info.priv = VAR_2;
    VAR_2->stream_info.get_display_fps = VAR_1;

    VAR_2->f->stream_info = &VAR_2->stream_info;

    struct mp_user_filter *VAR_3 = FUNC_2(VAR_2);
    VAR_3->name = "userdeint";
    VAR_3->f = FUNC_4(VAR_3->wrapper);
    if (!VAR_3->f)
        FUNC_1();
    FUNC_0(VAR_2, VAR_2->pre_filters, VAR_2->num_pre_filters, VAR_3);

    VAR_3 = FUNC_2(VAR_2);
    VAR_3->name = "autorotate";
    VAR_3->f = FUNC_3(VAR_3->wrapper);
    if (!VAR_3->f)
        FUNC_1();
    FUNC_0(VAR_2, VAR_2->post_filters, VAR_2->num_post_filters, VAR_3);
}
