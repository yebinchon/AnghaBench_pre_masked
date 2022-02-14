
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IOleInPlaceObjectWindowless ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(IHTMLDocument2 *VAR_7, BOOL VAR_8)
{
    IOleInPlaceObjectWindowless *VAR_9 = ((void*)0);
    HRESULT VAR_10;

    VAR_10 = FUNC_3(VAR_7, &VAR_0,
            (void**)&VAR_9);
    FUNC_7(VAR_10 == VAR_4, "QueryInterface(IID_IOleInPlaceObjectWindowless) failed: %08x\n", VAR_10);
    if(FUNC_2(VAR_10))
        return;

    if(VAR_8) {
        FUNC_6(VAR_5);
        FUNC_6(VAR_1);
        if(VAR_6)
            FUNC_6(VAR_3);
        else
            FUNC_6(VAR_2);
    }
    VAR_10 = FUNC_4(VAR_9);
    FUNC_7(VAR_10 == VAR_4, "InPlaceDeactivate failed: %08x\n", VAR_10);
    if(VAR_8) {
        FUNC_1(VAR_5);
        FUNC_0(VAR_1);
        if(VAR_6)
            FUNC_0(VAR_3);
        else
            FUNC_0(VAR_2);
    }

    FUNC_5(VAR_9);
}
