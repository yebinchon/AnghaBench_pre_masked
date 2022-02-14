
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_6__ {int FirstTrack; int LastTrack; TYPE_1__* TrackData; } ;
struct TYPE_5__ {int* Address; } ;
typedef int DWORD ;
typedef TYPE_2__ CDROM_TOC ;


 int FUNC_0 (TYPE_2__,int) ;

__attribute__((used)) static DWORD FUNC_1(CDROM_TOC* VAR_0)
{
    DWORD VAR_1 = 0;
    int VAR_2;
    WORD VAR_3;
    DWORD VAR_4, VAR_5;
    VAR_3 = VAR_0->TrackData[0].Address[3];
    VAR_4 = FUNC_0(*VAR_0, VAR_0->FirstTrack);

    for (VAR_2 = 0; VAR_2 <= VAR_0->LastTrack - VAR_0->FirstTrack; VAR_2++) {
        VAR_1 += (VAR_0->TrackData[VAR_2].Address[1] << 16) |
            (VAR_0->TrackData[VAR_2].Address[2] << 8) | VAR_0->TrackData[VAR_2].Address[3];
    }
    VAR_5 = FUNC_0(*VAR_0, VAR_0->LastTrack + 1);

    if (VAR_0->LastTrack - VAR_0->FirstTrack + 1 < 3)
        VAR_1 += VAR_3 + (VAR_5 - VAR_4);

    return VAR_1;
}
