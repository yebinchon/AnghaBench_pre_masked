
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ num_streams; TYPE_1__* avfc; } ;
typedef TYPE_2__ lavf_priv_t ;
struct TYPE_8__ {TYPE_2__* priv; } ;
typedef TYPE_3__ demuxer_t ;
struct TYPE_6__ {scalar_t__ nb_streams; } ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(demuxer_t *VAR_0)
{
    lavf_priv_t *VAR_1 = VAR_0->priv;
    while (VAR_1->num_streams < VAR_1->avfc->nb_streams)
        FUNC_0(VAR_0, VAR_1->num_streams);
}
