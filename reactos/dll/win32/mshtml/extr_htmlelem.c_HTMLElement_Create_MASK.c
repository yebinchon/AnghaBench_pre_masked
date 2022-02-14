
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int (* constructor ) (int *,int *,TYPE_3__**) ;} ;
typedef TYPE_2__ tag_desc_t ;
typedef int nsresult ;
typedef int nsIDOMNode ;
typedef int nsIDOMHTMLElement ;
typedef int nsAString ;
struct TYPE_11__ {int * vtbl; } ;
struct TYPE_13__ {TYPE_1__ node; } ;
typedef int PRUnichar ;
typedef TYPE_3__ HTMLElement ;
typedef int HTMLDocumentNode ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,TYPE_3__**) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (char*,int ,TYPE_3__*) ;
 int FUNC_5 (int const*) ;
 TYPE_2__* FUNC_6 (int const*) ;
 TYPE_3__* FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int const**) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,void**) ;
 int FUNC_14 (int *,int *,TYPE_3__**) ;

HRESULT FUNC_15(HTMLDocumentNode *VAR_6, nsIDOMNode *VAR_7, BOOL VAR_8, HTMLElement **VAR_9)
{
    nsIDOMHTMLElement *VAR_10;
    nsAString VAR_11;
    const PRUnichar *VAR_12;
    const tag_desc_t *VAR_13;
    HTMLElement *VAR_14;
    nsresult VAR_15;
    HRESULT VAR_16;

    VAR_15 = FUNC_13(VAR_7, &VAR_4, (void**)&VAR_10);
    if(FUNC_3(VAR_15))
        return VAR_0;

    FUNC_10(&VAR_11, ((void*)0));
    FUNC_11(VAR_10, &VAR_11);

    FUNC_9(&VAR_11, &VAR_12);

    VAR_13 = FUNC_6(VAR_12);
    if(VAR_13) {
        VAR_16 = VAR_13->constructor(VAR_6, VAR_10, &VAR_14);
    }else if(VAR_8) {
        VAR_16 = FUNC_2(VAR_6, VAR_10, &VAR_14);
    }else {
        VAR_14 = FUNC_7(sizeof(HTMLElement));
        if(VAR_14) {
            VAR_14->node.vtbl = &VAR_2;
            FUNC_1(VAR_14, VAR_6, VAR_10, &VAR_3);
            VAR_16 = VAR_5;
        }else {
            VAR_16 = VAR_1;
        }
    }

    FUNC_4("%s ret %p\n", FUNC_5(VAR_12), VAR_14);

    FUNC_12(VAR_10);
    FUNC_8(&VAR_11);
    if(FUNC_0(VAR_16))
        return VAR_16;

    *VAR_9 = VAR_14;
    return VAR_5;
}
