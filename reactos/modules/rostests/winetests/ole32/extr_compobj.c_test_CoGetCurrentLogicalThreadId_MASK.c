
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef int GUID ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    HRESULT VAR_3;
    GUID VAR_4;

    VAR_3 = FUNC_0(((void*)0));
    FUNC_2(VAR_3 == VAR_0, "got 0x%08x\n", VAR_3);

    VAR_4 = VAR_1;
    VAR_3 = FUNC_0(&VAR_4);
    FUNC_2(VAR_3 == VAR_2, "got 0x%08x\n", VAR_3);
    FUNC_2(!FUNC_1(&VAR_4, &VAR_1), "got null id\n");
}
