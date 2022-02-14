
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo_chain {scalar_t__ dec_src; scalar_t__* pins; TYPE_2__* filter; scalar_t__ filter_src; struct track* track; } ;
struct track {TYPE_1__* dec; struct vo_chain* vo_c; } ;
struct TYPE_4__ {struct vo_chain* f; } ;
struct TYPE_3__ {struct vo_chain* f; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct vo_chain*) ;

__attribute__((used)) static void FUNC_3(struct vo_chain *VAR_0)
{
    struct track *VAR_1 = VAR_0->track;
    if (VAR_1) {
        FUNC_0(VAR_1->vo_c == VAR_0);
        VAR_1->vo_c = ((void*)0);
        if (VAR_0->dec_src)
            FUNC_0(VAR_1->dec->f->pins[0] == VAR_0->dec_src);
        FUNC_2(VAR_1->dec->f);
        VAR_1->dec = ((void*)0);
    }

    if (VAR_0->filter_src)
        FUNC_1(VAR_0->filter_src);

    FUNC_2(VAR_0->filter->f);
    FUNC_2(VAR_0);

}
