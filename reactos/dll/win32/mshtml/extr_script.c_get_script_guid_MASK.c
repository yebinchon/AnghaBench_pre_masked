
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nsresult ;
typedef int nsIDOMHTMLScriptElement ;
typedef int nsIDOMHTMLElement ;
typedef int nsAString ;
typedef char PRUnichar ;
typedef int HTMLInnerWindow ;
typedef int GUID ;
typedef int BOOL ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char const*,int *,char const**) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const**) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *,int *,void**) ;

__attribute__((used)) static BOOL FUNC_13(HTMLInnerWindow *VAR_4, nsIDOMHTMLScriptElement *VAR_5, GUID *VAR_6)
{
    nsIDOMHTMLElement *VAR_7;
    const PRUnichar *VAR_8;
    nsAString VAR_9;
    BOOL VAR_10 = VAR_0;
    nsresult VAR_11;

    static const PRUnichar VAR_12[] = {'l','a','n','g','u','a','g','e',0};

    FUNC_9(&VAR_9, ((void*)0));

    VAR_11 = FUNC_11(VAR_5, &VAR_9);
    if(FUNC_1(VAR_11)) {
        const PRUnichar *VAR_13;

        FUNC_8(&VAR_9, &VAR_13);
        if(*VAR_13) {
            VAR_10 = FUNC_6(VAR_13, VAR_6);
            FUNC_7(&VAR_9);
            return VAR_10;
        }
    }else {
        FUNC_0("GetType failed: %08x\n", VAR_11);
    }

    VAR_11 = FUNC_12(VAR_5, &VAR_1, (void**)&VAR_7);
    FUNC_2(VAR_11 == VAR_2);

    VAR_11 = FUNC_4(VAR_7, VAR_12, &VAR_9, &VAR_8);
    FUNC_10(VAR_7);
    if(FUNC_1(VAR_11)) {
        if(*VAR_8) {
            VAR_10 = FUNC_5(VAR_8, VAR_6);
        }else {
            *VAR_6 = FUNC_3(VAR_4);
            VAR_10 = VAR_3;
        }
        FUNC_7(&VAR_9);
    }

    return VAR_10;
}
