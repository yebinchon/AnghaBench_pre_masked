
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int *,int ,int *) ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
    UINT VAR_2;

    VAR_2 = FUNC_0(((void*)0), ((void*)0), VAR_1, ((void*)0));
    FUNC_1(VAR_2 == VAR_0, "Expected ERROR_INVALID_PARAMETER, got %u\n", VAR_2);

    VAR_2 = FUNC_0("", ((void*)0), VAR_1, ((void*)0));
    FUNC_1(VAR_2 == VAR_0, "Expected ERROR_INVALID_PARAMETER, got %u\n", VAR_2);
}
