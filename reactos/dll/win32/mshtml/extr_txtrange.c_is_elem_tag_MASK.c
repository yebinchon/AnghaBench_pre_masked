
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIDOMNode ;
typedef int nsIDOMElement ;
typedef int nsAString ;
typedef int PRUnichar ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const**) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int const*,int ) ;

__attribute__((used)) static BOOL FUNC_8(nsIDOMNode *VAR_2, LPCWSTR VAR_3)
{
    nsIDOMElement *VAR_4;
    nsAString VAR_5;
    const PRUnichar *VAR_6;
    BOOL VAR_7 = VAR_0;
    nsresult VAR_8;

    VAR_8 = FUNC_6(VAR_2, &VAR_1, (void**)&VAR_4);
    if(FUNC_0(VAR_8))
        return VAR_0;

    FUNC_3(&VAR_5, ((void*)0));
    FUNC_4(VAR_4, &VAR_5);
    FUNC_5(VAR_4);
    FUNC_2(&VAR_5, &VAR_6);

    VAR_7 = !FUNC_7(VAR_6, VAR_3);

    FUNC_1(&VAR_5);

    return VAR_7;
}
