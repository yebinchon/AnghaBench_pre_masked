
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int ITypeLib ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int **) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_5(void)
{
    ITypeLib *VAR_5;
    HRESULT VAR_6;

    static const WCHAR VAR_7[] = {'w','s','c','r','i','p','t','.','e','x','e',0};

    VAR_6 = FUNC_3(VAR_7, &VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_0;

    VAR_6 = FUNC_1(VAR_5, &VAR_2, &VAR_4);
    if(FUNC_4(VAR_6))
        VAR_6 = FUNC_1(VAR_5, &VAR_1, &VAR_3);

    FUNC_2(VAR_5);
    return FUNC_4(VAR_6);
}
