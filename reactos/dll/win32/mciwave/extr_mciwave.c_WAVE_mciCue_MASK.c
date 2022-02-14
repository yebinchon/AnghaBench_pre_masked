
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dwStatus; } ;
typedef TYPE_1__ WINE_MCIWAVE ;
struct TYPE_8__ {int dwCallback; } ;
typedef int MCIDEVICEID ;
typedef TYPE_2__* LPMCI_GENERIC_PARMS ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int,TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static DWORD FUNC_3(MCIDEVICEID VAR_6, DWORD VAR_7, LPMCI_GENERIC_PARMS VAR_8)
{
    WINE_MCIWAVE* VAR_9 = FUNC_1(VAR_6);

    FUNC_0("(%u, %08X, %p);\n", VAR_6, VAR_7, VAR_8);
    if (VAR_9 == ((void*)0)) return VAR_0;
    if (VAR_9->dwStatus != VAR_2) return VAR_1;

    if ((VAR_7 & VAR_3) && VAR_8)
 FUNC_2(VAR_8->dwCallback,VAR_9,VAR_4);

    return VAR_5;
}
