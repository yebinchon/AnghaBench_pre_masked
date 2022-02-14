
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* XLogRecPtr ;
struct TYPE_4__ {int origin_lsn; int owner; int xid; int prepared_at; } ;
typedef TYPE_1__ TwoPhaseFileHeader ;
struct TYPE_6__ {scalar_t__ numPrepXacts; TYPE_2__** prepXacts; TYPE_2__* freeGXacts; } ;
struct TYPE_5__ {int valid; int inredo; int xid; int gid; int ondisk; int locking_backend; int owner; void* prepare_end_lsn; void* prepare_start_lsn; int prepared_at; struct TYPE_5__* next; } ;
typedef scalar_t__ RepOriginId ;
typedef TYPE_2__* GlobalTransaction ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (scalar_t__,int ,void*,int,int) ;
 int FUNC_11 (int ,char const*) ;

void
FUNC_12(char *VAR_9, XLogRecPtr VAR_10,
      XLogRecPtr VAR_11, RepOriginId VAR_12)
{
 TwoPhaseFileHeader *VAR_13 = (TwoPhaseFileHeader *) VAR_9;
 char *VAR_14;
 const char *VAR_15;
 GlobalTransaction VAR_16;

 FUNC_0(FUNC_1(VAR_7, VAR_5));
 FUNC_0(FUNC_3());

 VAR_14 = VAR_9 + FUNC_2(sizeof(TwoPhaseFileHeader));
 VAR_15 = (const char *) VAR_14;
 if (VAR_6->freeGXacts == ((void*)0))
  FUNC_6(VAR_2,
    (FUNC_7(VAR_1),
     FUNC_9("maximum number of prepared transactions reached"),
     FUNC_8("Increase max_prepared_transactions (currently %d).",
       VAR_8)));
 VAR_16 = VAR_6->freeGXacts;
 VAR_6->freeGXacts = VAR_16->next;

 VAR_16->prepared_at = VAR_13->prepared_at;
 VAR_16->prepare_start_lsn = VAR_10;
 VAR_16->prepare_end_lsn = VAR_11;
 VAR_16->xid = VAR_13->xid;
 VAR_16->owner = VAR_13->owner;
 VAR_16->locking_backend = VAR_3;
 VAR_16->valid = 0;
 VAR_16->ondisk = FUNC_4(VAR_10);
 VAR_16->inredo = 1;
 FUNC_11(VAR_16->gid, VAR_15);


 FUNC_0(VAR_6->numPrepXacts < VAR_8);
 VAR_6->prepXacts[VAR_6->numPrepXacts++] = VAR_16;

 if (VAR_12 != VAR_4)
 {

  FUNC_10(VAR_12, VAR_13->origin_lsn, VAR_11,
         0 , 0 );
 }

 FUNC_5(VAR_0, "added 2PC data in shared memory for transaction %u", VAR_16->xid);
}
