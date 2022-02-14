
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ HeapTupleHeader ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_10(Buffer VAR_3, bool *VAR_4)
{
 Page VAR_5 = FUNC_0(VAR_3);
 OffsetNumber VAR_6,
    VAR_7;
 HeapTupleHeader VAR_8;

 *VAR_4 = 0;







 if (FUNC_8(VAR_5) || FUNC_7(VAR_5))
  return 0;

 VAR_7 = FUNC_6(VAR_5);
 for (VAR_6 = VAR_0;
   VAR_6 <= VAR_7;
   VAR_6 = FUNC_3(VAR_6))
 {
  ItemId VAR_9;

  VAR_9 = FUNC_5(VAR_5, VAR_6);


  if (FUNC_2(VAR_9))
   *VAR_4 = 1;


  if (!FUNC_1(VAR_9))
   continue;

  VAR_8 = (HeapTupleHeader) FUNC_4(VAR_5, VAR_9);

  if (FUNC_9(VAR_8, VAR_1,
         VAR_2, VAR_3))
   return 1;
 }

 return 0;
}
