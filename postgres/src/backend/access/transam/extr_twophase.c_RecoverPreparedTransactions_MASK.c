
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int gidlen; int nsubxacts; int ncommitrels; int nabortrels; int ninvalmsgs; int database; int owner; int prepared_at; int xid; } ;
typedef TYPE_1__ TwoPhaseFileHeader ;
typedef int TransactionId ;
struct TYPE_9__ {int numPrepXacts; TYPE_2__** prepXacts; } ;
struct TYPE_8__ {int inredo; int ondisk; int prepare_start_lsn; int xid; } ;
typedef int SharedInvalidationMessage ;
typedef int RelFileNode ;
typedef TYPE_2__* GlobalTransaction ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int ,char const*,int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ,int ) ;
 char* FUNC_9 (int ,int ,int ,int,int) ;
 int FUNC_10 (int ,int,int *) ;
 int FUNC_11 (int ,int ) ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char*) ;
 int VAR_5 ;

void
FUNC_15(void)
{
 int VAR_6;

 FUNC_2(VAR_4, VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_3->numPrepXacts; VAR_6++)
 {
  TransactionId VAR_7;
  char *VAR_8;
  GlobalTransaction VAR_9 = VAR_3->prepXacts[VAR_6];
  char *VAR_10;
  TwoPhaseFileHeader *VAR_11;
  TransactionId *VAR_12;
  const char *VAR_13;

  VAR_7 = VAR_9->xid;
  VAR_8 = FUNC_9(VAR_7,
         VAR_9->prepare_start_lsn,
         VAR_9->ondisk, 1, 0);
  if (VAR_8 == ((void*)0))
   continue;

  FUNC_12(VAR_1,
    (FUNC_13("recovering prepared transaction %u from shared memory", VAR_7)));

  VAR_11 = (TwoPhaseFileHeader *) VAR_8;
  FUNC_0(FUNC_11(VAR_11->xid, VAR_7));
  VAR_10 = VAR_8 + FUNC_4(sizeof(TwoPhaseFileHeader));
  VAR_13 = (const char *) VAR_10;
  VAR_10 += FUNC_4(VAR_11->gidlen);
  VAR_12 = (TransactionId *) VAR_10;
  VAR_10 += FUNC_4(VAR_11->nsubxacts * sizeof(TransactionId));
  VAR_10 += FUNC_4(VAR_11->ncommitrels * sizeof(RelFileNode));
  VAR_10 += FUNC_4(VAR_11->nabortrels * sizeof(RelFileNode));
  VAR_10 += FUNC_4(VAR_11->ninvalmsgs * sizeof(SharedInvalidationMessage));





  FUNC_6(VAR_9, VAR_7, VAR_13,
       VAR_11->prepared_at,
       VAR_11->owner, VAR_11->database);


  VAR_9->inredo = 0;

  FUNC_1(VAR_9, VAR_11->nsubxacts, VAR_12);
  FUNC_5(VAR_9, 1);

  FUNC_3(VAR_4);




  FUNC_8(VAR_10, VAR_7, VAR_5);






  if (VAR_0)
   FUNC_10(VAR_7, VAR_11->nsubxacts, VAR_12);





  FUNC_7();

  FUNC_14(VAR_8);

  FUNC_2(VAR_4, VAR_2);
 }

 FUNC_3(VAR_4);
}
