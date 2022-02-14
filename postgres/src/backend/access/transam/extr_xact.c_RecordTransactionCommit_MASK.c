
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_2__ {int delayChkpt; } ;
typedef int SharedInvalidationMessage ;
typedef int RelFileNode ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,int *,int) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 scalar_t__ VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ,int,int *,scalar_t__) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,int *) ;
 int FUNC_12 (int ,int,int *,scalar_t__,scalar_t__,int) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_16 (scalar_t__,int,int *,int,int *,int,int *,int,scalar_t__,int ,int ,int *) ;
 int FUNC_17 (int ,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_20 (int,int **) ;
 scalar_t__ VAR_13 ;
 int FUNC_21 (int **) ;
 int FUNC_22 (int **,int*) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static TransactionId
FUNC_23(void)
{
 TransactionId VAR_15 = FUNC_3();
 bool VAR_16 = FUNC_10(VAR_15);
 TransactionId VAR_17 = VAR_3;
 int VAR_18;
 RelFileNode *VAR_19;
 int VAR_20;
 TransactionId *VAR_21;
 int VAR_22 = 0;
 SharedInvalidationMessage *VAR_23 = ((void*)0);
 bool VAR_24 = 0;
 bool VAR_25;


 VAR_18 = FUNC_20(1, &VAR_19);
 VAR_20 = FUNC_21(&VAR_21);
 if (FUNC_15())
  VAR_22 = FUNC_22(&VAR_23,
              &VAR_24);
 VAR_25 = (VAR_8 != 0);





 if (!VAR_16)
 {






  if (VAR_18 != 0)
   FUNC_17(VAR_1, "cannot commit a transaction that deleted files but has no xid");


  FUNC_0(VAR_20 == 0);
  if (VAR_22 != 0)
  {
   FUNC_4(VAR_22, VAR_23,
         VAR_24);
   VAR_25 = 1;
  }







  if (!VAR_25)
   goto cleanup;
 }
 else
 {
  bool VAR_26;





  VAR_26 = (VAR_10 != VAR_2 &&
       VAR_10 != VAR_0);





  FUNC_1();
  FUNC_5();
  VAR_4->delayChkpt = 1;

  FUNC_6();

  FUNC_16(VAR_14,
       VAR_20, VAR_21, VAR_18, VAR_19,
       VAR_22, VAR_23,
       VAR_24, VAR_9,
       VAR_5,
       VAR_3, ((void*)0) );

  if (VAR_26)

   FUNC_19(VAR_11,
            VAR_8);
  if (!VAR_26 || VAR_12 == 0)
   VAR_12 = VAR_14;

  FUNC_12(VAR_15, VAR_20, VAR_21,
            VAR_12,
            VAR_10, 0);
 }
 if ((VAR_25 && VAR_16 &&
   VAR_13 > VAR_6) ||
  VAR_9 || VAR_18 > 0)
 {
  FUNC_13(VAR_8);




  if (VAR_16)
   FUNC_9(VAR_15, VAR_20, VAR_21);
 }
 else
 {
  FUNC_14(VAR_8);






  if (VAR_16)
   FUNC_8(VAR_15, VAR_20, VAR_21, VAR_8);
 }





 if (VAR_16)
 {
  VAR_4->delayChkpt = 0;
  FUNC_2();
 }


 VAR_17 = FUNC_11(VAR_15, VAR_20, VAR_21);
 if (VAR_25 && VAR_16)
  FUNC_7(VAR_8, 1);


 VAR_7 = VAR_8;


 VAR_8 = 0;
cleanup:

 if (VAR_19)
  FUNC_18(VAR_19);

 return VAR_17;
}
