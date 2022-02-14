
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IOleInPlaceActiveObject ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HWND ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *,void**) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,char*,...) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(IHTMLDocument2 *VAR_5, BOOL VAR_6)
{
    IOleInPlaceActiveObject *VAR_7 = ((void*)0);
    HWND VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_1(VAR_4, &VAR_1, (void**)&VAR_7);
    FUNC_5(VAR_9 == VAR_2, "Could not get IOleInPlaceActiveObject interface: %08x\n", VAR_9);
    if(FUNC_0(VAR_9))
        return;

    VAR_9 = FUNC_2(VAR_7, &VAR_8);

    if(VAR_6) {
        FUNC_5(VAR_9 == VAR_2, "GetWindow failed: %08x\n", VAR_9);
        FUNC_5(VAR_8 == VAR_3, "tmp_hwnd=%p, expected %p\n", VAR_8, VAR_3);
    }else {
        FUNC_5(VAR_9 == VAR_0, "GetWindow returned %08x, expected E_FAIL\n", VAR_9);
        FUNC_5(FUNC_4(VAR_3), "hwnd is destroyed\n");
    }

    FUNC_3(VAR_7);
}
