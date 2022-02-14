
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int IUnknown ;
typedef int IConnectionPoint ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static DWORD FUNC_4(IUnknown *VAR_1, REFIID VAR_2, IUnknown *VAR_3)
{
    IConnectionPoint *VAR_4;
    DWORD VAR_5;
    HRESULT VAR_6;

    VAR_4 = FUNC_2(VAR_1, VAR_2);
    VAR_6 = FUNC_0(VAR_4, VAR_3, &VAR_5);
    FUNC_1(VAR_4);
    FUNC_3(VAR_6 == VAR_0, "Advise failed: %08x\n", VAR_6);

    return VAR_5;
}
