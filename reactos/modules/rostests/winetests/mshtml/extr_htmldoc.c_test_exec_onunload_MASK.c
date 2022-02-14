
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var ;
typedef int VARIANT ;
typedef int IOleCommandTarget ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(IHTMLDocument2 *VAR_6)
{
    IOleCommandTarget *VAR_7;
    VARIANT VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_1(VAR_6, &VAR_0, (void**)&VAR_7);
    FUNC_7(VAR_9 == VAR_3, "QueryInterface(IID_IOleCommandTarget) failed: %08x\n", VAR_9);
    if(FUNC_0(VAR_9))
        return;

    FUNC_6(&VAR_8, 0x0a, sizeof(VAR_8));
    VAR_9 = FUNC_2(VAR_7, ((void*)0), VAR_2,
            VAR_1, ((void*)0), &VAR_8);
    FUNC_7(VAR_9 == VAR_3, "Exec(..., OLECMDID_ONUNLOAD, ...) failed: %08x\n", VAR_9);
    FUNC_7(FUNC_5(&VAR_8) == VAR_5, "V_VT(var)=%d, expected VT_BOOL\n", FUNC_5(&VAR_8));
    FUNC_7(FUNC_4(&VAR_8) == VAR_4, "V_BOOL(var)=%x, expected VARIANT_TRUE\n", FUNC_4(&VAR_8));

    VAR_9 = FUNC_2(VAR_7, ((void*)0), VAR_2,
            VAR_1, ((void*)0), ((void*)0));
    FUNC_7(VAR_9 == VAR_3, "Exec(..., OLECMDID_ONUNLOAD, ...) failed: %08x\n", VAR_9);

    FUNC_3(VAR_7);
}
