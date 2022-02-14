
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dwStatus; int hWave; int fInput; int hCallback; } ;
typedef TYPE_1__ WINE_MCIWAVE ;
struct TYPE_8__ {int dwCallback; } ;
typedef int MCIDEVICEID ;
typedef TYPE_2__* LPMCI_GENERIC_PARMS ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,scalar_t__,TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static DWORD FUNC_8(MCIDEVICEID VAR_7, DWORD VAR_8, LPMCI_GENERIC_PARMS VAR_9)
{
    DWORD VAR_10 = 0;
    WINE_MCIWAVE* VAR_11 = FUNC_3(VAR_7);

    FUNC_2("(%u, %08X, %p);\n", VAR_7, VAR_8, VAR_9);

    if (VAR_11 == ((void*)0)) return VAR_0;

    if (VAR_11->dwStatus != VAR_2) {
 HANDLE VAR_12 = FUNC_0(&VAR_11->hCallback, ((void*)0));
 if (VAR_12) FUNC_5(VAR_12, VAR_7, VAR_4);
    }


    switch (VAR_11->dwStatus) {
    case 130:
    case 129:
    case 128:
 {
     int VAR_13 = VAR_11->dwStatus;
     VAR_11->dwStatus = VAR_1;
     if (VAR_13 == 130)
  VAR_10 = (VAR_11->fInput) ? FUNC_6(VAR_11->hWave) : FUNC_7(VAR_11->hWave);
 }
 while (VAR_11->dwStatus != VAR_2)
     FUNC_1(10);
 break;
    }


    VAR_11->dwStatus = VAR_2;

    if ((VAR_8 & VAR_3) && VAR_9 && VAR_6==VAR_10)
 FUNC_4(VAR_9->dwCallback, VAR_11, VAR_5);

    return VAR_10;
}
