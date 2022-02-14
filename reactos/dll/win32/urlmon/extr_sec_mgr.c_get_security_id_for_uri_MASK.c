
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUri ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int FUNC_3 (int *,int *,int **) ;

__attribute__((used)) static HRESULT FUNC_4(IUri *VAR_1, BYTE *VAR_2, DWORD *VAR_3)
{
    HRESULT VAR_4;
    IUri *VAR_5;
    DWORD VAR_6 = VAR_0;

    VAR_4 = FUNC_3(VAR_1, &VAR_6, &VAR_5);
    if(FUNC_0(VAR_4))
        return VAR_4;

    VAR_4 = FUNC_2(VAR_5, VAR_2, VAR_3, VAR_6);
    FUNC_1(VAR_5);

    return VAR_4;
}
