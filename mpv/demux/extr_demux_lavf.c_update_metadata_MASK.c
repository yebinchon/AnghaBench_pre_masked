
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* avfc; } ;
typedef TYPE_2__ lavf_priv_t ;
struct TYPE_8__ {int metadata; TYPE_2__* priv; } ;
typedef TYPE_3__ demuxer_t ;
struct TYPE_6__ {int event_flags; int metadata; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(demuxer_t *VAR_1)
{
    lavf_priv_t *VAR_2 = VAR_1->priv;
    if (VAR_2->avfc->event_flags & VAR_0) {
        FUNC_1(VAR_1->metadata, VAR_2->avfc->metadata);
        VAR_2->avfc->event_flags = 0;
        FUNC_0(VAR_1);
    }
}
