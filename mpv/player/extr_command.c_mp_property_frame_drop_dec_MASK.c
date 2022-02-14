
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_decoder_wrapper {int dropped_frames; } ;
struct m_property {int dummy; } ;
struct TYPE_6__ {TYPE_2__* vo_chain; } ;
struct TYPE_5__ {TYPE_1__* track; } ;
struct TYPE_4__ {struct mp_decoder_wrapper* dec; } ;
typedef TYPE_3__ MPContext ;


 int VAR_0 ;
 int FUNC_0 (int,void*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct m_property *VAR_2,
                                      int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    struct mp_decoder_wrapper *VAR_6 = VAR_5->vo_chain && VAR_5->vo_chain->track
        ? VAR_5->vo_chain->track->dec : ((void*)0);
    if (!VAR_6)
        return VAR_0;

    return FUNC_0(VAR_3, VAR_4, VAR_6->dropped_frames);
}
