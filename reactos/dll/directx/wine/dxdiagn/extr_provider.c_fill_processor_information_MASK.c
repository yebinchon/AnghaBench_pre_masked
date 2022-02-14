
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int VARIANT ;
typedef int ULONG ;
typedef int IWbemServices ;
typedef int IWbemLocator ;
typedef int IWbemClassObject ;
typedef int IEnumWbemClassObject ;
typedef int IDxDiagContainerImpl_Container ;
typedef int HRESULT ;
typedef scalar_t__ BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,int **,int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,char const*,int ,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,int *,int *,int *,int ,int *,int *,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__,int ,int *,int **) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (scalar_t__) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_4 ;
 int FUNC_15 (int *,char const*,char*) ;
 int FUNC_16 (char*,char const*,char*,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_17(IDxDiagContainerImpl_Container *VAR_5)
{
    static const WCHAR VAR_6[] = {'s','z','P','r','o','c','e','s','s','o','r','E','n','g','l','i','s','h',0};

    static const WCHAR VAR_7[] = {'\\','\\','.','\\','r','o','o','t','\\','c','i','m','v','2',0};
    static const WCHAR VAR_8[] = {'W','i','n','3','2','_','P','r','o','c','e','s','s','o','r',0};
    static const WCHAR VAR_9[] = {'N','a','m','e',0};
    static const WCHAR VAR_10[] = {'M','a','x','C','l','o','c','k','S','p','e','e','d',0};
    static const WCHAR VAR_11[] = {'N','u','m','b','e','r','O','f','L','o','g','i','c','a','l','P','r','o','c','e','s','s','o','r','s',0};

    static const WCHAR VAR_12[] = {'%','s','(','%','d',' ','C','P','U','s',')',',',' ','~','%','d','M','H','z',0};

    IWbemLocator *VAR_13;
    IWbemServices *VAR_14;
    IWbemClassObject *VAR_15;
    IEnumWbemClassObject *VAR_16;
    VARIANT VAR_17, VAR_18, VAR_19;
    WCHAR VAR_20[200];
    BSTR VAR_21;
    ULONG VAR_22;
    HRESULT VAR_23;

    VAR_23 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_3, (void**)&VAR_13);
    if(FUNC_1(VAR_23))
        return VAR_23;

    VAR_21 = FUNC_10(VAR_7);
    if(!VAR_21) {
        FUNC_7(VAR_13);
        return VAR_2;
    }
    VAR_23 = FUNC_6(VAR_13, VAR_21, ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0), &VAR_14);
    FUNC_7(VAR_13);
    FUNC_11(VAR_21);
    if(FUNC_1(VAR_23))
        return VAR_23;

    VAR_21 = FUNC_10(VAR_8);
    if(!VAR_21) {
        FUNC_9(VAR_14);
        return VAR_2;
    }
    VAR_23 = FUNC_8(VAR_14, VAR_21, VAR_4, ((void*)0), &VAR_16);
    FUNC_9(VAR_14);
    FUNC_11(VAR_21);
    if(FUNC_1(VAR_23))
        return VAR_23;

    VAR_23 = FUNC_2(VAR_16, 1000, 1, &VAR_15, &VAR_22);
    FUNC_3(VAR_16);
    if(FUNC_1(VAR_23))
        return VAR_23;

    VAR_23 = FUNC_4(VAR_15, VAR_11, 0, &VAR_18, ((void*)0), ((void*)0));
    if(FUNC_1(VAR_23)) {
        FUNC_5(VAR_15);
        return VAR_23;
    }
    VAR_23 = FUNC_4(VAR_15, VAR_10, 0, &VAR_19, ((void*)0), ((void*)0));
    if(FUNC_1(VAR_23)) {
        FUNC_5(VAR_15);
        return VAR_23;
    }
    VAR_23 = FUNC_4(VAR_15, VAR_9, 0, &VAR_17, ((void*)0), ((void*)0));
    FUNC_5(VAR_15);
    if(FUNC_1(VAR_23))
        return VAR_23;

    FUNC_16(VAR_20, VAR_12,
             FUNC_12(&VAR_17), FUNC_13(&VAR_18), FUNC_13(&VAR_19));
    FUNC_14(&VAR_17);
    FUNC_14(&VAR_18);
    FUNC_14(&VAR_19);

    return FUNC_15(VAR_5, VAR_6, VAR_20);
}
