
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nsresult ;
typedef int nsIDOMMouseEvent ;
typedef int nsIDOMEvent ;
typedef int nsAString ;
typedef int INT16 ;
typedef int HTMLElement ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 scalar_t__ FUNC_6 (int *,int*) ;
 int FUNC_7 (int *) ;

HRESULT FUNC_8(HTMLElement *VAR_5, nsAString *VAR_6, nsAString *VAR_7,
                                nsIDOMEvent *VAR_8, BOOL *VAR_9)
{
    nsIDOMMouseEvent *VAR_10;
    INT16 VAR_11;
    nsresult VAR_12;
    HRESULT VAR_13;

    FUNC_0("CLICK\n");

    VAR_12 = FUNC_5(VAR_8, &VAR_1, (void**)&VAR_10);
    FUNC_1(VAR_12 == VAR_2);

    VAR_12 = FUNC_6(VAR_10, &VAR_11);
    FUNC_1(VAR_12 == VAR_2);

    FUNC_7(VAR_10);

    switch(VAR_11) {
    case 0:
        *VAR_9 = VAR_4;
        VAR_13 = FUNC_2(VAR_5, VAR_6, VAR_7);
        break;
    case 1:
        *VAR_9 = VAR_4;
        VAR_13 = FUNC_3(VAR_5, VAR_6, ((void*)0));
        break;
    default:
        *VAR_9 = VAR_0;
        VAR_13 = VAR_3;
    }

    FUNC_4(VAR_6);
    FUNC_4(VAR_7);
    return VAR_13;
}
