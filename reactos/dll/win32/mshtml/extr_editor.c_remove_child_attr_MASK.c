
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsIDOMNodeList ;
typedef int nsIDOMNode ;
typedef int nsIDOMElement ;
typedef int nsAString ;
typedef int cpp_bool ;
typedef scalar_t__ UINT32 ;
typedef int UINT16 ;
typedef int PRUnichar ;
typedef int LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const**) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,scalar_t__*) ;
 int FUNC_9 (int *,scalar_t__,int **) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,void**) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int const*,int ) ;

__attribute__((used)) static void FUNC_15(nsIDOMElement *VAR_2, LPCWSTR VAR_3, nsAString *VAR_4)
{
    cpp_bool VAR_5;
    UINT32 VAR_6, VAR_7;
    nsIDOMNode *VAR_8;
    nsIDOMNodeList *VAR_9;
    UINT16 VAR_10;

    FUNC_5(VAR_2, &VAR_5);
    if(!VAR_5)
        return;

    FUNC_3(VAR_2, &VAR_9);
    FUNC_8(VAR_9, &VAR_6);

    for(VAR_7=0; VAR_7<VAR_6; VAR_7++) {
        FUNC_9(VAR_9, VAR_7, &VAR_8);

        FUNC_11(VAR_8, &VAR_10);
        if(VAR_10 == VAR_0) {
            nsIDOMElement *VAR_11;
            nsAString VAR_12;
            const PRUnichar *VAR_13;

            FUNC_12(VAR_8, &VAR_1, (void**)&VAR_11);

            FUNC_2(&VAR_12, ((void*)0));
            FUNC_4(VAR_11, &VAR_12);
            FUNC_1(&VAR_12, &VAR_13);

            if(!FUNC_14(VAR_13, VAR_3))

                FUNC_7(VAR_11, VAR_4);

            FUNC_0(&VAR_12);

            FUNC_15(VAR_11, VAR_3, VAR_4);

            FUNC_6(VAR_11);
        }

        FUNC_13(VAR_8);
    }

    FUNC_10(VAR_9);
}
