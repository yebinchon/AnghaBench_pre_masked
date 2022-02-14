
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nsresult ;
typedef int nsIDOMNodeList ;
typedef int nsIDOMNode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(nsIDOMNode *VAR_1, nsIDOMNode *VAR_2)
{
    nsIDOMNodeList *VAR_3;
    nsIDOMNode *VAR_4;
    int VAR_5 = 0;
    nsresult VAR_6;

    VAR_6 = FUNC_3(VAR_1, &VAR_3);
    FUNC_0(VAR_6 == VAR_0);

    while(1) {
        VAR_6 = FUNC_1(VAR_3, VAR_5, &VAR_4);
        FUNC_0(VAR_6 == VAR_0 && VAR_4);
        if(VAR_4 == VAR_2) {
            FUNC_4(VAR_4);
            break;
        }
        FUNC_4(VAR_4);
        VAR_5++;
    }

    FUNC_2(VAR_3);
    return VAR_5;
}
