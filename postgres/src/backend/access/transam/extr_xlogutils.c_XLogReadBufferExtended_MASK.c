
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SMgrRelation ;
typedef int RelFileNode ;
typedef scalar_t__ ReadBufferMode ;
typedef int Page ;
typedef int ForkNumber ;
typedef scalar_t__ Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ,scalar_t__,int) ;
 int FUNC_8 (int ,int ,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

Buffer
FUNC_11(RelFileNode VAR_9, ForkNumber VAR_10,
        BlockNumber VAR_11, ReadBufferMode VAR_12)
{
 BlockNumber VAR_13;
 Buffer VAR_14;
 SMgrRelation VAR_15;

 FUNC_0(VAR_11 != VAR_4);


 VAR_15 = FUNC_10(VAR_9, VAR_2);
 FUNC_8(VAR_15, VAR_10, 1);

 VAR_13 = FUNC_9(VAR_15, VAR_10);

 if (VAR_11 < VAR_13)
 {

  VAR_14 = FUNC_5(VAR_9, VAR_10, VAR_11,
             VAR_12, ((void*)0));
 }
 else
 {

  if (VAR_12 == VAR_5)
  {
   FUNC_7(VAR_9, VAR_10, VAR_11, 0);
   return VAR_3;
  }
  if (VAR_12 == VAR_6)
   return VAR_3;


  FUNC_0(VAR_1);
  VAR_14 = VAR_3;
  do
  {
   if (VAR_14 != VAR_3)
   {
    if (VAR_12 == VAR_8 || VAR_12 == VAR_7)
     FUNC_3(VAR_14, VAR_0);
    FUNC_6(VAR_14);
   }
   VAR_14 = FUNC_5(VAR_9, VAR_10,
              VAR_4, VAR_12, ((void*)0));
  }
  while (FUNC_1(VAR_14) < VAR_11);

  if (FUNC_1(VAR_14) != VAR_11)
  {
   if (VAR_12 == VAR_8 || VAR_12 == VAR_7)
    FUNC_3(VAR_14, VAR_0);
   FUNC_6(VAR_14);
   VAR_14 = FUNC_5(VAR_9, VAR_10, VAR_11,
              VAR_12, ((void*)0));
  }
 }

 if (VAR_12 == VAR_5)
 {

  Page VAR_16 = (Page) FUNC_2(VAR_14);






  if (FUNC_4(VAR_16))
  {
   FUNC_6(VAR_14);
   FUNC_7(VAR_9, VAR_10, VAR_11, 1);
   return VAR_3;
  }
 }

 return VAR_14;
}
