
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct track {int * sink; TYPE_1__* dec; scalar_t__ ao_c; int stream; } ;
struct MPContext {int filter_root; } ;
struct TYPE_3__ {int try_spdif; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct MPContext*,struct track*) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct MPContext *VAR_0, struct track *VAR_1)
{
    FUNC_0(!VAR_1->dec);
    if (!VAR_1->stream)
        goto init_error;

    VAR_1->dec = FUNC_2(VAR_0->filter_root, VAR_1->stream);
    if (!VAR_1->dec)
        goto init_error;

    if (VAR_1->ao_c)
        VAR_1->dec->try_spdif = 1;

    if (!FUNC_3(VAR_1->dec))
        goto init_error;

    return 1;

init_error:
    if (VAR_1->sink)
        FUNC_4(VAR_1->sink);
    VAR_1->sink = ((void*)0);
    FUNC_1(VAR_0, VAR_1);
    return 0;
}
