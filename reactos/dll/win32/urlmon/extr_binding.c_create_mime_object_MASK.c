
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int obj; int iid; int callback; int mime; int state; } ;
typedef int LPCWSTR ;
typedef int IPersistMoniker ;
typedef int IMonikerProp ;
typedef int HRESULT ;
typedef int CLSID ;
typedef TYPE_1__ Binding ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int *,int,int *,void**) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,void**) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_8 ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (TYPE_1__*,int *) ;

__attribute__((used)) static HRESULT FUNC_12(Binding *VAR_9, const CLSID *VAR_10, LPCWSTR VAR_11)
{
    IPersistMoniker *VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_0(VAR_10, ((void*)0), VAR_3|VAR_2,
                            &VAR_9->iid, (void**)&VAR_9->obj);
    if(FUNC_1(VAR_13)) {
        FUNC_10("CoCreateInstance failed: %08x\n", VAR_13);
        return VAR_6;
    }

    VAR_9->state |= VAR_0;

    VAR_13 = FUNC_8(VAR_9->obj, &VAR_5, (void**)&VAR_12);
    if(FUNC_9(VAR_13)) {
        IMonikerProp *VAR_14;

        VAR_13 = FUNC_6(VAR_12, &VAR_4, (void**)&VAR_14);
        if(FUNC_9(VAR_13)) {
            FUNC_4(VAR_14, VAR_7, VAR_9->mime);
            FUNC_4(VAR_14, VAR_1, VAR_11);
            FUNC_5(VAR_14);
        }

        FUNC_11(VAR_9, VAR_12);

        FUNC_7(VAR_12);
    }else {
        FUNC_2("Could not get IPersistMoniker: %08x\n", VAR_13);

    }

    FUNC_3(VAR_9->callback, &VAR_9->iid, VAR_9->obj);

    return VAR_8;
}
