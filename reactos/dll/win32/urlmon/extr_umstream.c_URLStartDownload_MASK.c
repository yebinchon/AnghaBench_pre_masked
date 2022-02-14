
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPSTREAM ;
typedef int LPCWSTR ;
typedef int IMoniker ;
typedef int IBindStatusCallback ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int ,int **) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int *,int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static HRESULT FUNC_7(LPCWSTR VAR_3, LPSTREAM *VAR_4, IBindStatusCallback *VAR_5)
{
    HRESULT VAR_6;
    IMoniker *VAR_7;
    IBindCtx *VAR_8;

    *VAR_4 = ((void*)0);

    VAR_6 = FUNC_1(((void*)0), VAR_3, &VAR_7);
    if (FUNC_2(VAR_6))
        return VAR_6;

    VAR_6 = FUNC_0(0, &VAR_8);
    if (FUNC_2(VAR_6))
    {
        FUNC_5(VAR_7);
        return VAR_6;
    }

    VAR_6 = FUNC_6(VAR_8, VAR_5, ((void*)0), 0);
    if (FUNC_2(VAR_6))
    {
        FUNC_3(VAR_8);
        FUNC_5(VAR_7);
        return VAR_6;
    }

    VAR_6 = FUNC_4(VAR_7, VAR_8, ((void*)0), &VAR_1, (void **)VAR_4);


    if (VAR_6 == VAR_0) VAR_6 = VAR_2;

    FUNC_3(VAR_8);
    FUNC_5(VAR_7);

    return VAR_6;
}
