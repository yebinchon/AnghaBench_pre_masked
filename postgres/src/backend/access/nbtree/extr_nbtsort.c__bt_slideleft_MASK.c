
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pd_lower; } ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemIdData ;
typedef int * ItemId ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(Page VAR_2)
{
 OffsetNumber VAR_3;
 OffsetNumber VAR_4;
 ItemId VAR_5;
 ItemId VAR_6;

 if (!FUNC_3(VAR_2))
 {
  VAR_4 = FUNC_2(VAR_2);
  VAR_5 = FUNC_1(VAR_2, VAR_1);
  for (VAR_3 = VAR_0; VAR_3 <= VAR_4; VAR_3 = FUNC_0(VAR_3))
  {
   VAR_6 = FUNC_1(VAR_2, VAR_3);
   *VAR_5 = *VAR_6;
   VAR_5 = VAR_6;
  }
  ((PageHeader) VAR_2)->pd_lower -= sizeof(ItemIdData);
 }
}
