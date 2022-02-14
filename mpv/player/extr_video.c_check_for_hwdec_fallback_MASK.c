
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo_chain {TYPE_2__* filter; TYPE_1__* track; } ;
struct MPContext {struct vo_chain* vo_chain; } ;
struct TYPE_4__ {int failed_output_conversion; } ;
struct TYPE_3__ {int dec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_2(struct MPContext *VAR_2)
{
    struct vo_chain *VAR_3 = VAR_2->vo_chain;

    if (!VAR_3->filter->failed_output_conversion || !VAR_3->track)
        return 0;

    if (FUNC_0(VAR_3->track->dec,
                            VAR_1, ((void*)0)) != VAR_0)
        return 0;

    FUNC_1(VAR_3->filter);
    return 1;
}
