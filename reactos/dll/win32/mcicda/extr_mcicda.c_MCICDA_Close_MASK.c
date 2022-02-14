
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nUseCount; int handle; } ;
typedef TYPE_1__ WINE_MCICDAUDIO ;
typedef int UINT ;
struct TYPE_8__ {int dwCallback; } ;
typedef TYPE_2__* LPMCI_GENERIC_PARMS ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,int ,int,TYPE_2__*) ;

__attribute__((used)) static DWORD FUNC_5(UINT VAR_4, DWORD VAR_5, LPMCI_GENERIC_PARMS VAR_6)
{
    WINE_MCICDAUDIO* VAR_7 = FUNC_1(VAR_4);

    FUNC_4("(%04X, %08X, %p);\n", VAR_4, VAR_5, VAR_6);

    if (VAR_7 == ((void*)0)) return VAR_0;

    FUNC_3(VAR_4, VAR_3, ((void*)0));

    if (--VAR_7->nUseCount == 0) {
 FUNC_0(VAR_7->handle);
    }
    if ((VAR_5 & VAR_1) && VAR_6)
 FUNC_2(VAR_6->dwCallback, VAR_7, VAR_2);
    return 0;
}
