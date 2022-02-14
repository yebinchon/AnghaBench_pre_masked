
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Page ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;
typedef int GinBtree ;
typedef int BlockNumber ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ,scalar_t__,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

void
FUNC_6(GinBtree VAR_2, Page VAR_3,
     BlockNumber VAR_4, Page VAR_5,
     BlockNumber VAR_6, Page VAR_7)
{
 IndexTuple VAR_8;

 VAR_8 = FUNC_0(FUNC_4(VAR_5), VAR_5, VAR_4);
 if (FUNC_2(VAR_3, (Item) VAR_8, FUNC_1(VAR_8), VAR_1, 0, 0) == VAR_1)
  FUNC_3(VAR_0, "failed to add item to index root page");
 FUNC_5(VAR_8);

 VAR_8 = FUNC_0(FUNC_4(VAR_7), VAR_7, VAR_6);
 if (FUNC_2(VAR_3, (Item) VAR_8, FUNC_1(VAR_8), VAR_1, 0, 0) == VAR_1)
  FUNC_3(VAR_0, "failed to add item to index root page");
 FUNC_5(VAR_8);
}
