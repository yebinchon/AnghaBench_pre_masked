
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int off; int node; } ;
typedef TYPE_1__ rangepoint_t ;
typedef scalar_t__ WCHAR ;
typedef int LONG ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static LONG FUNC_4(rangepoint_t *VAR_2, BOOL VAR_3)
{
    rangepoint_t VAR_4;
    WCHAR VAR_5;

    FUNC_1(&VAR_4, VAR_2->node, VAR_2->off);
    VAR_5 = FUNC_3(&VAR_4);
    if(!VAR_5 || (VAR_3 && FUNC_2(VAR_5)))
        return VAR_0;

    do {
        FUNC_0(VAR_2);
        FUNC_1(VAR_2, VAR_4.node, VAR_4.off);
        VAR_5 = FUNC_3(&VAR_4);
    }while(VAR_5 && !FUNC_2(VAR_5));

    FUNC_0(&VAR_4);
    return VAR_1;
}
