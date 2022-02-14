
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsISelection ;
typedef int nsIDOMNode ;
typedef int nsIDOMHTMLElement ;
typedef int nsAString ;
typedef scalar_t__ WCHAR ;
typedef scalar_t__ UINT16 ;
typedef scalar_t__ PRUnichar ;
typedef int LPCWSTR ;
typedef int HTMLDocument ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;
 int * FUNC_2 (scalar_t__ const*) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int *,scalar_t__ const**) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__*) ;
 int FUNC_11 (int *,int **) ;
 int FUNC_12 (int *,int *,void**) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int **) ;
 int FUNC_15 (int *) ;
 int VAR_4 ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (scalar_t__*,scalar_t__ const*) ;

__attribute__((used)) static void FUNC_18(HTMLDocument *VAR_5, WCHAR *VAR_6)
{
    nsISelection *VAR_7 = FUNC_4(VAR_5);
    nsIDOMHTMLElement *VAR_8 = ((void*)0);
    nsIDOMNode *VAR_9 = ((void*)0), *VAR_10;
    nsAString VAR_11;
    LPCWSTR VAR_12;
    UINT16 VAR_13;
    nsresult VAR_14;

    *VAR_6 = 0;

    if(!VAR_7)
        return;

    FUNC_14(VAR_7, &VAR_9);
    FUNC_15(VAR_7);

    while(VAR_9) {
        VAR_14 = FUNC_10(VAR_9, &VAR_13);
        if(FUNC_0(VAR_14) || VAR_13 == VAR_0)
            break;

        if(VAR_13 == VAR_1) {
            FUNC_12(VAR_9, &VAR_2, (void**)&VAR_8);

            FUNC_7(&VAR_11, ((void*)0));
            FUNC_8(VAR_8, &VAR_11);
            FUNC_6(&VAR_11, &VAR_12);

            if(!FUNC_16(VAR_12, VAR_3)) {
                nsAString VAR_15;
                const PRUnichar *VAR_16;

                FUNC_1("found font tag %p\n", VAR_8);

                FUNC_3(VAR_8, VAR_4, &VAR_15, &VAR_16);
                if(*VAR_16) {
                    FUNC_1("found size %s\n", FUNC_2(VAR_16));
                    FUNC_17(VAR_6, VAR_16);
                }

                FUNC_5(&VAR_15);
            }

            FUNC_5(&VAR_11);
            FUNC_9(VAR_8);
        }

        if(*VAR_6)
            break;

        VAR_10 = VAR_9;
        FUNC_11(VAR_9, &VAR_9);
        FUNC_13(VAR_10);
    }

    if(VAR_9)
        FUNC_13(VAR_9);
}
