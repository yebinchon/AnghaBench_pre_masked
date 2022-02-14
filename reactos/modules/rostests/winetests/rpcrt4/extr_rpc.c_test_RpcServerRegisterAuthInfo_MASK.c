
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ RPC_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int *,int *) ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
    RPC_STATUS VAR_1;

    VAR_1 = FUNC_0(((void*)0), 600, ((void*)0), ((void*)0));
    FUNC_1(VAR_1 == VAR_0, "status = %x\n", VAR_1);
}
