
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMWindow ;
typedef int nsIDOMHTMLElement ;
typedef int nsIDOMDocument ;
struct TYPE_4__ {int * inner_window; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef TYPE_2__ HTMLOuterWindow ;
typedef int HTMLInnerWindow ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *) ;

__attribute__((used)) static HTMLInnerWindow *FUNC_6(nsIDOMHTMLElement *VAR_0)
{
    nsIDOMWindow *VAR_1;
    nsIDOMDocument *VAR_2;
    HTMLOuterWindow *VAR_3;
    nsresult VAR_4;

    VAR_4 = FUNC_3(VAR_0, &VAR_2);
    if(FUNC_0(VAR_4))
        return ((void*)0);

    VAR_4 = FUNC_1(VAR_2, &VAR_1);
    FUNC_2(VAR_2);
    if(FUNC_0(VAR_4) || !VAR_1)
        return ((void*)0);

    VAR_3 = FUNC_5(VAR_1);
    FUNC_4(VAR_1);

    return VAR_3->base.inner_window;
}
