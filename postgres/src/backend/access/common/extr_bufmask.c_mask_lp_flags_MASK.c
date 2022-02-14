
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lp_flags; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_1__* ItemId ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(Page VAR_2)
{
 OffsetNumber VAR_3,
    VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 for (VAR_3 = VAR_0;
   VAR_3 <= VAR_4;
   VAR_3 = FUNC_1(VAR_3))
 {
  ItemId VAR_5 = FUNC_2(VAR_2, VAR_3);

  if (FUNC_0(VAR_5))
   VAR_5->lp_flags = VAR_1;
 }
}
