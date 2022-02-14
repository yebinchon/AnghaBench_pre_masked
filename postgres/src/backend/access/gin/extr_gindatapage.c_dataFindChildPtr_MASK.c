
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ maxoff; } ;
typedef int PostingItem ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int GinBtree ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static OffsetNumber
FUNC_6(GinBtree VAR_2, Page VAR_3, BlockNumber VAR_4, OffsetNumber VAR_5)
{
 OffsetNumber VAR_6,
    VAR_7 = FUNC_2(VAR_3)->maxoff;
 PostingItem *VAR_8;

 FUNC_0(!FUNC_4(VAR_3));
 FUNC_0(FUNC_3(VAR_3));


 if (VAR_5 >= VAR_0 && VAR_5 <= VAR_7)
 {
  VAR_8 = FUNC_1(VAR_3, VAR_5);
  if (FUNC_5(VAR_8) == VAR_4)
   return VAR_5;





  for (VAR_6 = VAR_5 + 1; VAR_6 <= VAR_7; VAR_6++)
  {
   VAR_8 = FUNC_1(VAR_3, VAR_6);
   if (FUNC_5(VAR_8) == VAR_4)
    return VAR_6;
  }

  VAR_7 = VAR_5 - 1;
 }


 for (VAR_6 = VAR_0; VAR_6 <= VAR_7; VAR_6++)
 {
  VAR_8 = FUNC_1(VAR_3, VAR_6);
  if (FUNC_5(VAR_8) == VAR_4)
   return VAR_6;
 }

 return VAR_1;
}
