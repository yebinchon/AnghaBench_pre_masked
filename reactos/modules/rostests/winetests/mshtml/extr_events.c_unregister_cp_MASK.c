
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int IUnknown ;
typedef int IConnectionPoint ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(IUnknown *VAR_1, REFIID VAR_2, DWORD VAR_3)
{
    IConnectionPoint *VAR_4;
    HRESULT VAR_5;

    VAR_4 = FUNC_2(VAR_1, VAR_2);
    VAR_5 = FUNC_1(VAR_4, VAR_3);
    FUNC_0(VAR_4);
    FUNC_3(VAR_5 == VAR_0, "Unadvise failed: %08x\n", VAR_5);
}
