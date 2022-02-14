
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ uNumItem; int items; } ;
typedef int TAB_ITEM ;
typedef TYPE_1__ TAB_INFO ;
typedef scalar_t__ INT ;


 int * FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline TAB_ITEM* FUNC_2(const TAB_INFO *VAR_0, INT VAR_1)
{
    FUNC_1(VAR_1 >= 0 && VAR_1 < VAR_0->uNumItem);
    return FUNC_0(VAR_0->items, VAR_1);
}
