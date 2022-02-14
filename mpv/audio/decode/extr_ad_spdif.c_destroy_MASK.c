
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct spdifContext {TYPE_1__* lavf_ctx; scalar_t__ need_close; } ;
struct mp_filter {struct spdifContext* priv; } ;
struct TYPE_6__ {struct TYPE_6__* buffer; } ;
struct TYPE_5__ {TYPE_4__* pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (TYPE_4__**) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct mp_filter *VAR_0)
{
    struct spdifContext *VAR_1 = VAR_0->priv;
    AVFormatContext *VAR_2 = VAR_1->lavf_ctx;

    if (VAR_2) {
        if (VAR_1->need_close)
            FUNC_1(VAR_2);
        if (VAR_2->pb)
            FUNC_0(&VAR_2->pb->buffer);
        FUNC_0(&VAR_2->pb);
        FUNC_2(VAR_2);
        VAR_1->lavf_ctx = ((void*)0);
    }
}
