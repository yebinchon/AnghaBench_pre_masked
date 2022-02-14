
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* priv; } ;
typedef TYPE_3__ stream_t ;
typedef double int64_t ;
struct TYPE_10__ {TYPE_2__* cd; int end_sector; int start_sector; } ;
typedef TYPE_4__ cdda_priv ;
struct TYPE_8__ {TYPE_1__* disc_toc; } ;
struct TYPE_7__ {double dwStartSector; } ;


 double VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_1(stream_t *VAR_4, int VAR_5, void *VAR_6)
{
    cdda_priv *VAR_7 = VAR_4->priv;
    switch (VAR_5) {
    case 128:
    {
        int VAR_8 = FUNC_0(VAR_7, VAR_7->start_sector);
        int VAR_9 = FUNC_0(VAR_7, VAR_7->end_sector);
        if (VAR_8 == -1 || VAR_9 == -1)
            return VAR_1;
        *(unsigned int *)VAR_6 = VAR_9 + 1 - VAR_8;
        return VAR_2;
    }
    case 129:
    {
        int VAR_10 = *(double *)VAR_6;
        int VAR_11 = FUNC_0(VAR_7, VAR_7->start_sector);
        int VAR_12 = FUNC_0(VAR_7, VAR_7->end_sector);
        VAR_10 += VAR_11;
        if (VAR_10 > VAR_12)
            return VAR_1;
        int64_t VAR_13 = VAR_7->cd->disc_toc[VAR_10].dwStartSector;
        int64_t VAR_14 = VAR_13 * VAR_0;

        *(double *)VAR_6 = VAR_14 / (44100.0 * 2 * 2);
        return VAR_2;
    }
    }
    return VAR_3;
}
