
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t nsubxacts; int xtop; } ;
typedef TYPE_1__ xl_xact_assignment ;
typedef TYPE_2__* TransactionState ;
typedef int TransactionId ;
struct TYPE_9__ {int didLogXid; } ;
struct TYPE_8__ {scalar_t__ state; int nestingLevel; int fullTransactionId; int curTransactionOwner; struct TYPE_8__* parent; } ;
typedef int ResourceOwner ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (char*,size_t) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int ) ;
 int VAR_8 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*) ;
 size_t VAR_9 ;
 TYPE_2__** FUNC_17 (int) ;
 int FUNC_18 (TYPE_2__**) ;
 int * VAR_10 ;

__attribute__((used)) static void
FUNC_19(TransactionState VAR_11)
{
 bool VAR_12 = (VAR_11->parent != ((void*)0));
 ResourceOwner VAR_13;
 bool VAR_14 = 0;


 FUNC_0(!FUNC_1(VAR_11->fullTransactionId));
 FUNC_0(VAR_11->state == VAR_5);





 if (FUNC_4() || FUNC_5())
  FUNC_16(VAR_1, "cannot assign XIDs during a parallel operation");







 if (VAR_12 && !FUNC_1(VAR_11->parent->fullTransactionId))
 {
  TransactionState VAR_15 = VAR_11->parent;
  TransactionState *VAR_16;
  size_t VAR_17 = 0;

  VAR_16 = FUNC_17(sizeof(TransactionState) * VAR_11->nestingLevel);
  while (VAR_15 != ((void*)0) && !FUNC_1(VAR_15->fullTransactionId))
  {
   VAR_16[VAR_17++] = VAR_15;
   VAR_15 = VAR_15->parent;
  }





  while (VAR_17 != 0)
   FUNC_19(VAR_16[--VAR_17]);

  FUNC_18(VAR_16);
 }
 if (VAR_12 && FUNC_11() &&
  !VAR_6.didLogXid)
  VAR_14 = 1;
 VAR_11->fullTransactionId = FUNC_2(VAR_12);
 if (!VAR_12)
  VAR_8 = VAR_11->fullTransactionId;

 if (VAR_12)
  FUNC_7(FUNC_15(VAR_11->fullTransactionId),
        FUNC_15(VAR_11->parent->fullTransactionId));





 if (!VAR_12)
  FUNC_6(FUNC_15(VAR_11->fullTransactionId));






 VAR_13 = VAR_0;
 VAR_0 = VAR_11->curTransactionOwner;

 FUNC_14(FUNC_15(VAR_11->fullTransactionId));

 VAR_0 = VAR_13;
 if (VAR_12 && FUNC_13())
 {
  VAR_10[VAR_9] = FUNC_15(VAR_11->fullTransactionId);
  VAR_9++;





  if (VAR_9 >= VAR_3 ||
   VAR_14)
  {
   xl_xact_assignment VAR_18;





   VAR_18.xtop = FUNC_3();
   FUNC_0(FUNC_8(VAR_18.xtop));
   VAR_18.nsubxacts = VAR_9;

   FUNC_9();
   FUNC_12((char *) &VAR_18, VAR_2);
   FUNC_12((char *) VAR_10,
        VAR_9 * sizeof(TransactionId));

   (void) FUNC_10(VAR_4, VAR_7);

   VAR_9 = 0;

   VAR_6.didLogXid = 1;
  }
 }
}
