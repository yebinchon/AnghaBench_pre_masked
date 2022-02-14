
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node; int off; } ;
typedef TYPE_1__ rangepoint_t ;
typedef scalar_t__ nsresult ;
typedef int nsIDOMNode ;
typedef scalar_t__ UINT32 ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int **) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static BOOL FUNC_7(rangepoint_t *VAR_3)
{
    nsIDOMNode *VAR_4;
    UINT32 VAR_5;
    nsresult VAR_6;


    VAR_4 = FUNC_3(VAR_3->node, VAR_3->off);
    if(VAR_4) {
        FUNC_1(VAR_3);
        FUNC_4(VAR_3, VAR_4, 0);
        FUNC_6(VAR_4);
        return VAR_2;
    }


    VAR_6 = FUNC_5(VAR_3->node, &VAR_4);
    FUNC_0(VAR_6 == VAR_1);
    if(!VAR_4)
        return VAR_0;

    VAR_5 = FUNC_2(VAR_4, VAR_3->node)+1;
    FUNC_1(VAR_3);
    FUNC_4(VAR_3, VAR_4, VAR_5);
    FUNC_6(VAR_4);
    return VAR_2;
}
