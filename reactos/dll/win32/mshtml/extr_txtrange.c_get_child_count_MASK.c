
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nsresult ;
typedef int nsIDOMNodeList ;
typedef int nsIDOMNode ;
typedef int UINT32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;

__attribute__((used)) static UINT32 FUNC_4(nsIDOMNode *VAR_1)
{
    nsIDOMNodeList *VAR_2;
    UINT32 VAR_3;
    nsresult VAR_4;

    VAR_4 = FUNC_3(VAR_1, &VAR_2);
    FUNC_0(VAR_4 == VAR_0);

    VAR_4 = FUNC_1(VAR_2, &VAR_3);
    FUNC_2(VAR_2);
    FUNC_0(VAR_4 == VAR_0);

    return VAR_3;
}
