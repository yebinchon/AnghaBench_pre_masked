
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsIDOMElementCSSInlineStyle ;
typedef int nsIDOMCSSStyleDeclaration ;
struct TYPE_3__ {int nselem; } ;
typedef TYPE_1__ HTMLElement ;
typedef int HRESULT ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *,void**) ;

__attribute__((used)) static HRESULT FUNC_7(HTMLElement *VAR_5, nsIDOMCSSStyleDeclaration **VAR_6)
{
    nsIDOMElementCSSInlineStyle *VAR_7;
    nsresult VAR_8;

    if(!VAR_5->nselem) {
        FUNC_1("NULL nselem\n");
        return VAR_1;
    }

    VAR_8 = FUNC_6(VAR_5->nselem, &VAR_2,
            (void**)&VAR_7);
    FUNC_3(VAR_8 == VAR_3);

    VAR_8 = FUNC_4(VAR_7, VAR_6);
    FUNC_5(VAR_7);
    if(FUNC_2(VAR_8)) {
        FUNC_0("GetStyle failed: %08x\n", VAR_8);
        return VAR_0;
    }

    return VAR_4;
}
