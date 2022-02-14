
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef int Buffer ;
typedef int BTPageOpaque ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,scalar_t__*,int,int ) ;

__attribute__((used)) static void
FUNC_10(Relation VAR_1, Buffer VAR_2, Relation VAR_3)
{
 OffsetNumber VAR_4[VAR_0];
 int VAR_5 = 0;
 OffsetNumber VAR_6,
    VAR_7,
    VAR_8;
 Page VAR_9 = FUNC_1(VAR_2);
 BTPageOpaque VAR_10 = (BTPageOpaque) FUNC_8(VAR_9);

 FUNC_0(FUNC_5(VAR_10));





 VAR_7 = FUNC_4(VAR_10);
 VAR_8 = FUNC_7(VAR_9);
 for (VAR_6 = VAR_7;
   VAR_6 <= VAR_8;
   VAR_6 = FUNC_3(VAR_6))
 {
  ItemId VAR_11 = FUNC_6(VAR_9, VAR_6);

  if (FUNC_2(VAR_11))
   VAR_4[VAR_5++] = VAR_6;
 }

 if (VAR_5 > 0)
  FUNC_9(VAR_1, VAR_2, VAR_4, VAR_5, VAR_3);







}
