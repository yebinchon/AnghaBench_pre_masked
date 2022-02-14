
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int ,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_2;
    IUnknown *VAR_3;

    VAR_3 = (IUnknown*)0xdeadbeef;
    VAR_2 = FUNC_0(VAR_1, &VAR_3);
    FUNC_1(VAR_2 == VAR_0, "got 0x%08x\n", VAR_2);
    FUNC_1(VAR_3 == ((void*)0), "got %p\n", VAR_3);
}
