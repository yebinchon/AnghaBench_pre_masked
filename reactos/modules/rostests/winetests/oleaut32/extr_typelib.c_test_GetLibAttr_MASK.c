
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int TLIBATTR ;
typedef int ITypeLib ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int,char*,scalar_t__,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(void)
{
    ULONG VAR_2, VAR_3;
    TLIBATTR *VAR_4;
    ITypeLib *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_4(VAR_1, &VAR_5);
    FUNC_5(VAR_6 == VAR_0, "got 0x%08x\n", VAR_6);

    VAR_2 = FUNC_0(VAR_5);
    FUNC_2(VAR_5);

    VAR_6 = FUNC_1(VAR_5, &VAR_4);
    FUNC_5(VAR_6 == VAR_0, "got 0x%08x\n", VAR_6);

    VAR_3 = FUNC_0(VAR_5);
    FUNC_2(VAR_5);
    FUNC_5(VAR_3 == VAR_2, "got %d, %d\n", VAR_3, VAR_2);

    FUNC_3(VAR_5, VAR_4);
    FUNC_2(VAR_5);
}
