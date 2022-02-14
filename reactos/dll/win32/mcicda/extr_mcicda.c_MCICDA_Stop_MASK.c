
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hThread; scalar_t__ stopEvent; int handle; int * dsObj; int * dsBuf; int wNotifyDeviceID; int hCallback; } ;
typedef TYPE_1__ WINE_MCICDAUDIO ;
typedef int UINT ;
struct TYPE_8__ {int dwCallback; } ;
typedef TYPE_2__* LPMCI_GENERIC_PARMS ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int ,int,TYPE_2__*) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,int ,int *,int ,int *,int ,int*,int *) ;
 int FUNC_10 (scalar_t__,int ,int ) ;

__attribute__((used)) static DWORD FUNC_11(UINT VAR_7, DWORD VAR_8, LPMCI_GENERIC_PARMS VAR_9)
{
    WINE_MCICDAUDIO* VAR_10 = FUNC_4(VAR_7);
    HANDLE VAR_11;
    DWORD VAR_12;

    FUNC_7("(%04X, %08X, %p);\n", VAR_7, VAR_8, VAR_9);

    if (VAR_10 == ((void*)0)) return VAR_3;

    VAR_11 = FUNC_3(&VAR_10->hCallback, ((void*)0));
    if (VAR_11) FUNC_10(VAR_11, VAR_10->wNotifyDeviceID, VAR_5);

    if (VAR_10->hThread != 0) {
        FUNC_6(VAR_10->stopEvent);
        FUNC_8(VAR_10->hThread, VAR_0);

        FUNC_0(VAR_10->hThread);
        VAR_10->hThread = 0;
        FUNC_0(VAR_10->stopEvent);
        VAR_10->stopEvent = 0;

        FUNC_1(VAR_10->dsBuf);
        VAR_10->dsBuf = ((void*)0);
        FUNC_2(VAR_10->dsObj);
        VAR_10->dsObj = ((void*)0);
    }
    else if (!FUNC_9(VAR_10->handle, VAR_1, ((void*)0), 0, ((void*)0), 0, &VAR_12, ((void*)0)))
        return VAR_2;

    if ((VAR_8 & VAR_4) && VAR_9)
 FUNC_5(VAR_9->dwCallback, VAR_10, VAR_6);
    return 0;
}
