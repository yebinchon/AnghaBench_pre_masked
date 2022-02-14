
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nChannels; int nSamplesPerSec; int nAvgBytesPerSec; int nBlockAlign; int wBitsPerSample; scalar_t__ cbSize; int wFormatTag; } ;
struct TYPE_7__ {int wDevID; TYPE_1__ wfxRef; } ;
typedef TYPE_2__ WINE_MCIWAVE ;
struct TYPE_8__ {int wDeviceID; int wType; int wCustomCommandTable; } ;
typedef int LRESULT ;
typedef TYPE_3__* LPMCI_OPEN_DRIVER_PARMSW ;
typedef int LPCWSTR ;
typedef int DWORD_PTR ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static LRESULT FUNC_3(LPCWSTR VAR_4, LPMCI_OPEN_DRIVER_PARMSW VAR_5)
{
    WINE_MCIWAVE* VAR_6;

    if (VAR_5 == ((void*)0)) return 0xFFFFFFFF;

    VAR_6 = FUNC_1(FUNC_0(), VAR_0, sizeof(WINE_MCIWAVE));

    if (!VAR_6)
 return 0;

    VAR_6->wDevID = VAR_5->wDeviceID;
    FUNC_2(VAR_6->wDevID, (DWORD_PTR)VAR_6);
    VAR_5->wCustomCommandTable = VAR_2;
    VAR_5->wType = VAR_1;

    VAR_6->wfxRef.wFormatTag = VAR_3;
    VAR_6->wfxRef.nChannels = 1;
    VAR_6->wfxRef.nSamplesPerSec = 11025;
    VAR_6->wfxRef.nAvgBytesPerSec = 11025;
    VAR_6->wfxRef.nBlockAlign = 1;
    VAR_6->wfxRef.wBitsPerSample = 8;
    VAR_6->wfxRef.cbSize = 0;

    return VAR_5->wDeviceID;
}
