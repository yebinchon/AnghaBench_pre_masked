
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float WCHAR ;
typedef int VARIANT ;
typedef int ULONG ;
typedef int LPVOID ;
typedef int IPropertyBag ;
typedef int IMoniker ;
typedef int IEnumMoniker ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int **,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,float const*,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,float const*) ;
 int FUNC_10 (int ,char*,int ) ;

__attribute__((used)) static BOOL FUNC_11(const WCHAR *VAR_4, IEnumMoniker *VAR_5)
{
    IMoniker *VAR_6 = ((void*)0);
    BOOL VAR_7 = VAR_0;
    ULONG VAR_8;
    HRESULT VAR_9;
    static const WCHAR VAR_10[] = {'F','r','i','e','n','d','l','y','N','a','m','e',0};

    while(!VAR_7 && FUNC_0(VAR_5, 1, &VAR_6, &VAR_8) == VAR_2)
    {
        IPropertyBag * VAR_11 = ((void*)0);
        VARIANT VAR_12;

        FUNC_8(&VAR_12);

        VAR_9 = FUNC_1(VAR_6, ((void*)0), ((void*)0), &VAR_1, (LPVOID*)&VAR_11);
        FUNC_10(FUNC_5(VAR_9), "IMoniker_BindToStorage failed with %x\n", VAR_9);

        VAR_9 = FUNC_3(VAR_11, VAR_10, &VAR_12, ((void*)0));
        FUNC_10(FUNC_5(VAR_9), "IPropertyBag_Read failed with %x\n", VAR_9);

        if (!FUNC_9(FUNC_6(&VAR_12), VAR_4))
            VAR_7 = VAR_3;

        FUNC_4(VAR_11);
        FUNC_2(VAR_6);
        FUNC_7(&VAR_12);
    }

    return VAR_7;
}
