
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ITypeLib ;
typedef int HRESULT ;
typedef int CHAR ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int *,int,int *,int) ;
 int FUNC_4 (int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static HRESULT FUNC_6(void)
{
    WCHAR VAR_2[VAR_1];
    CHAR VAR_3[VAR_1];
    HRESULT VAR_4;
    ITypeLib *VAR_5;

    FUNC_0(((void*)0), VAR_3, VAR_1);
    FUNC_3(VAR_0, 0, VAR_3, -1, VAR_2, VAR_1);

    VAR_4 = FUNC_2(VAR_2, &VAR_5);
    if (FUNC_5(VAR_4))
    {
        VAR_4 = FUNC_4(VAR_5, VAR_2, ((void*)0));
        FUNC_1(VAR_5);
    }
    return VAR_4;
}
