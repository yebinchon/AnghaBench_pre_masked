
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hCallback; int wDevID; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
typedef int UINT ;
typedef int MCIDEVICEID ;
typedef scalar_t__ HANDLE ;
typedef int DWORD_PTR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4(DWORD_PTR VAR_1, WINE_MCIMIDI* VAR_2, UINT VAR_3)
{



    MCIDEVICEID VAR_4 = VAR_2->wDevID;
    HANDLE VAR_5 = FUNC_1(&VAR_2->hCallback, ((void*)0));
    if (VAR_5) FUNC_3(VAR_5, VAR_4, VAR_0);
    FUNC_3(FUNC_0(FUNC_2(VAR_1)), VAR_4, VAR_3);
}
