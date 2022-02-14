
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TransactionId ;
typedef int Relation ;
typedef scalar_t__ MultiXactId ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 () ;
 int VAR_2 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_14(Relation VAR_9,
       int VAR_10,
       int VAR_11,
       int VAR_12,
       int VAR_13,
       TransactionId *VAR_14,
       TransactionId *VAR_15,
       TransactionId *VAR_16,
       MultiXactId *VAR_17,
       MultiXactId *VAR_18)
{
 int VAR_19;
 int VAR_20;
 int VAR_21;
 TransactionId VAR_22;
 TransactionId VAR_23;
 MultiXactId VAR_24;
 MultiXactId VAR_25;
 MultiXactId VAR_26;
 *VAR_14 =
  FUNC_9(FUNC_2(VAR_9, VAR_2), VAR_9);

 FUNC_0(FUNC_8(*VAR_14));







 VAR_19 = VAR_10;
 if (VAR_19 < 0)
  VAR_19 = VAR_5;
 VAR_19 = FUNC_3(VAR_19, VAR_4 / 2);
 FUNC_0(VAR_19 >= 0);




 VAR_22 = *VAR_14 - VAR_19;
 if (!FUNC_8(VAR_22))
  VAR_22 = VAR_1;






 VAR_23 = FUNC_6() - VAR_4;
 if (!FUNC_8(VAR_23))
  VAR_23 = VAR_1;

 if (FUNC_10(VAR_22, VAR_23))
 {
  FUNC_11(VAR_3,
    (FUNC_13("oldest xmin is far in the past"),
     FUNC_12("Close open transactions soon to avoid wraparound problems.\n"
       "You might also need to commit or roll back old prepared transactions, or drop stale replication slots.")));
  VAR_22 = *VAR_14;
 }

 *VAR_15 = VAR_22;






 VAR_21 = FUNC_5();







 VAR_20 = VAR_12;
 if (VAR_20 < 0)
  VAR_20 = VAR_7;
 VAR_20 = FUNC_3(VAR_20,
       VAR_21 / 2);
 FUNC_0(VAR_20 >= 0);


 VAR_24 = FUNC_1();
 VAR_25 = VAR_24 - VAR_20;
 if (VAR_25 < VAR_0)
  VAR_25 = VAR_0;

 VAR_26 =
  FUNC_7() - VAR_21;
 if (VAR_26 < VAR_0)
  VAR_26 = VAR_0;

 if (FUNC_4(VAR_25, VAR_26))
 {
  FUNC_11(VAR_3,
    (FUNC_13("oldest multixact is far in the past"),
     FUNC_12("Close open transactions with multixacts soon to avoid wraparound problems.")));

  if (FUNC_4(VAR_24, VAR_26))
   VAR_25 = VAR_24;
  else
   VAR_25 = VAR_26;
 }

 *VAR_17 = VAR_25;

 if (VAR_16 != ((void*)0))
 {
  int VAR_27;

  FUNC_0(VAR_18 != ((void*)0));
  VAR_27 = VAR_11;
  if (VAR_27 < 0)
   VAR_27 = VAR_6;
  VAR_27 = FUNC_3(VAR_27, VAR_4 * 0.95);
  FUNC_0(VAR_27 >= 0);





  VAR_22 = FUNC_6() - VAR_27;
  if (!FUNC_8(VAR_22))
   VAR_22 = VAR_1;

  *VAR_16 = VAR_22;
  VAR_27 = VAR_13;
  if (VAR_27 < 0)
   VAR_27 = VAR_8;
  VAR_27 = FUNC_3(VAR_27,
        VAR_21 * 0.95);
  FUNC_0(VAR_27 >= 0);





  VAR_25 = FUNC_7() - VAR_27;
  if (VAR_25 < VAR_0)
   VAR_25 = VAR_0;

  *VAR_18 = VAR_25;
 }
 else
 {
  FUNC_0(VAR_18 == ((void*)0));
 }
}
