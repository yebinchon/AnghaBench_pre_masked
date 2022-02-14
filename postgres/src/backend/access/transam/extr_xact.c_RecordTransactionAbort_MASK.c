
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;
typedef int TimestampTz ;
typedef int RelFileNode ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int ,int,int *,int,int *,int ,int ,int *) ;
 int FUNC_11 (int ,int,int *,int ) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,int **) ;
 int FUNC_15 (int **) ;
 int VAR_4 ;

__attribute__((used)) static TransactionId
FUNC_16(bool VAR_5)
{
 TransactionId VAR_6 = FUNC_2();
 TransactionId VAR_7;
 int VAR_8;
 RelFileNode *VAR_9;
 int VAR_10;
 TransactionId *VAR_11;
 TimestampTz VAR_12;







 if (!FUNC_7(VAR_6))
 {

  if (!VAR_5)
   VAR_3 = 0;
  return VAR_0;
 }
 if (FUNC_6(VAR_6))
  FUNC_12(VAR_2, "cannot abort transaction %u, it was already committed",
    VAR_6);


 VAR_8 = FUNC_14(0, &VAR_9);
 VAR_10 = FUNC_15(&VAR_11);


 FUNC_3();


 if (VAR_5)
  VAR_12 = FUNC_1();
 else
 {
  FUNC_4();
  VAR_12 = VAR_4;
 }

 FUNC_10(VAR_12,
        VAR_10, VAR_11,
        VAR_8, VAR_9,
        VAR_1, VAR_0,
        ((void*)0));
 if (!VAR_5)
  FUNC_9(VAR_3);
 FUNC_5(VAR_6, VAR_10, VAR_11);

 FUNC_0();


 VAR_7 = FUNC_8(VAR_6, VAR_10, VAR_11);







 if (VAR_5)
  FUNC_11(VAR_6, VAR_10, VAR_11, VAR_7);


 if (!VAR_5)
  VAR_3 = 0;


 if (VAR_9)
  FUNC_13(VAR_9);

 return VAR_7;
}
