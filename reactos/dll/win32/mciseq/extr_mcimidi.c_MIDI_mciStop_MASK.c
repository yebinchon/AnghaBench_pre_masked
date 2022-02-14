
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dwStatus; scalar_t__ hThread; scalar_t__ hMidi; int wDevID; int hCallback; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
struct TYPE_8__ {int dwCallback; } ;
typedef TYPE_2__* LPMCI_GENERIC_PARMS ;
typedef int HMIDIOUT ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,int ,scalar_t__,TYPE_2__*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static DWORD FUNC_6(WINE_MCIMIDI* VAR_8, DWORD VAR_9, LPMCI_GENERIC_PARMS VAR_10)
{
    DWORD VAR_11 = 0;

    FUNC_2("(%d, %08X, %p);\n", VAR_8->wDevID, VAR_9, VAR_10);

    if (VAR_8->dwStatus != VAR_3) {
 HANDLE VAR_12 = FUNC_0(&VAR_8->hCallback, ((void*)0));
 if (VAR_12) FUNC_4(VAR_12, VAR_8->wDevID, VAR_5);
    }

    if (VAR_8->dwStatus != VAR_3) {
 int VAR_13 = VAR_8->dwStatus;

 VAR_8->dwStatus = VAR_1;
 if (VAR_13 == VAR_2)
     VAR_11 = FUNC_5((HMIDIOUT)VAR_8->hMidi);

 if (VAR_8->hThread)
     FUNC_3(VAR_8->hThread, VAR_0);
    }


    VAR_8->dwStatus = VAR_3;

    if ((VAR_9 & VAR_4) && VAR_10 && VAR_7==VAR_11)
 FUNC_1(VAR_10->dwCallback, VAR_8, VAR_6);
    return VAR_11;
}
