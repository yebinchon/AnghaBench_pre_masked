
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int seek ;
struct TYPE_15__ {int handle; } ;
typedef TYPE_1__ WINE_MCICDAUDIO ;
typedef int UINT ;
struct TYPE_18__ {int M; int S; int F; } ;
struct TYPE_17__ {int LastTrack; int FirstTrack; } ;
struct TYPE_16__ {int dwCallback; int dwTo; } ;
typedef TYPE_2__* LPMCI_SEEK_PARMS ;
typedef int DWORD ;
typedef TYPE_3__ CDROM_TOC ;
typedef TYPE_4__ CDROM_SEEK_AUDIO_MSF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,int*) ;
 int FUNC_6 (TYPE_1__*,int*) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int ,TYPE_4__*,int,int *,int ,int*,int *) ;

__attribute__((used)) static DWORD FUNC_10(UINT VAR_11, DWORD VAR_12, LPMCI_SEEK_PARMS VAR_13)
{
    DWORD VAR_14;
    WINE_MCICDAUDIO* VAR_15 = FUNC_3(VAR_11);
    CDROM_SEEK_AUDIO_MSF VAR_16;
    DWORD VAR_17, VAR_18, VAR_19;
    CDROM_TOC VAR_20;

    FUNC_8("(%04X, %08X, %p);\n", VAR_11, VAR_12, VAR_13);

    if (VAR_15 == ((void*)0)) return VAR_5;
    if (VAR_13 == ((void*)0)) return VAR_7;

    VAR_18 = VAR_12 & (129|130|128);
    if (!VAR_18) return VAR_6;
    if (VAR_18&(VAR_18-1)) return VAR_3;




    FUNC_7(VAR_11, VAR_10, 0);

    if (!FUNC_5(VAR_15, &VAR_20, &VAR_17))
        return FUNC_2(VAR_15);

    switch (VAR_18) {
    case 129:
 FUNC_8("Seeking to start\n");
 VAR_14 = FUNC_0(VAR_20,VAR_20.FirstTrack);
 if ( (VAR_19=FUNC_6(VAR_15, &VAR_14)) )
   return VAR_19;
 break;
    case 130:
 FUNC_8("Seeking to end\n");


 VAR_14 = FUNC_0(VAR_20, VAR_20.LastTrack + 1) - 1;
 if ( (VAR_19=FUNC_6(VAR_15, &VAR_14)) )
   return VAR_19;
 break;
    case 128:
 FUNC_8("Seeking to %u\n", VAR_13->dwTo);
        VAR_14 = FUNC_1(VAR_15, VAR_13->dwTo);
 if ( (VAR_19=FUNC_6(VAR_15, &VAR_14)) )
   return VAR_19;
 break;
    default:
 return VAR_3;
    }

    {
        VAR_16.M = VAR_14 / VAR_0;
        VAR_16.S = (VAR_14 / VAR_1) % 60;
        VAR_16.F = VAR_14 % VAR_1;
        if (!FUNC_9(VAR_15->handle, VAR_2, &VAR_16, sizeof(VAR_16),
                             ((void*)0), 0, &VAR_17, ((void*)0)))
            return VAR_4;
    }

    if (VAR_12 & VAR_8)
 FUNC_4(VAR_13->dwCallback, VAR_15, VAR_9);
    return 0;
}
