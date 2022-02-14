
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nsresult ;
typedef int nsIDocument ;
typedef int nsIDOMHTMLDocument ;
typedef int JSContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int * FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;

JSContext *FUNC_5(nsIDOMHTMLDocument *VAR_3)
{
    nsIDocument *VAR_4;
    JSContext *VAR_5;
    nsresult VAR_6;

    VAR_6 = FUNC_3(VAR_3, &VAR_0, (void**)&VAR_4);
    FUNC_1(VAR_6 == VAR_1);

    VAR_5 = FUNC_2(VAR_2, VAR_4);
    FUNC_4(VAR_4);

    FUNC_0("ret %p\n", VAR_5);
    return VAR_5;
}
