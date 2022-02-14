
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int BRbtnState; int TLbtnState; int hwndSelf; } ;
typedef TYPE_1__ PAGER_INFO ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static inline LRESULT
FUNC_1 (const PAGER_INFO* VAR_3, INT VAR_4)
{
    LRESULT VAR_5 = VAR_2;
    FUNC_0("[%p]\n", VAR_3->hwndSelf);

    if (VAR_4 == VAR_1)
        VAR_5 = VAR_3->TLbtnState;
    else if (VAR_4 == VAR_0)
        VAR_5 = VAR_3->BRbtnState;

    return VAR_5;
}
