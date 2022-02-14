
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_5__ {size_t nTracks; TYPE_2__* tracks; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
struct TYPE_6__ {scalar_t__ wStatus; int dwEventPulse; } ;
typedef TYPE_2__ MCI_MIDITRACK ;
typedef int* LPDWORD ;



__attribute__((used)) static MCI_MIDITRACK* FUNC_0(WINE_MCIMIDI* VAR_0, LPDWORD VAR_1)
{
    WORD VAR_2, VAR_3;
    MCI_MIDITRACK* VAR_4;

    *VAR_1 = 0xFFFFFFFFul;
    VAR_2 = 0xFFFFu;
    for (VAR_3 = 0; VAR_3 < VAR_0->nTracks; VAR_3++) {
 VAR_4 = &VAR_0->tracks[VAR_3];

 if (VAR_4->wStatus == 0)
     continue;
 if (VAR_4->dwEventPulse < *VAR_1) {
     *VAR_1 = VAR_4->dwEventPulse;
     VAR_2 = VAR_3;
 }
    }
    return (VAR_2 == 0xFFFFu) ? 0
 : &VAR_0->tracks[VAR_2];
}
