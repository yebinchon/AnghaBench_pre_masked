
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IMoniker ;
typedef int IEnumMoniker ;
typedef int IBindCtx ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,int **,int *) ;
 int FUNC_2 (int *,int *,int *,int **) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(IBindCtx * VAR_3, IEnumMoniker * VAR_4)
{
    IMoniker * VAR_5;
    int VAR_6=0, VAR_7=0;

    while ((FUNC_1(VAR_4, 1, &VAR_5, ((void*)0))==VAR_0))
    {
        HRESULT VAR_8;
        WCHAR * VAR_9;
        VAR_6++;
        VAR_8=FUNC_2(VAR_5, VAR_3, ((void*)0), &VAR_9);
        if (FUNC_3(VAR_8))
        {
            if (!FUNC_4(VAR_9, VAR_1) || !FUNC_4(VAR_9, VAR_2))
                VAR_7++;
            FUNC_0(VAR_9);
        }
    }
    FUNC_5("Total number of monikers is %i\n", VAR_6);
    return VAR_7;
}
