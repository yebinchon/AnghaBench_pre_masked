
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIDOMHTMLElement ;
typedef int nsAString ;
typedef int WCHAR ;
typedef int PRUnichar ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const**) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *,int *,int *) ;

nsresult FUNC_8(nsIDOMHTMLElement *VAR_1, const WCHAR *VAR_2, nsAString *VAR_3, const PRUnichar **VAR_4)
{
    nsAString VAR_5;
    nsresult VAR_6;

    FUNC_6(&VAR_5, VAR_2);
    FUNC_5(VAR_3, ((void*)0));
    VAR_6 = FUNC_7(VAR_1, &VAR_5, VAR_3);
    FUNC_3(&VAR_5);
    if(FUNC_1(VAR_6)) {
        FUNC_0("GetAttribute(%s) failed: %08x\n", FUNC_2(VAR_2), VAR_6);
        FUNC_3(VAR_3);
        return VAR_6;
    }

    FUNC_4(VAR_3, VAR_4);
    return VAR_0;
}
