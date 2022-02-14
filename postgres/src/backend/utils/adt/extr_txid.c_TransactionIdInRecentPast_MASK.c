
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64 ;
typedef scalar_t__ uint32 ;
typedef scalar_t__ TransactionId ;
struct TYPE_2__ {int oldestClogXid; } ;
typedef int FullTransactionId ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static bool
FUNC_13(uint64 VAR_5, TransactionId *VAR_6)
{
 uint32 VAR_7 = (uint32) (VAR_5 >> 32);
 TransactionId VAR_8 = (TransactionId) VAR_5;
 uint32 VAR_9;
 TransactionId VAR_10;
 FullTransactionId VAR_11;

 VAR_11 = FUNC_3();
 VAR_10 = FUNC_8(VAR_11);
 VAR_9 = FUNC_1(VAR_11);

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_8;

 if (!FUNC_5(VAR_8))
  return 0;


 if (!FUNC_4(VAR_8))
  return 1;


 if (VAR_5 >= FUNC_7(VAR_11))
  FUNC_9(VAR_2,
    (FUNC_10(VAR_1),
     FUNC_11("transaction ID %s is in the future",
      FUNC_12(VAR_4, VAR_5))));
 FUNC_0(FUNC_2(VAR_0));







 if (VAR_7 + 1 < VAR_9
  || (VAR_7 + 1 == VAR_9 && VAR_8 < VAR_10)
  || FUNC_6(VAR_8, VAR_3->oldestClogXid))
  return 0;

 return 1;
}
