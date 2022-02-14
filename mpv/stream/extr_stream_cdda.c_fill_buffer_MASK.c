
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ priv; } ;
typedef TYPE_3__ stream_t ;
typedef int int16_t ;
struct TYPE_10__ {int sector; int start_sector; int end_sector; TYPE_2__* cd; int cdp; } ;
typedef TYPE_4__ cdda_priv ;
struct TYPE_8__ {int tracks; TYPE_1__* disc_toc; } ;
struct TYPE_7__ {int dwStartSector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int *,int) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_3(stream_t *VAR_2, void *VAR_3, int VAR_4)
{
    cdda_priv *VAR_5 = (cdda_priv *)VAR_2->priv;
    int16_t *VAR_6;
    int VAR_7;

    if (VAR_4 < VAR_0)
        return -1;

    if ((VAR_5->sector < VAR_5->start_sector) || (VAR_5->sector > VAR_5->end_sector)) {
        return 0;
    }

    VAR_6 = FUNC_1(VAR_5->cdp, VAR_1);
    if (!VAR_6)
        return 0;

    VAR_5->sector++;
    FUNC_0(VAR_3, VAR_6, VAR_0);

    for (VAR_7 = 0; VAR_7 < VAR_5->cd->tracks; VAR_7++) {
        if (VAR_5->cd->disc_toc[VAR_7].dwStartSector == VAR_5->sector - 1) {
            FUNC_2(VAR_2, VAR_7 + 1);
            break;
        }
    }

    return VAR_0;
}
