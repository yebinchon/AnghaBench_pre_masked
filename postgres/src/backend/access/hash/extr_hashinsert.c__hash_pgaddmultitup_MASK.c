
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int uint16 ;
typedef int Size ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*,int ) ;

void
FUNC_9(Relation VAR_4, Buffer VAR_5, IndexTuple *VAR_6,
     OffsetNumber *VAR_7, uint16 VAR_8)
{
 OffsetNumber VAR_9;
 Page VAR_10;
 uint32 VAR_11;
 int VAR_12;

 FUNC_6(VAR_4, VAR_5, VAR_2 | VAR_3);
 VAR_10 = FUNC_0(VAR_5);

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
 {
  Size VAR_13;

  VAR_13 = FUNC_1(VAR_6[VAR_12]);
  VAR_13 = FUNC_2(VAR_13);


  VAR_11 = FUNC_7(VAR_6[VAR_12]);
  VAR_9 = FUNC_5(VAR_10, VAR_11);

  VAR_7[VAR_12] = VAR_9;

  if (FUNC_3(VAR_10, (Item) VAR_6[VAR_12], VAR_13, VAR_9, 0, 0)
   == VAR_1)
   FUNC_8(VAR_0, "failed to add index item to \"%s\"",
     FUNC_4(VAR_4));
 }
}
