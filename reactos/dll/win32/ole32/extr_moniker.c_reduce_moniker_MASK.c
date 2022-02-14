
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IMoniker ;
typedef int IBindCtx ;
typedef int HRESULT ;


 int FUNC_0 (int ,int **) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int *,int **) ;
 int VAR_0 ;

__attribute__((used)) static HRESULT FUNC_5(IMoniker *VAR_1, IBindCtx *VAR_2, IMoniker **VAR_3)
{
    IBindCtx *VAR_4 = ((void*)0);
    HRESULT VAR_5;
    if (!VAR_2)
    {
        VAR_5 = FUNC_0(0, &VAR_4);
        if (FUNC_2(VAR_5))
            return VAR_5;
        VAR_2 = VAR_4;
    }
    VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_0, ((void*)0), VAR_3);
    if (FUNC_2(VAR_5))
        FUNC_1("reducing moniker failed with error 0x%08x\n", VAR_5);
    if (VAR_4) FUNC_3(VAR_4);
    return VAR_5;
}
