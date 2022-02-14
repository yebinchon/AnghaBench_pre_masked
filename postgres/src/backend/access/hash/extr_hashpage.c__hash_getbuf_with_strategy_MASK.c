
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int BufferAccessStrategy ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,char*) ;

Buffer
FUNC_4(Relation VAR_5, BlockNumber VAR_6,
         int VAR_7, int VAR_8,
         BufferAccessStrategy VAR_9)
{
 Buffer VAR_10;

 if (VAR_6 == VAR_3)
  FUNC_3(VAR_0, "hash AM does not use P_NEW");

 VAR_10 = FUNC_1(VAR_5, VAR_2, VAR_6, VAR_4, VAR_9);

 if (VAR_7 != VAR_1)
  FUNC_0(VAR_10, VAR_7);



 FUNC_2(VAR_5, VAR_10, VAR_8);

 return VAR_10;
}
