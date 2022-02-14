
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* item; } ;
struct TYPE_4__ {scalar_t__* pcls; } ;
typedef TYPE_2__ IsolatedRun ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(IsolatedRun *VAR_1, int VAR_2)
{

    if (VAR_2 <= 0) return -1;
    VAR_2 --;
    while (VAR_2 > -1 && *VAR_1->item[VAR_2].pcls == VAR_0) VAR_2--;
    return VAR_2;
}
