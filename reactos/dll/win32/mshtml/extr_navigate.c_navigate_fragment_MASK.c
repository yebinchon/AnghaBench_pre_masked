
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int selector_formatW ;
typedef int nsresult ;
typedef int nsIDOMLocation ;
typedef int nsIDOMHTMLElement ;
typedef int nsIDOMElement ;
typedef int nsAString ;
typedef char WCHAR ;
struct TYPE_11__ {int IHTMLWindow2_iface; TYPE_2__* inner_window; } ;
struct TYPE_12__ {TYPE_4__ base; TYPE_3__* doc_obj; int nswindow; } ;
struct TYPE_10__ {scalar_t__ doc_object_service; } ;
struct TYPE_9__ {TYPE_1__* doc; } ;
struct TYPE_8__ {int nsdoc; } ;
typedef int IUri ;
typedef TYPE_5__ HTMLOuterWindow ;
typedef int HRESULT ;
typedef char* BSTR ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (scalar_t__,int *,int) ;
 int VAR_1 ;
 int FUNC_4 (int *,char**) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int VAR_3 ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int *,void**) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *,int **) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int ,int **) ;
 int FUNC_21 (TYPE_5__*,int *) ;
 int FUNC_22 (char*,char const*,char*) ;

__attribute__((used)) static HRESULT FUNC_23(HTMLOuterWindow *VAR_4, IUri *VAR_5)
{
    nsIDOMLocation *VAR_6;
    nsAString VAR_7;
    WCHAR *VAR_8;
    BSTR VAR_9;
    nsresult VAR_10;
    HRESULT VAR_11;

    const WCHAR VAR_12[] = {'a','[','i','d','=','"','%','s','"',']',0};

    FUNC_21(VAR_4, VAR_5);

    VAR_10 = FUNC_20(VAR_4->nswindow, &VAR_6);
    if(FUNC_1(VAR_10) || !VAR_6)
        return VAR_0;

    VAR_11 = FUNC_4(VAR_5, &VAR_9);
    if(FUNC_1(VAR_11)) {
        FUNC_18(VAR_6);
        return VAR_11;
    }

    FUNC_12(&VAR_7, VAR_9);
    VAR_10 = FUNC_19(VAR_6, &VAR_7);
    FUNC_11(&VAR_7);
    FUNC_18(VAR_6);
    if(FUNC_5(VAR_10))
        FUNC_0("SetHash failed: %08x\n", VAR_10);






    VAR_8 = FUNC_9(sizeof(VAR_12)+FUNC_8(VAR_9)*sizeof(WCHAR));
    if(VAR_8) {
        nsIDOMElement *VAR_13 = ((void*)0);
        nsAString VAR_14;

        FUNC_22(VAR_8, VAR_12, VAR_9);
        FUNC_12(&VAR_14, VAR_8);

        VAR_10 = FUNC_15(VAR_4->base.inner_window->doc->nsdoc, &VAR_14, &VAR_13);
        FUNC_11(&VAR_14);
        FUNC_10(VAR_8);
        if(FUNC_6(VAR_10) && VAR_13) {
            nsIDOMHTMLElement *VAR_15;

            VAR_10 = FUNC_13(VAR_13, &VAR_1, (void**)&VAR_15);
            FUNC_14(VAR_13);
            if(FUNC_6(VAR_10)) {
                FUNC_17(VAR_15, VAR_3, 1);
                FUNC_16(VAR_15);
            }
        }
    }

    FUNC_7(VAR_9);

    if(VAR_4->doc_obj->doc_object_service) {
        FUNC_3(VAR_4->doc_obj->doc_object_service, &VAR_4->base.IHTMLWindow2_iface, 0x10);
        FUNC_2(VAR_4->doc_obj->doc_object_service, &VAR_4->base.IHTMLWindow2_iface, 0);

    }

    return VAR_2;
}
