
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(Buffer VAR_0,
      OffsetNumber *VAR_1, int VAR_2,
      OffsetNumber *VAR_3, int VAR_4,
      OffsetNumber *VAR_5, int VAR_6)
{
 Page VAR_7 = (Page) FUNC_0(VAR_0);
 OffsetNumber *VAR_8;
 int VAR_9;


 VAR_8 = VAR_1;
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
 {
  OffsetNumber VAR_10 = *VAR_8++;
  OffsetNumber VAR_11 = *VAR_8++;
  ItemId VAR_12 = FUNC_4(VAR_7, VAR_10);

  FUNC_2(VAR_12, VAR_11);
 }


 VAR_8 = VAR_3;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
 {
  OffsetNumber VAR_13 = *VAR_8++;
  ItemId VAR_14 = FUNC_4(VAR_7, VAR_13);

  FUNC_1(VAR_14);
 }


 VAR_8 = VAR_5;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
 {
  OffsetNumber VAR_15 = *VAR_8++;
  ItemId VAR_16 = FUNC_4(VAR_7, VAR_15);

  FUNC_3(VAR_16);
 }





 FUNC_5(VAR_7);
}
