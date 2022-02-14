
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Size ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,scalar_t__,int,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int,int) ;

void
FUNC_6(Page VAR_3, IndexTuple *VAR_4, int VAR_5, OffsetNumber VAR_6)
{
 OffsetNumber VAR_7 = VAR_2;
 int VAR_8;

 if (VAR_6 == VAR_2)
  VAR_6 = (FUNC_4(VAR_3)) ? VAR_1 :
   FUNC_1(FUNC_3(VAR_3));

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
 {
  Size VAR_9 = FUNC_0(VAR_4[VAR_8]);

  VAR_7 = FUNC_2(VAR_3, (Item) VAR_4[VAR_8], VAR_9, VAR_6, 0, 0);
  if (VAR_7 == VAR_2)
   FUNC_5(VAR_0, "failed to add item to GiST index page, item %d out of %d, size %d bytes",
     VAR_8, VAR_5, (int) VAR_9);
  VAR_6++;
 }
}
