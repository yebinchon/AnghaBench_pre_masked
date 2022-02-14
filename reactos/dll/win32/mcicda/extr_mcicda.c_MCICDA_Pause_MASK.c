
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hThread; int handle; int dsBuf; int stopEvent; int wNotifyDeviceID; int hCallback; } ;
typedef TYPE_1__ WINE_MCICDAUDIO ;
typedef int UINT ;
struct TYPE_8__ {int dwCallback; } ;
typedef TYPE_2__* LPMCI_GENERIC_PARMS ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,int ,int,TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int *,int ,int *,int ,int*,int *) ;
 int FUNC_8 (scalar_t__,int ,int ) ;

__attribute__((used)) static DWORD FUNC_9(UINT VAR_7, DWORD VAR_8, LPMCI_GENERIC_PARMS VAR_9)
{
    WINE_MCICDAUDIO* VAR_10 = FUNC_3(VAR_7);
    HANDLE VAR_11;
    DWORD VAR_12;

    FUNC_5("(%04X, %08X, %p);\n", VAR_7, VAR_8, VAR_9);

    if (VAR_10 == ((void*)0)) return VAR_2;

    VAR_11 = FUNC_2(&VAR_10->hCallback, ((void*)0));
    if (VAR_11) FUNC_8(VAR_11, VAR_10->wNotifyDeviceID, VAR_4);

    if (VAR_10->hThread != 0) {

        if(FUNC_6(VAR_10->stopEvent, 0) != VAR_6 &&
           FUNC_0(FUNC_1(VAR_10->dsBuf)))
            return VAR_1;
    }
    else if (!FUNC_7(VAR_10->handle, VAR_0, ((void*)0), 0, ((void*)0), 0, &VAR_12, ((void*)0)))
        return VAR_1;

    if ((VAR_8 & VAR_3) && VAR_9)
 FUNC_4(VAR_9->dwCallback, VAR_10, VAR_5);
    return 0;
}
