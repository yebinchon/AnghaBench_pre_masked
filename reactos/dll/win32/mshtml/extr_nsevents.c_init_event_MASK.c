
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIDOMEventTarget ;
typedef int nsIDOMEventListener ;
typedef int nsAString ;
typedef int PRUnichar ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int *,int *,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(nsIDOMEventTarget *VAR_1, const PRUnichar *VAR_2,
        nsIDOMEventListener *VAR_3, BOOL VAR_4)
{
    nsAString VAR_5;
    nsresult VAR_6;

    FUNC_3(&VAR_5, VAR_2);
    VAR_6 = FUNC_4(VAR_1, &VAR_5, VAR_3, VAR_4, VAR_0, 1);
    FUNC_2(&VAR_5);
    if(FUNC_1(VAR_6))
        FUNC_0("AddEventTarget failed: %08x\n", VAR_6);

}
