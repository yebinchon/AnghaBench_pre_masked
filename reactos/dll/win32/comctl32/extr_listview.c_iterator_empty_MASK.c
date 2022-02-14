
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lower; int upper; } ;
struct TYPE_6__ {int nItem; int nSpecial; TYPE_1__ range; } ;
typedef TYPE_2__ ITERATOR ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static inline void FUNC_1(ITERATOR* VAR_0)
{
    FUNC_0(VAR_0, sizeof(*VAR_0));
    VAR_0->nItem = VAR_0->nSpecial = VAR_0->range.lower = VAR_0->range.upper = -1;
}
