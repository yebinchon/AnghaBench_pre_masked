
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMEvent ;
typedef int nsAString ;
struct TYPE_5__ {int node; } ;
struct TYPE_4__ {TYPE_3__ element; int nsanchor; } ;
typedef int HTMLDOMNode ;
typedef TYPE_1__ HTMLAnchorElement ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int *,int *,int *,int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static HRESULT FUNC_9(HTMLDOMNode *VAR_1, DWORD VAR_2, nsIDOMEvent *VAR_3, BOOL *VAR_4)
{
    HTMLAnchorElement *VAR_5 = FUNC_4(VAR_1);
    nsAString VAR_6, VAR_7;
    nsresult VAR_8;

    if(VAR_2 == VAR_0) {
        FUNC_6(&VAR_6, ((void*)0));
        VAR_8 = FUNC_7(VAR_5->nsanchor, &VAR_6);
        if (FUNC_2(VAR_8)) {
            FUNC_0("Could not get anchor href: %08x\n", VAR_8);
            goto fallback;
        }

        FUNC_6(&VAR_7, ((void*)0));
        VAR_8 = FUNC_8(VAR_5->nsanchor, &VAR_7);
        if (FUNC_2(VAR_8)) {
            FUNC_0("Could not get anchor target: %08x\n", VAR_8);
            goto fallback;
        }

        return FUNC_3(&VAR_5->element, &VAR_6, &VAR_7, VAR_3, VAR_4);

fallback:
        FUNC_5(&VAR_6);
        FUNC_5(&VAR_7);
    }

    return FUNC_1(&VAR_5->element.node, VAR_2, VAR_3, VAR_4);
}
