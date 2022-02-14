
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int IUnknown ;
typedef int IRpcStubBuffer ;
typedef int IPSFactoryBuffer ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,int *,int **) ;
 int FUNC_1 (int,char*,int ,int ) ;

__attribute__((used)) static IRpcStubBuffer *FUNC_2(IPSFactoryBuffer *VAR_0, REFIID VAR_1, IUnknown *VAR_2, HRESULT VAR_3)
{
    IRpcStubBuffer *VAR_4 = ((void*)0);
    HRESULT VAR_5;

    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4);
    FUNC_1(VAR_5 == VAR_3, "CreateStub returned %08x expected %08x\n", VAR_5, VAR_3);
    return VAR_4;
}
