
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wszCLSIDInstance ;
typedef char WCHAR ;
typedef int REFIID ;
typedef int REFCLSID ;
typedef int LPVOID ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int IPropertyBag ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef int CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,char const*,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,char const*,int *,int*,int ,int*) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;

HRESULT FUNC_13(REFCLSID VAR_6, REFIID VAR_7,
    LPVOID *VAR_8)
{
    WCHAR VAR_9[] = { 'C','L','S','I','D','\\','{','0','0','0','0','0','0','0','0','-',
        '0','0','0','0','-','0','0','0','0','-','0','0','0','0','-','0','0','0','0','0','0','0','0',
        '0','0','0','0','}','\\','I','n','s','t','a','n','c','e', 0 };
    static const WCHAR VAR_10[] = { 'C','L','S','I','D',0 };
    static const WCHAR VAR_11[] =
        { 'I','n','i','t','P','r','o','p','e','r','t','y','B','a','g',0 };
    WCHAR VAR_12[VAR_0];
    CLSID VAR_13;
    HKEY VAR_14, VAR_15;
    DWORD VAR_16, VAR_17 = sizeof(VAR_12);
    IPropertyBag *VAR_18;
    HRESULT VAR_19;
    LONG VAR_20;

    FUNC_10("(rclsid=%s, riid=%s, ppvClassObject=%p)\n", FUNC_11(VAR_6), FUNC_11(VAR_7),
          VAR_8);


    if (!FUNC_9(VAR_6, VAR_9 + 6, VAR_0))
        return VAR_1;
    VAR_9[5+VAR_0] = '\\';
    if (VAR_2 != FUNC_6(VAR_3, VAR_9, 0, VAR_5, &VAR_14))

        return VAR_1;

    if (VAR_2 != FUNC_7(VAR_14, VAR_10, ((void*)0), &VAR_16, (LPBYTE)VAR_12, &VAR_17) ||
        FUNC_1(FUNC_0(VAR_12, &VAR_13)))
    {

        FUNC_2("Failed to infer instance CLSID! %s\n", FUNC_12(VAR_12));
        FUNC_5(VAR_14);
        return VAR_1;
    }


    VAR_20 = FUNC_6(VAR_14, VAR_11, 0, VAR_5, &VAR_15);
    FUNC_5(VAR_14);
    if (VAR_20 != VAR_2) {


        FUNC_10("No InitPropertyBag key found!\n");
        return VAR_1;
    }



    VAR_19 = FUNC_8(VAR_15, &VAR_4,
                                         (LPVOID*)&VAR_18);
    if (FUNC_1(VAR_19)) {
        FUNC_5(VAR_15);
        return VAR_19;
    }



    VAR_19 = FUNC_4(&VAR_13, VAR_18, VAR_7, VAR_8);
    FUNC_3(VAR_18);

    return VAR_19;
}
