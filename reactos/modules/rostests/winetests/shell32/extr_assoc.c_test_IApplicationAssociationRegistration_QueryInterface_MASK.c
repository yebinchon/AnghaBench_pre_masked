
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IApplicationAssociationRegistration ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(IApplicationAssociationRegistration *VAR_4)
{
    IApplicationAssociationRegistration *VAR_5;
    IUnknown *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_0(VAR_4, &VAR_1,
       (void**)&VAR_5);
    FUNC_4(VAR_7 == VAR_3, "QueryInterface (IApplicationAssociationRegistration) returned 0x%x\n", VAR_7);
    if (FUNC_3(VAR_7)) {
        FUNC_1(VAR_5);
    }

    VAR_7 = FUNC_0(VAR_4, &VAR_2, (void**)&VAR_6);
    FUNC_4(VAR_7 == VAR_3, "QueryInterface (IUnknown) returned 0x%x\n", VAR_7);
    if (FUNC_3(VAR_7)) {
        FUNC_2(VAR_6);
    }

    VAR_7 = FUNC_0(VAR_4, &VAR_2, ((void*)0));
    FUNC_4(VAR_7 == VAR_0, "got 0x%x (expected E_POINTER)\n", VAR_7);
}
