
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_6__ {size_t nTracks; int wFormat; TYPE_1__* tracks; } ;
typedef TYPE_2__ WINE_MCIMIDI ;
struct TYPE_5__ {scalar_t__ dwLength; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static DWORD FUNC_1(WINE_MCIMIDI* VAR_0)
{
    WORD VAR_1;
    DWORD VAR_2 = 0;

    for (VAR_1 = 0; VAR_1 < VAR_0->nTracks; VAR_1++) {
 if (VAR_0->wFormat == 2) {
     VAR_2 += VAR_0->tracks[VAR_1].dwLength;
 } else if (VAR_0->tracks[VAR_1].dwLength > VAR_2) {
     VAR_2 = VAR_0->tracks[VAR_1].dwLength;
 }
    }

    return FUNC_0(VAR_0, VAR_2);
}
