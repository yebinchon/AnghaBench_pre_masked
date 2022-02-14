
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
typedef int VARIANT ;
typedef int UINT ;
struct TYPE_3__ {int * rgvarg; scalar_t__ cArgs; int * rgdispidNamedArgs; scalar_t__ cNamedArgs; } ;
typedef int * LPVOID ;
typedef int LCID ;
typedef int ITypeInfo ;
typedef int IFontDisp ;
typedef int HRESULT ;
typedef TYPE_1__ DISPPARAMS ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int **) ;
 int FUNC_1 (int *,int ,int *,int ,int ,TYPE_1__*,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int *,int,int*) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int *,int *,int **) ;

__attribute__((used)) static void FUNC_13(void)
{
        LPVOID VAR_9 = ((void*)0);
        HRESULT VAR_10;
        IFontDisp* VAR_11 = ((void*)0);
 ITypeInfo* VAR_12;
 WCHAR VAR_13[] = {'N','a','m','e',0};
 BSTR VAR_14[3];
 UINT VAR_15;
        LCID VAR_16 = FUNC_6(FUNC_5(VAR_4,VAR_7),
                VAR_6);
        DISPPARAMS VAR_17;
        VARIANT VAR_18;

        FUNC_12(((void*)0), &VAR_2, &VAR_9);
        VAR_11 = VAR_9;

 VAR_10 = FUNC_0(VAR_11, 0, VAR_16, &VAR_12);
 FUNC_11(VAR_10 == VAR_8, "GTI returned 0x%08x instead of S_OK.\n", VAR_10);
 FUNC_11(VAR_12 != ((void*)0), "GTI returned NULL.\n");

 VAR_10 = FUNC_3(VAR_12, VAR_1, VAR_14, 3, &VAR_15);
 FUNC_11(VAR_10 == VAR_8, "GetNames returned 0x%08x instead of S_OK.\n", VAR_10);
 FUNC_11(VAR_15 == 1, "GetNames returned %d names instead of 1.\n", VAR_15);
 FUNC_11(!FUNC_10(VAR_14[0],VAR_13), "DISPID_FONT_NAME doesn't get 'Names'.\n");
 FUNC_7(VAR_14[0]);

 FUNC_4(VAR_12);

        VAR_17.cNamedArgs = 0;
        VAR_17.rgdispidNamedArgs = ((void*)0);
        VAR_17.cArgs = 0;
        VAR_17.rgvarg = ((void*)0);
        FUNC_9(&VAR_18);
        VAR_10 = FUNC_1(VAR_11, VAR_1, &VAR_3,
            VAR_5, VAR_0, &VAR_17, &VAR_18,
            ((void*)0), ((void*)0));
        FUNC_11(VAR_10 == VAR_8, "IFontDisp_Invoke return 0x%08x instead of S_OK.\n", VAR_10);
        FUNC_8(&VAR_18);

 FUNC_2(VAR_11);
}
