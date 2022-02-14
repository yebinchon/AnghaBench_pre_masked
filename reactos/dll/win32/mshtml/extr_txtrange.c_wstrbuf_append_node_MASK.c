
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wstrbuf_t ;
typedef int nsIDOMText ;
typedef int nsIDOMNode ;
typedef int nsAString ;
typedef char WCHAR ;
typedef int PRUnichar ;
typedef int BOOL ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int *,char const*,int) ;
 int FUNC_10 (int *,int const*,int ) ;

__attribute__((used)) static void FUNC_11(wstrbuf_t *VAR_3, nsIDOMNode *VAR_4, BOOL VAR_5)
{

    switch(FUNC_0(VAR_4)) {
    case 128: {
        nsIDOMText *VAR_6;
        nsAString VAR_7;
        const PRUnichar *VAR_8;

        if(VAR_5)
            break;

        FUNC_5(VAR_4, &VAR_0, (void**)&VAR_6);

        FUNC_4(&VAR_7, ((void*)0));
        FUNC_6(VAR_6, &VAR_7);
        FUNC_3(&VAR_7, &VAR_8);
        FUNC_10(VAR_3, VAR_8, FUNC_8(VAR_8));
        FUNC_2(&VAR_7);

        FUNC_7(VAR_6);

        break;
    }
    case 129:
        if(FUNC_1(VAR_4, VAR_1)) {
            static const WCHAR VAR_9[] = {'\r','\n'};
            FUNC_9(VAR_3, VAR_9, 2);
        }else if(FUNC_1(VAR_4, VAR_2)) {
            static const WCHAR VAR_10[] = {'\r','\n','\r','\n'};
            FUNC_9(VAR_3, VAR_10, 4);
        }
    }
}
