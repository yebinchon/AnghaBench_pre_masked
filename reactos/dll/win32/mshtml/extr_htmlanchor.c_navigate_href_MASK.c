
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int nsAString ;
struct TYPE_14__ {TYPE_3__* doc; } ;
struct TYPE_16__ {TYPE_4__ node; } ;
struct TYPE_11__ {int IHTMLWindow2_iface; } ;
struct TYPE_15__ {TYPE_1__ base; int uri_nofrag; } ;
struct TYPE_12__ {int window; } ;
struct TYPE_13__ {TYPE_2__ basedoc; } ;
typedef scalar_t__ PRUnichar ;
typedef TYPE_5__ HTMLOuterWindow ;
typedef TYPE_6__ HTMLElement ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_5__* FUNC_2 (int ,int *,scalar_t__*) ;
 int FUNC_3 (TYPE_6__*,int *,scalar_t__ const*) ;
 int FUNC_4 (TYPE_5__*,scalar_t__ const*,int ,int ) ;
 int FUNC_5 (int *,scalar_t__ const**) ;

__attribute__((used)) static HRESULT FUNC_6(HTMLElement *VAR_2, nsAString *VAR_3, nsAString *VAR_4)
{
    HTMLOuterWindow *VAR_5;
    BOOL VAR_6;
    const PRUnichar *VAR_7;
    HRESULT VAR_8;

    VAR_5 = FUNC_2(VAR_2->node.doc->basedoc.window, VAR_4, &VAR_6);
    if(!VAR_5) {
        if(VAR_6) {
            const PRUnichar *VAR_9;
            FUNC_5(VAR_4, &VAR_9);
            return FUNC_3(VAR_2, VAR_3, VAR_9);
        }else {
            return VAR_1;
        }
    }

    FUNC_5(VAR_3, &VAR_7);
    if(*VAR_7) {
        VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_5->uri_nofrag, VAR_0);
    }else {
        FUNC_1("empty href\n");
        VAR_8 = VAR_1;
    }
    FUNC_0(&VAR_5->base.IHTMLWindow2_iface);
    return VAR_8;
}
