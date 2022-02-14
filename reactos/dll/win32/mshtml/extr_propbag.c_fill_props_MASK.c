
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIDOMNode ;
typedef int nsIDOMHTMLElement ;
typedef int nsIDOMHTMLCollection ;
typedef int nsAString ;
typedef scalar_t__ UINT32 ;
typedef int PropertyBag ;
typedef char PRUnichar ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,char const*,char const*) ;
 int FUNC_4 (int *,char const*,int *,char const**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (int *,scalar_t__,int **) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int **) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,void**) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static HRESULT FUNC_14(nsIDOMHTMLElement *VAR_3, PropertyBag *VAR_4)
{
    const PRUnichar *VAR_5, *VAR_6;
    nsAString VAR_7, VAR_8;
    nsIDOMHTMLCollection *VAR_9;
    nsIDOMHTMLElement *VAR_10;
    UINT32 VAR_11, VAR_12;
    nsIDOMNode *VAR_13;
    nsresult VAR_14;
    HRESULT VAR_15 = VAR_2;

    static const PRUnichar VAR_16[] = {'n','a','m','e',0};
    static const PRUnichar VAR_17[] = {'p','a','r','a','m',0};
    static const PRUnichar VAR_18[] = {'v','a','l','u','e',0};

    FUNC_6(&VAR_7, VAR_17);
    VAR_14 = FUNC_10(VAR_3, &VAR_7, &VAR_9);
    FUNC_5(&VAR_7);
    if(FUNC_1(VAR_14))
        return VAR_0;

    VAR_14 = FUNC_7(VAR_9, &VAR_11);
    if(FUNC_1(VAR_14))
        VAR_11 = 0;

    for(VAR_12=0; VAR_12 < VAR_11; VAR_12++) {
        VAR_14 = FUNC_8(VAR_9, VAR_12, &VAR_13);
        if(FUNC_1(VAR_14)) {
            VAR_15 = VAR_0;
            break;
        }

        VAR_14 = FUNC_12(VAR_13, &VAR_1, (void**)&VAR_10);
        FUNC_13(VAR_13);
        if(FUNC_1(VAR_14)) {
            VAR_15 = VAR_0;
            break;
        }

        VAR_14 = FUNC_4(VAR_10, VAR_16, &VAR_7, &VAR_5);
        if(FUNC_2(VAR_14)) {
            VAR_14 = FUNC_4(VAR_10, VAR_18, &VAR_8, &VAR_6);
            if(FUNC_2(VAR_14)) {
                VAR_15 = FUNC_3(VAR_4, VAR_5, VAR_6);
                FUNC_5(&VAR_8);
            }

            FUNC_5(&VAR_7);
        }

        FUNC_11(VAR_10);
        if(FUNC_0(VAR_15))
            break;
        if(FUNC_1(VAR_14)) {
            VAR_15 = VAR_0;
            break;
        }
    }

    FUNC_9(VAR_9);
    return VAR_15;
}
