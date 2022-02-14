
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd_ass_priv {scalar_t__ converter; scalar_t__ num_seen_packets; int ass_track; scalar_t__ duration_unknown; } ;
struct sd {int preload_ok; TYPE_1__* opts; struct sd_ass_priv* priv; } ;
struct TYPE_2__ {scalar_t__ sub_clear_on_seek; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_0)
{
    struct sd_ass_priv *VAR_1 = VAR_0->priv;
    if (VAR_0->opts->sub_clear_on_seek || VAR_1->duration_unknown) {
        FUNC_0(VAR_1->ass_track);
        VAR_1->num_seen_packets = 0;
        VAR_0->preload_ok = 0;
    }
    if (VAR_1->converter)
        FUNC_1(VAR_1->converter);
}
