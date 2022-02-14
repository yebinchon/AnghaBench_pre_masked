
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * member_0; } ;
typedef TYPE_1__ request_data_t ;
typedef int nsIInputStream ;
typedef int WCHAR ;
struct TYPE_12__ {int readystate_locked; } ;
typedef int IUri ;
typedef TYPE_2__ HTMLOuterWindow ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,int *,int const*,TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *,int ,TYPE_1__*,int) ;
 int FUNC_6 (int *,int ,int *,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,int *,int *,int **) ;

HRESULT FUNC_9(HTMLOuterWindow *VAR_3, const WCHAR *VAR_4, IUri *VAR_5, nsIInputStream *VAR_6)
{
    request_data_t VAR_7 = {((void*)0)};
    HRESULT VAR_8;

    VAR_8 = FUNC_6(VAR_6, VAR_2, ((void*)0), &VAR_7);
    if(FUNC_0(VAR_8))
        return VAR_8;

    if(VAR_3) {
        IUri *VAR_9;
        BSTR VAR_10;

        VAR_3->readystate_locked++;

        VAR_8 = FUNC_8(VAR_3, VAR_5, &VAR_10, &VAR_9);
        if(FUNC_2(VAR_8)) {
            VAR_8 = FUNC_5(VAR_3, VAR_9, VAR_10, &VAR_7, VAR_0|VAR_1);
            FUNC_1(VAR_9);
            FUNC_3(VAR_10);
        }

        VAR_3->readystate_locked--;
    }else
        VAR_8 = FUNC_4(VAR_3, VAR_5, VAR_4, &VAR_7, ((void*)0));

    FUNC_7(&VAR_7);
    return VAR_8;
}
