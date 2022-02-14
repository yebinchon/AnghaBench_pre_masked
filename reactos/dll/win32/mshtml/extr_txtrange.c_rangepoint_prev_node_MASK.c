
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node; scalar_t__ off; } ;
typedef TYPE_1__ rangepoint_t ;
typedef scalar_t__ nsresult ;
typedef int nsIDOMNode ;
typedef int UINT32 ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_8 (int ,int **) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static BOOL FUNC_10(rangepoint_t *VAR_4)
{
    nsIDOMNode *VAR_5;
    UINT32 VAR_6;
    nsresult VAR_7;


    if(VAR_4->off) {
        VAR_5 = FUNC_4(VAR_4->node, VAR_4->off-1);
        FUNC_0(VAR_5 != ((void*)0));

        VAR_6 = FUNC_5(VAR_5) == VAR_2 ? FUNC_6(VAR_5) : FUNC_2(VAR_5);
        FUNC_1(VAR_4);
        FUNC_7(VAR_4, VAR_5, VAR_6);
        FUNC_9(VAR_5);
        return VAR_3;
    }


    VAR_7 = FUNC_8(VAR_4->node, &VAR_5);
    FUNC_0(VAR_7 == VAR_1);
    if(!VAR_5)
        return VAR_0;

    VAR_6 = FUNC_3(VAR_5, VAR_4->node);
    FUNC_1(VAR_4);
    FUNC_7(VAR_4, VAR_5, VAR_6);
    return VAR_3;
}
