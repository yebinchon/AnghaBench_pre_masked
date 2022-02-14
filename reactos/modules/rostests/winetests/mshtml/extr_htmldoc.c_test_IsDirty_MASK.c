
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IPersistStreamInit ;
typedef int IPersistMoniker ;
typedef int IPersistFile ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_9(IHTMLDocument2 *VAR_4, HRESULT VAR_5)
{
    IPersistStreamInit *VAR_6;
    IPersistMoniker *VAR_7;
    IPersistFile *VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_0(VAR_4, &VAR_2, (void**)&VAR_6);
    FUNC_8(VAR_9 == VAR_3, "QueryInterface(IID_IPersistStreamInit failed: %08x\n", VAR_9);
    if(FUNC_7(VAR_9)) {
        VAR_9 = FUNC_5(VAR_6);
        FUNC_8(VAR_9 == VAR_5, "IsDirty() = %08x, expected %08x\n", VAR_9, VAR_5);
        FUNC_6(VAR_6);
    }

    VAR_9 = FUNC_0(VAR_4, &VAR_1, (void**)&VAR_7);
    FUNC_8(VAR_9 == VAR_3, "QueryInterface(IID_IPersistMoniker failed: %08x\n", VAR_9);
    if(FUNC_7(VAR_9)) {
        VAR_9 = FUNC_3(VAR_7);
        FUNC_8(VAR_9 == VAR_5, "IsDirty() = %08x, expected %08x\n", VAR_9, VAR_5);
        FUNC_4(VAR_7);
    }

    VAR_9 = FUNC_0(VAR_4, &VAR_0, (void**)&VAR_8);
    FUNC_8(VAR_9 == VAR_3, "QueryInterface(IID_IPersistFile failed: %08x\n", VAR_9);
    if(FUNC_7(VAR_9)) {
        VAR_9 = FUNC_1(VAR_8);
        FUNC_8(VAR_9 == VAR_5, "IsDirty() = %08x, expected %08x\n", VAR_9, VAR_5);
        FUNC_2(VAR_8);
    }
}
