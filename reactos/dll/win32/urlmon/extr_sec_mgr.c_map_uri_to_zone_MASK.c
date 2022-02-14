
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUri ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *,int **,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_4(IUri *VAR_1, DWORD *VAR_2, IUri **VAR_3)
{
    HRESULT VAR_4;
    IUri *VAR_5;

    VAR_4 = FUNC_0(VAR_1, &VAR_5, VAR_0, 0);
    if(FUNC_1(VAR_4))
        return VAR_4;

    VAR_4 = FUNC_3(VAR_5, VAR_2);
    if(FUNC_1(VAR_4) || !VAR_3)
        FUNC_2(VAR_5);
    else
        *VAR_3 = VAR_5;

    return VAR_4;
}
