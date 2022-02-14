
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIFile ;
typedef int nsAString ;
typedef int PRUnichar ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*) ;

nsresult FUNC_5(const PRUnichar *VAR_1, nsIFile **VAR_2)
{
    nsAString VAR_3;
    nsresult VAR_4;

    FUNC_4(&VAR_3, VAR_1);
    VAR_4 = FUNC_1(&VAR_3, VAR_0, VAR_2);
    FUNC_3(&VAR_3);

    if(FUNC_0(VAR_4))
        FUNC_2("NS_NewLocalFile failed: %08x\n", VAR_4);
    return VAR_4;
}
