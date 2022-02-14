
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* items; } ;
struct TYPE_4__ {int iOrder; } ;
typedef int LRESULT ;
typedef size_t INT ;
typedef TYPE_1__ HEADER_ITEM ;
typedef TYPE_2__ HEADER_INFO ;



__attribute__((used)) static inline LRESULT
FUNC_0 (const HEADER_INFO *VAR_0, INT VAR_1)
{
    HEADER_ITEM *VAR_2 = &VAR_0->items[VAR_1];
    return VAR_2->iOrder;
}
