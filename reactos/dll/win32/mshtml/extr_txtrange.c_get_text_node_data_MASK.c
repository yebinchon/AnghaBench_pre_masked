
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nsresult ;
typedef int nsIDOMText ;
typedef int nsIDOMNode ;
typedef int nsAString ;
typedef int PRUnichar ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int const**) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(nsIDOMNode *VAR_2, nsAString *VAR_3, const PRUnichar **VAR_4)
{
    nsIDOMText *VAR_5;
    nsresult VAR_6;

    VAR_6 = FUNC_5(VAR_2, &VAR_0, (void**)&VAR_5);
    FUNC_2(VAR_6 == VAR_1);

    FUNC_4(VAR_3, ((void*)0));
    VAR_6 = FUNC_6(VAR_5, VAR_3);
    FUNC_7(VAR_5);
    if(FUNC_1(VAR_6))
        FUNC_0("GetData failed: %08x\n", VAR_6);

    FUNC_3(VAR_3, VAR_4);
}
