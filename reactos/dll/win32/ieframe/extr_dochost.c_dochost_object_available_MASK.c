
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int task_header_t ;
struct TYPE_7__ {scalar_t__ doc_navigate; int IOleClientSite_iface; int * document; } ;
typedef scalar_t__ READYSTATE ;
typedef int IUnknown ;
typedef int IOleObject ;
typedef int HRESULT ;
typedef TYPE_1__ DocHost ;
typedef int CLSID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,void**) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (char*,char*) ;
 int VAR_5 ;
 int FUNC_10 (TYPE_1__*,int ) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,scalar_t__*) ;
 int * FUNC_13 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_15 (TYPE_1__*,scalar_t__) ;

HRESULT FUNC_16(DocHost *VAR_8, IUnknown *VAR_9)
{
    READYSTATE VAR_10;
    task_header_t *VAR_11;
    IOleObject *VAR_12;
    HRESULT VAR_13;

    FUNC_5(VAR_9);
    VAR_8->document = VAR_9;

    VAR_13 = FUNC_6(VAR_9, &VAR_2, (void**)&VAR_12);
    if(FUNC_8(VAR_13)) {
        CLSID VAR_14;

        VAR_13 = FUNC_2(VAR_12, &VAR_14);
        if(FUNC_8(VAR_13))
            FUNC_9("Got clsid %s\n",
                  FUNC_7(&VAR_14, &VAR_0) ? "CLSID_HTMLDocument" : FUNC_11(&VAR_14));

        VAR_13 = FUNC_4(VAR_12, &VAR_8->IOleClientSite_iface);
        if(FUNC_0(VAR_13))
            FUNC_1("SetClientSite failed: %08x\n", VAR_13);

        FUNC_3(VAR_12);
    }else {
        FUNC_1("Could not get IOleObject iface: %08x\n", VAR_13);
    }



    VAR_11 = FUNC_13(sizeof(*VAR_11));
    FUNC_14(VAR_8, VAR_11, VAR_6, VAR_7, VAR_1);

    VAR_13 = FUNC_12(VAR_8, &VAR_10);
    if(FUNC_8(VAR_13)) {
        if(VAR_10 == VAR_3)
            FUNC_15(VAR_8, VAR_3);
        if(VAR_10 != VAR_3 || VAR_8->doc_navigate)
            FUNC_10(VAR_8, VAR_5);
    }else if(!VAR_8->doc_navigate) {


        FUNC_15(VAR_8, VAR_3);
    }

    return VAR_4;
}
