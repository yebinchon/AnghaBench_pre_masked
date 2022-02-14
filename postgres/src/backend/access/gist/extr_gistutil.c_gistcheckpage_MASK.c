
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Page ;
typedef int GISTPageOpaqueData ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int ) ;

void
FUNC_10(Relation VAR_2, Buffer VAR_3)
{
 Page VAR_4 = FUNC_1(VAR_3);







 if (FUNC_4(VAR_4))
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_9("index \"%s\" contains unexpected zero page at block %u",
      FUNC_5(VAR_2),
      FUNC_0(VAR_3)),
     FUNC_8("Please REINDEX it.")));




 if (FUNC_3(VAR_4) != FUNC_2(sizeof(GISTPageOpaqueData)))
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_9("index \"%s\" contains corrupted page at block %u",
      FUNC_5(VAR_2),
      FUNC_0(VAR_3)),
     FUNC_8("Please REINDEX it.")));
}
