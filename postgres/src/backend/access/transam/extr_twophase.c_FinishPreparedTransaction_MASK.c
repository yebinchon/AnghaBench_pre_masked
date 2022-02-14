
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int gidlen; int nsubxacts; int ncommitrels; int nabortrels; int ninvalmsgs; scalar_t__ initfileinval; int xid; } ;
typedef TYPE_1__ TwoPhaseFileHeader ;
typedef int TransactionId ;
struct TYPE_10__ {TYPE_2__* allPgXact; int * allProcs; } ;
struct TYPE_9__ {size_t pgprocno; int valid; scalar_t__ ondisk; int prepare_start_lsn; } ;
struct TYPE_8__ {int xid; } ;
typedef int SharedInvalidationMessage ;
typedef int RelFileNode ;
typedef TYPE_2__ PGXACT ;
typedef int PGPROC ;
typedef TYPE_3__* GlobalTransaction ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_7 (char const*,int ) ;
 int FUNC_8 (int) ;
 int * VAR_1 ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *,int ) ;
 TYPE_5__* VAR_2 ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 () ;
 char* FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int,int *,int,int *,char const*) ;
 int FUNC_15 (int ,int,int *,int,int *,int,int *,scalar_t__,char const*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int,int *) ;
 int VAR_3 ;
 int FUNC_23 (int ,char**,int *) ;
 int FUNC_24 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_25(const char *VAR_6, bool VAR_7)
{
 GlobalTransaction VAR_8;
 PGPROC *VAR_9;
 PGXACT *VAR_10;
 TransactionId VAR_11;
 char *VAR_12;
 char *VAR_13;
 TwoPhaseFileHeader *VAR_14;
 TransactionId VAR_15;
 TransactionId *VAR_16;
 RelFileNode *VAR_17;
 RelFileNode *VAR_18;
 RelFileNode *VAR_19;
 int VAR_20;
 SharedInvalidationMessage *VAR_21;





 VAR_8 = FUNC_7(VAR_6, FUNC_3());
 VAR_9 = &VAR_2->allProcs[VAR_8->pgprocno];
 VAR_10 = &VAR_2->allPgXact[VAR_8->pgprocno];
 VAR_11 = VAR_10->xid;






 if (VAR_8->ondisk)
  VAR_12 = FUNC_13(VAR_11, 0);
 else
  FUNC_23(VAR_8->prepare_start_lsn, &VAR_12, ((void*)0));





 VAR_14 = (TwoPhaseFileHeader *) VAR_12;
 FUNC_0(FUNC_21(VAR_14->xid, VAR_11));
 VAR_13 = VAR_12 + FUNC_8(sizeof(TwoPhaseFileHeader));
 VAR_13 += FUNC_8(VAR_14->gidlen);
 VAR_16 = (TransactionId *) VAR_13;
 VAR_13 += FUNC_8(VAR_14->nsubxacts * sizeof(TransactionId));
 VAR_17 = (RelFileNode *) VAR_13;
 VAR_13 += FUNC_8(VAR_14->ncommitrels * sizeof(RelFileNode));
 VAR_18 = (RelFileNode *) VAR_13;
 VAR_13 += FUNC_8(VAR_14->nabortrels * sizeof(RelFileNode));
 VAR_21 = (SharedInvalidationMessage *) VAR_13;
 VAR_13 += FUNC_8(VAR_14->ninvalmsgs * sizeof(SharedInvalidationMessage));


 VAR_15 = FUNC_22(VAR_11, VAR_14->nsubxacts, VAR_16);


 FUNC_4();
 if (VAR_7)
  FUNC_15(VAR_11,
          VAR_14->nsubxacts, VAR_16,
          VAR_14->ncommitrels, VAR_17,
          VAR_14->ninvalmsgs, VAR_21,
          VAR_14->initfileinval, VAR_6);
 else
  FUNC_14(VAR_11,
            VAR_14->nsubxacts, VAR_16,
            VAR_14->nabortrels, VAR_18,
            VAR_6);

 FUNC_10(VAR_9, VAR_15);
 VAR_8->valid = 0;
 if (VAR_7)
 {
  VAR_19 = VAR_17;
  VAR_20 = VAR_14->ncommitrels;
 }
 else
 {
  VAR_19 = VAR_18;
  VAR_20 = VAR_14->nabortrels;
 }


 FUNC_2(VAR_19, VAR_20, 0);







 if (VAR_14->initfileinval)
  FUNC_17();
 FUNC_20(VAR_21, VAR_14->ninvalmsgs);
 if (VAR_14->initfileinval)
  FUNC_16();







 FUNC_5(VAR_3, VAR_0);


 if (VAR_7)
  FUNC_11(VAR_13, VAR_11, VAR_5);
 else
  FUNC_11(VAR_13, VAR_11, VAR_4);

 FUNC_9(VAR_11, VAR_7);


 FUNC_18(VAR_8);





 FUNC_6(VAR_3);


 FUNC_1(VAR_7, 0);




 if (VAR_8->ondisk)
  FUNC_19(VAR_11, 1);

 VAR_1 = ((void*)0);

 FUNC_12();

 FUNC_24(VAR_12);
}
