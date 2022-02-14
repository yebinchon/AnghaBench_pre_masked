
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int ForkNumber ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,...) ;

Buffer
FUNC_9(Relation VAR_5, BlockNumber VAR_6, ForkNumber VAR_7)
{
 BlockNumber VAR_8 = FUNC_5(VAR_5, VAR_7);
 Buffer VAR_9;

 if (VAR_6 == VAR_2)
  FUNC_8(VAR_0, "hash AM does not use P_NEW");
 if (VAR_6 > VAR_8)
  FUNC_8(VAR_0, "access to noncontiguous page in hash index \"%s\"",
    FUNC_6(VAR_5));


 if (VAR_6 == VAR_8)
 {
  VAR_9 = FUNC_4(VAR_5, VAR_7, VAR_2, VAR_3, ((void*)0));
  if (FUNC_0(VAR_9) != VAR_6)
   FUNC_8(VAR_0, "unexpected hash relation size: %u, should be %u",
     FUNC_0(VAR_9), VAR_6);
  FUNC_3(VAR_9, VAR_1);
 }
 else
 {
  VAR_9 = FUNC_4(VAR_5, VAR_7, VAR_6, VAR_4,
         ((void*)0));
 }




 FUNC_7(FUNC_1(VAR_9), FUNC_2(VAR_9));

 return VAR_9;
}
