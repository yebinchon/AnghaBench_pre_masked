
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IOleObject ;
typedef int IHTMLDocument2 ;
typedef int IEnumSTATDATA ;
typedef int IAdviseSink ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,void**) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,int*) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(IHTMLDocument2 *VAR_5)
{
    IOleObject *VAR_6 = ((void*)0);
    IEnumSTATDATA *VAR_7 = (void*)0xdeadbeef;
    DWORD VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_1(VAR_5, &VAR_2, (void**)&VAR_6);
    FUNC_6(VAR_9 == VAR_4, "QueryInterface(IID_IOleObject) failed: %08x\n", VAR_9);
    if(FUNC_0(VAR_9))
        return;

    VAR_9 = FUNC_5(VAR_6, 0);
    FUNC_6(VAR_9 == VAR_3, "Unadvise returned: %08x\n", VAR_9);

    VAR_9 = FUNC_3(VAR_6, &VAR_7);
    FUNC_6(VAR_9 == VAR_4, "EnumAdvise returned: %08x\n", VAR_9);
    FUNC_6(VAR_7 == ((void*)0), "enum_advise != NULL\n");

    VAR_8 = -1;
    VAR_9 = FUNC_2(VAR_6, ((void*)0), &VAR_8);

    FUNC_6(VAR_9 == VAR_1 || VAR_9 == VAR_4, "Advise returned: %08x\n", VAR_9);
    FUNC_6(VAR_8 == 0 || VAR_8 == 1, "conn = %d\n", VAR_8);

    VAR_9 = FUNC_2(VAR_6, (IAdviseSink*)&VAR_0, ((void*)0));
    FUNC_6(VAR_9 == VAR_1, "Advise returned: %08x\n", VAR_9);

    VAR_9 = FUNC_2(VAR_6, (IAdviseSink*)&VAR_0, &VAR_8);
    FUNC_6(VAR_9 == VAR_4, "Advise returned: %08x\n", VAR_9);
    FUNC_6(VAR_8 == 1, "conn = %d\n", VAR_8);

    VAR_9 = FUNC_2(VAR_6, (IAdviseSink*)&VAR_0, &VAR_8);
    FUNC_6(VAR_9 == VAR_4, "Advise returned: %08x\n", VAR_9);
    FUNC_6(VAR_8 == 2, "conn = %d\n", VAR_8);

    VAR_9 = FUNC_5(VAR_6, 1);
    FUNC_6(VAR_9 == VAR_4, "Unadvise returned: %08x\n", VAR_9);

    VAR_9 = FUNC_5(VAR_6, 1);
    FUNC_6(VAR_9 == VAR_3, "Unadvise returned: %08x\n", VAR_9);

    VAR_9 = FUNC_5(VAR_6, 2);
    FUNC_6(VAR_9 == VAR_4, "Unadvise returned: %08x\n", VAR_9);

    FUNC_4(VAR_6);
}
