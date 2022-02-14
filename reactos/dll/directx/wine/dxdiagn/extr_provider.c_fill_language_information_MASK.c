
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IDxDiagContainerImpl_Container ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,char*,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,char const*,char*) ;
 int VAR_6 ;
 int FUNC_5 (char*,char const*,char*,char const*,char*) ;

__attribute__((used)) static HRESULT FUNC_6(IDxDiagContainerImpl_Container *VAR_7)
{
    static const WCHAR VAR_8[] = {'R','e','g','i','o','n','a','l',' ','S','e','t','t','i','n','g',0};
    static const WCHAR VAR_9[] = {'%','s',' ','(','%','s',':',' ','%','s',')',0};
    static const WCHAR VAR_10[] = {'s','z','L','a','n','g','u','a','g','e','s','L','o','c','a','l','i','z','e','d',0};
    static const WCHAR VAR_11[] = {'s','z','L','a','n','g','u','a','g','e','s','E','n','g','l','i','s','h',0};

    WCHAR VAR_12[80], VAR_13[100], VAR_14[80], VAR_15[300];
    HRESULT VAR_16;


    FUNC_2(VAR_3, VAR_2, VAR_12, FUNC_0(VAR_12));
    FUNC_3(VAR_6, VAR_0, VAR_13, FUNC_0(VAR_13));
    FUNC_2(VAR_4, VAR_2, VAR_14, FUNC_0(VAR_14));

    FUNC_5(VAR_15, VAR_9, VAR_12, VAR_13,
              VAR_14);

    VAR_16 = FUNC_4(VAR_7, VAR_10, VAR_15);
    if (FUNC_1(VAR_16))
        return VAR_16;


    FUNC_2(VAR_3, VAR_1, VAR_12, FUNC_0(VAR_12));
    FUNC_2(VAR_4, VAR_1, VAR_14, FUNC_0(VAR_14));

    FUNC_5(VAR_15, VAR_9, VAR_12,
              VAR_8, VAR_14);

    VAR_16 = FUNC_4(VAR_7, VAR_11, VAR_15);
    if (FUNC_1(VAR_16))
        return VAR_16;

    return VAR_5;
}
