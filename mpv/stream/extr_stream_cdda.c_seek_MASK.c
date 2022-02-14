
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
typedef int int64_t ;
struct TYPE_10__ {int start_sector; int end_sector; int sector; int cdp; TYPE_2__* cd; } ;
typedef TYPE_4__ cdda_priv ;
struct TYPE_8__ {int tracks; TYPE_1__* disc_toc; } ;
struct TYPE_7__ {int dwStartSector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2(stream_t *VAR_2, int64_t VAR_3)
{
    cdda_priv *VAR_4 = (cdda_priv *)VAR_2->priv;
    int VAR_5;
    int VAR_6 = 0, VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9;

    VAR_3 += VAR_4->start_sector * VAR_0;

    VAR_5 = VAR_3 / VAR_0;
    if (VAR_3 < 0 || VAR_5 > VAR_4->end_sector) {
        VAR_4->sector = VAR_4->end_sector + 1;
        return 0;
    }

    for (VAR_9 = 0; VAR_9 < VAR_4->cd->tracks; VAR_9++) {
        if (VAR_4->sector >= VAR_4->cd->disc_toc[VAR_9].dwStartSector
            && VAR_4->sector < VAR_4->cd->disc_toc[VAR_9 + 1].dwStartSector)
            VAR_6 = VAR_9;
        if (VAR_5 >= VAR_4->cd->disc_toc[VAR_9].dwStartSector
            && VAR_5 < VAR_4->cd->disc_toc[VAR_9 + 1].dwStartSector)
        {
            VAR_7 = VAR_9;
            VAR_8 = VAR_5 == VAR_4->cd->disc_toc[VAR_9].dwStartSector;
        }
    }
    if (VAR_6 != VAR_7 && !VAR_8)
        FUNC_1(VAR_2, VAR_7 + 1);

    VAR_4->sector = VAR_5;

    FUNC_0(VAR_4->cdp, VAR_5, VAR_1);
    return 1;
}
