
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int IUnknown ;
typedef int IConnectionPointContainer ;
typedef int IConnectionPoint ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static IConnectionPoint *FUNC_4(IUnknown *VAR_2, REFIID VAR_3)
{
    IConnectionPointContainer *VAR_4;
    IConnectionPoint *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_2(VAR_2, &VAR_0, (void**)&VAR_4);
    FUNC_3(VAR_6 == VAR_1, "Could not get IConnectionPointContainer: %08x\n", VAR_6);

    VAR_6 = FUNC_0(VAR_4, VAR_3, &VAR_5);
    FUNC_1(VAR_4);
    FUNC_3(VAR_6 == VAR_1, "FindConnectionPoint failed: %08x\n", VAR_6);

    return VAR_5;
}
