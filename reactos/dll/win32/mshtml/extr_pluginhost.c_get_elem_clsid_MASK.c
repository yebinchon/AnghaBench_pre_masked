
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIDOMHTMLElement ;
typedef int nsAString ;
typedef char PRUnichar ;
typedef int CLSID ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int *,char const**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int *) ;

__attribute__((used)) static BOOL FUNC_4(nsIDOMHTMLElement *VAR_1, CLSID *VAR_2)
{
    const PRUnichar *VAR_3;
    nsAString VAR_4;
    nsresult VAR_5;
    BOOL VAR_6 = VAR_0;

    static const PRUnichar VAR_7[] = {'c','l','a','s','s','i','d',0};

    VAR_5 = FUNC_1(VAR_1, VAR_7, &VAR_4, &VAR_3);
    if(FUNC_0(VAR_5)) {
        if(*VAR_3)
            VAR_6 = FUNC_3(VAR_3, VAR_2);
        FUNC_2(&VAR_4);
    }

    return VAR_6;
}
