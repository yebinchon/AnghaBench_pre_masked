
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track {struct mp_recorder_sink* remux_sink; TYPE_1__* dec; scalar_t__ d_sub; } ;
struct mp_recorder_sink {int dummy; } ;
struct TYPE_2__ {struct mp_recorder_sink* recorder_sink; } ;


 int FUNC_0 (scalar_t__,struct mp_recorder_sink*) ;

__attribute__((used)) static void FUNC_1(struct track *VAR_0,
                                    struct mp_recorder_sink *VAR_1)
{
    if (VAR_0->d_sub)
        FUNC_0(VAR_0->d_sub, VAR_1);
    if (VAR_0->dec)
        VAR_0->dec->recorder_sink = VAR_1;
    VAR_0->remux_sink = VAR_1;
}
