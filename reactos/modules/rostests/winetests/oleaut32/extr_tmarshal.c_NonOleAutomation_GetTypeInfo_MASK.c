
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int **) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int,int,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int (*) (int *,int *,int **)) ;

__attribute__((used)) static ITypeInfo *FUNC_5(void)
{
    ITypeLib *VAR_3;
    HRESULT VAR_4 = FUNC_2(&VAR_1, 2, 5, VAR_2, &VAR_3);
    FUNC_4(VAR_4, FUNC_2);
    if (FUNC_3(VAR_4))
    {
        ITypeInfo *VAR_5;
        VAR_4 = FUNC_0(VAR_3, &VAR_0, &VAR_5);
        FUNC_4(VAR_4, FUNC_0);
        FUNC_1(VAR_3);
        return VAR_5;
    }
    return ((void*)0);
}
