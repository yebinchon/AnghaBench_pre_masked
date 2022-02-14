
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IReferenceClock ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(const char * VAR_5, IReferenceClock * VAR_6)
{
    HRESULT VAR_7;
    IUnknown *VAR_8;

    VAR_7 = FUNC_0(VAR_6, &VAR_3, (void**)&VAR_8);
    FUNC_3(VAR_7 == VAR_4, "IReferenceClock_QueryInterface returned %x\n", VAR_7);
    FUNC_3(VAR_8 != ((void*)0), "pF is NULL\n");
    if (FUNC_2(VAR_7)) FUNC_1(VAR_8);

    VAR_7 = FUNC_0(VAR_6, &VAR_1, (void**)&VAR_8);
    FUNC_3(VAR_7 == VAR_0, "IReferenceClock_QueryInterface returned %x\n", VAR_7);
    FUNC_3(VAR_8 == ((void*)0), "pF is not NULL\n");

    VAR_7 = FUNC_0(VAR_6, &VAR_2, (void**)&VAR_8);
    FUNC_3(VAR_7 == VAR_4, "IReferenceClock_QueryInterface returned %x\n", VAR_7);
    FUNC_3(VAR_8 != ((void*)0), "pF is NULL\n");
    if (FUNC_2(VAR_7)) FUNC_1(VAR_8);
}
