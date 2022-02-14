
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
    ULONG VAR_4;
    HRESULT VAR_5;


    VAR_4 = 0;
    VAR_5 = FUNC_0(VAR_3, &VAR_4);
    FUNC_1(VAR_5 == VAR_2, "got 0x%08x\n", VAR_5);
    FUNC_1(VAR_4 == (VAR_0 | VAR_1), "flags 0x%08x\n", VAR_4);
}
