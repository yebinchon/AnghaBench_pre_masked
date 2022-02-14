
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_3__ {int gidlen; int nsubxacts; int xid; } ;
typedef TYPE_1__ TwoPhaseFileHeader ;
typedef int TransactionId ;
struct TYPE_4__ {int nextFullXid; } ;
typedef int FullTransactionId ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 char* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__,char**,int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int ) ;

__attribute__((used)) static char *
FUNC_18(TransactionId VAR_7,
       XLogRecPtr VAR_8,
       bool VAR_9,
       bool VAR_10, bool VAR_11)
{
 FullTransactionId VAR_12 = VAR_4->nextFullXid;
 TransactionId VAR_13 = FUNC_13(VAR_12);
 TransactionId *VAR_14;
 char *VAR_15;
 TwoPhaseFileHeader *VAR_16;
 int VAR_17;

 FUNC_1(FUNC_2(VAR_5, VAR_3));

 if (!VAR_9)
  FUNC_1(VAR_8 != VAR_2);


 if (FUNC_9(VAR_7) || FUNC_8(VAR_7))
 {
  if (VAR_9)
  {
   FUNC_15(VAR_6,
     (FUNC_17("removing stale two-phase state file for transaction %u",
       VAR_7)));
   FUNC_6(VAR_7, 1);
  }
  else
  {
   FUNC_15(VAR_6,
     (FUNC_17("removing stale two-phase state from memory for transaction %u",
       VAR_7)));
   FUNC_4(VAR_7, 1);
  }
  return ((void*)0);
 }


 if (FUNC_12(VAR_7, VAR_13))
 {
  if (VAR_9)
  {
   FUNC_15(VAR_6,
     (FUNC_17("removing future two-phase state file for transaction %u",
       VAR_7)));
   FUNC_6(VAR_7, 1);
  }
  else
  {
   FUNC_15(VAR_6,
     (FUNC_17("removing future two-phase state from memory for transaction %u",
       VAR_7)));
   FUNC_4(VAR_7, 1);
  }
  return ((void*)0);
 }

 if (VAR_9)
 {

  VAR_15 = FUNC_5(VAR_7, 0);
 }
 else
 {

  FUNC_14(VAR_8, &VAR_15, ((void*)0));
 }


 VAR_16 = (TwoPhaseFileHeader *) VAR_15;
 if (!FUNC_10(VAR_16->xid, VAR_7))
 {
  if (VAR_9)
   FUNC_15(VAR_1,
     (FUNC_16(VAR_0),
      FUNC_17("corrupted two-phase state file for transaction %u",
       VAR_7)));
  else
   FUNC_15(VAR_1,
     (FUNC_16(VAR_0),
      FUNC_17("corrupted two-phase state in memory for transaction %u",
       VAR_7)));
 }





 VAR_14 = (TransactionId *) (VAR_15 +
         FUNC_3(sizeof(TwoPhaseFileHeader)) +
         FUNC_3(VAR_16->gidlen));
 for (VAR_17 = 0; VAR_17 < VAR_16->nsubxacts; VAR_17++)
 {
  TransactionId VAR_18 = VAR_14[VAR_17];

  FUNC_1(FUNC_11(VAR_18, VAR_7));


  if (VAR_11)
   FUNC_0(VAR_18);

  if (VAR_10)
   FUNC_7(VAR_18, VAR_7);
 }

 return VAR_15;
}
