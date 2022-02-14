
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ UIState; int self; } ;
typedef scalar_t__ LONG ;
typedef TYPE_1__ LB_DESCR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static BOOL FUNC_1(LB_DESCR *VAR_1)
{
    LONG VAR_2;

    VAR_2 = VAR_1->UIState;
    VAR_1->UIState = FUNC_0(VAR_1->self, VAR_0, 0, 0);
    return VAR_2 != VAR_1->UIState;
}
