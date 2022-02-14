
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iBand; int flags; int pt; } ;
typedef int REBAR_INFO ;
typedef int LRESULT ;
typedef TYPE_1__* LPRBHITTESTINFO ;


 int FUNC_0 (int const*,int *,int *,int*) ;

__attribute__((used)) static LRESULT
FUNC_1 (const REBAR_INFO *VAR_0, LPRBHITTESTINFO VAR_1)
{
    if (!VAR_1)
 return -1;

    FUNC_0 (VAR_0, &VAR_1->pt, &VAR_1->flags, &VAR_1->iBand);

    return VAR_1->iBand;
}
