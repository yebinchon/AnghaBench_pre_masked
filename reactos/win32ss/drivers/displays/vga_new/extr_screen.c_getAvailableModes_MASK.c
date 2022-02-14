
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ModeInformationLength; int NumModes; int NumberOfPlanes; int AttributeFlags; int BitsPerPlane; int VisScreenWidth; scalar_t__ Length; } ;
typedef TYPE_1__ VIDEO_NUM_MODES ;
typedef int ULONG ;
typedef TYPE_1__* PVIDEO_MODE_INFORMATION ;
typedef scalar_t__ PUCHAR ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int ,TYPE_1__*,int,int*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

DWORD FUNC_4(
HANDLE VAR_4,
PVIDEO_MODE_INFORMATION *VAR_5,
DWORD *VAR_6)
{
    ULONG VAR_7;
    VIDEO_NUM_MODES VAR_8;
    PVIDEO_MODE_INFORMATION VAR_9;





    if (FUNC_2(VAR_4,
                           VAR_2,
                           ((void*)0),
                           0,
                           &VAR_8,
                           sizeof(VIDEO_NUM_MODES),
                           &VAR_7))
    {
        FUNC_0((0, "getAvailableModes failed VIDEO_QUERY_NUM_AVAIL_MODES\n"));
        return(0);
    }

    *VAR_6 = VAR_8.ModeInformationLength;





    *VAR_5 = (PVIDEO_MODE_INFORMATION)
                        FUNC_1(0, VAR_8.NumModes *
                                    VAR_8.ModeInformationLength, VAR_0);

    if (*VAR_5 == (PVIDEO_MODE_INFORMATION) ((void*)0))
    {
        FUNC_0((0, "getAvailableModes failed EngAllocMem\n"));

        return 0;
    }





    if (FUNC_2(VAR_4,
                           VAR_1,
                           ((void*)0),
                           0,
                           *VAR_5,
                           VAR_8.NumModes * VAR_8.ModeInformationLength,
                           &VAR_7))
    {

        FUNC_0((0, "getAvailableModes failed VIDEO_QUERY_AVAIL_MODES\n"));

        FUNC_3(*VAR_5);
        *VAR_5 = (PVIDEO_MODE_INFORMATION) ((void*)0);

        return(0);
    }







    VAR_7 = VAR_8.NumModes;
    VAR_9 = *VAR_5;







    while (VAR_7--)
    {
        if ((VAR_9->NumberOfPlanes != 4 ) ||
            !(VAR_9->AttributeFlags & VAR_3) ||
            ((VAR_9->BitsPerPlane != 1) ||
             (VAR_9->VisScreenWidth > 800)))

        {
            VAR_9->Length = 0;
        }

        VAR_9 = (PVIDEO_MODE_INFORMATION)
            (((PUCHAR)VAR_9) + VAR_8.ModeInformationLength);
    }

    return VAR_8.NumModes;

}
