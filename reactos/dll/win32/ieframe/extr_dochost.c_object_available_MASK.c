
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwnd; int IOleClientSite_iface; int document; } ;
typedef int RECT ;
typedef int IOleObject ;
typedef int IHlinkTarget ;
typedef int HRESULT ;
typedef TYPE_1__ DocHost ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int ,int *,int *,int,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,void**) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(DocHost *VAR_3)
{
    IHlinkTarget *VAR_4;
    HRESULT VAR_5;

    FUNC_9("(%p)\n", VAR_3);

    if(!VAR_3->document) {
        FUNC_10("document == NULL\n");
        return;
    }

    VAR_5 = FUNC_7(VAR_3->document, &VAR_0, (void**)&VAR_4);
    if(FUNC_8(VAR_5)) {
        VAR_5 = FUNC_3(VAR_4, 0, ((void*)0));
        FUNC_4(VAR_4);
        if(FUNC_0(VAR_5))
            FUNC_1("Navigate failed\n");
    }else {
        IOleObject *VAR_6;
        RECT VAR_7;

        FUNC_9("No IHlink iface\n");

        VAR_5 = FUNC_7(VAR_3->document, &VAR_1, (void**)&VAR_6);
        if(FUNC_0(VAR_5)) {
            FUNC_1("Could not get IOleObject iface: %08x\n", VAR_5);
            return;
        }

        FUNC_2(VAR_3->hwnd, &VAR_7);
        VAR_5 = FUNC_5(VAR_6, VAR_2, ((void*)0), &VAR_3->IOleClientSite_iface, -1, VAR_3->hwnd, &VAR_7);
        FUNC_6(VAR_6);
        if(FUNC_0(VAR_5))
            FUNC_1("DoVerb failed: %08x\n", VAR_5);
    }
}
