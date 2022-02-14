
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int SYSTEMTIME ;
typedef int IDxDiagContainerImpl_Container ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,char const*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *,char const*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,char const*,char*) ;
 int FUNC_6 (char*,char const*,char*,char*) ;

__attribute__((used)) static HRESULT FUNC_7(IDxDiagContainerImpl_Container *VAR_4)
{
    static const WCHAR VAR_5[] = {'M','\'','/','\'','d','\'','/','\'','y','y','y','y',0};
    static const WCHAR VAR_6[] = {'H','H','\'',':','\'','m','m','\'',':','\'','s','s',0};
    static const WCHAR VAR_7[] = {'%','s',',',' ','%','s',0};
    static const WCHAR VAR_8[] = {'s','z','T','i','m','e','L','o','c','a','l','i','z','e','d',0};
    static const WCHAR VAR_9[] = {'s','z','T','i','m','e','E','n','g','l','i','s','h',0};

    SYSTEMTIME VAR_10;
    WCHAR VAR_11[80], VAR_12[80], VAR_13[200];
    HRESULT VAR_14;

    FUNC_3(&VAR_10);

    FUNC_4(VAR_1, 0, &VAR_10, VAR_6, VAR_12, FUNC_0(VAR_12));


    FUNC_2(VAR_2, VAR_0, &VAR_10, ((void*)0), VAR_11, FUNC_0(VAR_11));

    FUNC_6(VAR_13, VAR_7, VAR_11, VAR_12);

    VAR_14 = FUNC_5(VAR_4, VAR_8, VAR_13);
    if (FUNC_1(VAR_14))
        return VAR_14;


    FUNC_2(VAR_1, 0, &VAR_10, VAR_5, VAR_11, FUNC_0(VAR_11));

    FUNC_6(VAR_13, VAR_7, VAR_11, VAR_12);

    VAR_14 = FUNC_5(VAR_4, VAR_9, VAR_13);
    if (FUNC_1(VAR_14))
        return VAR_14;

    return VAR_3;
}
