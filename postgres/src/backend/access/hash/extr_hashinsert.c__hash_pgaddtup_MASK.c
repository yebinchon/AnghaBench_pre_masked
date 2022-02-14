
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int Size ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,int ) ;

OffsetNumber
FUNC_7(Relation VAR_4, Buffer VAR_5, Size VAR_6, IndexTuple VAR_7)
{
 OffsetNumber VAR_8;
 Page VAR_9;
 uint32 VAR_10;

 FUNC_4(VAR_4, VAR_5, VAR_2 | VAR_3);
 VAR_9 = FUNC_0(VAR_5);


 VAR_10 = FUNC_5(VAR_7);
 VAR_8 = FUNC_3(VAR_9, VAR_10);

 if (FUNC_1(VAR_9, (Item) VAR_7, VAR_6, VAR_8, 0, 0)
  == VAR_1)
  FUNC_6(VAR_0, "failed to add index item to \"%s\"",
    FUNC_2(VAR_4));

 return VAR_8;
}
