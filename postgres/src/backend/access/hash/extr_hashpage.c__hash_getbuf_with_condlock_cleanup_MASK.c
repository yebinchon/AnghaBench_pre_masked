
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,char*) ;

Buffer
FUNC_5(Relation VAR_3, BlockNumber VAR_4, int VAR_5)
{
 Buffer VAR_6;

 if (VAR_4 == VAR_2)
  FUNC_4(VAR_0, "hash AM does not use P_NEW");

 VAR_6 = FUNC_1(VAR_3, VAR_4);

 if (!FUNC_0(VAR_6))
 {
  FUNC_2(VAR_6);
  return VAR_1;
 }



 FUNC_3(VAR_3, VAR_6, VAR_5);

 return VAR_6;
}
