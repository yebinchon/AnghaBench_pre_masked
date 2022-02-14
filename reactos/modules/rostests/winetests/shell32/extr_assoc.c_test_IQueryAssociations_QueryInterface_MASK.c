
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IQueryAssociations ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    IQueryAssociations *VAR_6;
    IQueryAssociations *VAR_7;
    IUnknown *VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_3, (void*)&VAR_6);
    FUNC_5(VAR_9 == VAR_5, "got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_1(VAR_6, &VAR_3, (void**)&VAR_7);
    FUNC_5(VAR_9 == VAR_5, "QueryInterface (IQueryAssociations) returned 0x%x\n", VAR_9);
    if (FUNC_4(VAR_9)) {
        FUNC_2(VAR_7);
    }

    VAR_9 = FUNC_1(VAR_6, &VAR_4, (void**)&VAR_8);
    FUNC_5(VAR_9 == VAR_5, "QueryInterface (IUnknown) returned 0x%x\n", VAR_9);
    if (FUNC_4(VAR_9)) {
        FUNC_3(VAR_8);
    }

    VAR_9 = FUNC_1(VAR_6, &VAR_4, ((void*)0));
    FUNC_5(VAR_9 == VAR_2, "got 0x%x (expected E_POINTER)\n", VAR_9);

    FUNC_2(VAR_6);
}
