
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lf ;
typedef int UNICODERANGE ;
typedef int UINT ;
struct TYPE_4__ {int lfFaceName; } ;
typedef TYPE_1__ LOGFONTA ;
typedef int IMLangFontLink2 ;
typedef scalar_t__ HRESULT ;
typedef int HFONT ;
typedef int * HDC ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (int,char*,...) ;

__attribute__((used)) static void FUNC_12(IMLangFontLink2 *VAR_3)
{
    HRESULT VAR_4;
    UINT VAR_5;
    HFONT VAR_6, VAR_7;
    LOGFONTA VAR_8;
    HDC VAR_9;
    UNICODERANGE *VAR_10;

    VAR_9 = FUNC_0(0);
    FUNC_10(&VAR_8, 0, sizeof(VAR_8));
    FUNC_9(VAR_8.lfFaceName, "Arial");
    VAR_6 = FUNC_1(&VAR_8);
    VAR_7 = FUNC_8(VAR_9, VAR_6);

    VAR_5 = 0;
    VAR_4 = FUNC_7(VAR_3, ((void*)0), &VAR_5, ((void*)0));
    FUNC_11(VAR_4 == VAR_0, "expected E_FAIL, got 0x%08x\n", VAR_4);

    VAR_4 = FUNC_7(VAR_3, VAR_9, ((void*)0), ((void*)0));
    FUNC_11(VAR_4 == VAR_1, "expected E_FAIL, got 0x%08x\n", VAR_4);

    VAR_5 = 0;
    VAR_4 = FUNC_7(VAR_3, VAR_9, &VAR_5, ((void*)0));
    FUNC_11(VAR_4 == VAR_2, "expected S_OK, got 0x%08x\n", VAR_4);
    FUNC_11(VAR_5, "expected count > 0\n");

    VAR_10 = FUNC_5(FUNC_4(), 0, sizeof(*VAR_10) * VAR_5);

    VAR_4 = FUNC_7(VAR_3, VAR_9, &VAR_5, VAR_10);
    FUNC_11(VAR_4 == VAR_2, "expected S_OK, got 0x%08x\n", VAR_4);

    VAR_5--;
    VAR_4 = FUNC_7(VAR_3, VAR_9, &VAR_5, VAR_10);
    FUNC_11(VAR_4 == VAR_2, "expected S_OK, got 0x%08x\n", VAR_4);

    FUNC_6(FUNC_4(), 0, VAR_10);

    FUNC_8(VAR_9, VAR_7);
    FUNC_3(VAR_6);
    FUNC_2(VAR_9);
}
