
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {int post_data_len; int * post_stream; int * headers; int * post_data; } ;
typedef TYPE_6__ request_data_t ;
typedef int nsWineURI ;
typedef int nsISupports ;
typedef int WCHAR ;
struct TYPE_17__ {TYPE_4__* inner_window; int IHTMLWindow2_iface; } ;
struct TYPE_19__ {TYPE_5__ base; TYPE_2__* doc_obj; } ;
struct TYPE_16__ {TYPE_3__* doc; } ;
struct TYPE_15__ {int basedoc; } ;
struct TYPE_13__ {TYPE_7__* window; } ;
struct TYPE_14__ {TYPE_1__ basedoc; int doc_object_service; scalar_t__ webbrowser; } ;
typedef int IUri ;
typedef TYPE_7__ HTMLOuterWindow ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int * BSTR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *,int const*,int,int *,void*,int,int const*,int ,scalar_t__*) ;
 int FUNC_2 (int *,int **) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_7__*,int *,int **) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *,int const*,int *,int ,scalar_t__*) ;
 int FUNC_9 (TYPE_7__*,int *,int *,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_7__*,int *,int,int const*,void*,int) ;

__attribute__((used)) static HRESULT FUNC_12(HTMLOuterWindow *VAR_5, IUri *VAR_6, const WCHAR *VAR_7, const request_data_t *VAR_8,
        DWORD VAR_9)
{
    nsWineURI *VAR_10;
    HRESULT VAR_11;

    FUNC_5("%s\n", FUNC_7(VAR_7));

    if(VAR_5->doc_obj && VAR_5->doc_obj->webbrowser) {
        DWORD VAR_12 = VAR_8 ? VAR_8->post_data_len : 0;
        void *VAR_13 = VAR_12 ? VAR_8->post_data : ((void*)0);
        const WCHAR *VAR_14 = VAR_8 ? VAR_8->headers : ((void*)0);

        if(!(VAR_9 & VAR_0)) {
            BSTR VAR_15 = ((void*)0);
            BOOL VAR_16 = VAR_1;

            if(VAR_5 != VAR_5->doc_obj->basedoc.window) {
                VAR_11 = FUNC_2(&VAR_5->base.IHTMLWindow2_iface, &VAR_15);
                if(FUNC_0(VAR_11))
                    return VAR_11;
            }

            VAR_11 = FUNC_1(VAR_5->doc_obj->doc_object_service, ((void*)0), VAR_7, 0x40,
                    VAR_15, VAR_13, VAR_12 ? VAR_12+1 : 0, VAR_14, VAR_4, &VAR_16);
            FUNC_4(VAR_15);
            if(FUNC_3(VAR_11) && VAR_16) {
                FUNC_5("Navigation canceled\n");
                return VAR_3;
            }
        }

        if(VAR_5 == VAR_5->doc_obj->basedoc.window)
            return FUNC_11(VAR_5, VAR_6, VAR_9, VAR_14, VAR_13, VAR_12);
    }

    if(VAR_5->doc_obj && VAR_5 == VAR_5->doc_obj->basedoc.window) {
        BOOL VAR_17;

        VAR_11 = FUNC_8(&VAR_5->base.inner_window->doc->basedoc, VAR_7, ((void*)0), 0, &VAR_17);
        if(FUNC_0(VAR_11))
            return VAR_11;

        if(VAR_17) {
            FUNC_5("Navigation handled by hlink frame\n");
            return VAR_3;
        }
    }

    VAR_11 = FUNC_6(VAR_5, VAR_6, &VAR_10);
    if(FUNC_0(VAR_11))
        return VAR_11;

    VAR_11 = FUNC_9(VAR_5, VAR_10, VAR_8 ? VAR_8->post_stream : ((void*)0), ((void*)0), VAR_2);
    FUNC_10((nsISupports*)VAR_10);
    return VAR_11;
}
