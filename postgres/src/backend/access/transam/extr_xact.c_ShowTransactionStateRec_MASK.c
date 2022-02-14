
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_7__ {int data; } ;
struct TYPE_6__ {scalar_t__ nChildXids; char* name; scalar_t__ subTransactionId; int fullTransactionId; int state; int blockState; int nestingLevel; struct TYPE_6__* parent; int * childXids; } ;
typedef TYPE_2__ StringInfoData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,char const*,int ,char*,int ,int ,unsigned int,unsigned int,unsigned int,char*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_3, TransactionState VAR_4)
{
 StringInfoData VAR_5;

 FUNC_7(&VAR_5);

 if (VAR_4->nChildXids > 0)
 {
  int VAR_6;

  FUNC_4(&VAR_5, ", children: %u", VAR_4->childXids[0]);
  for (VAR_6 = 1; VAR_6 < VAR_4->nChildXids; VAR_6++)
   FUNC_4(&VAR_5, " %u", VAR_4->childXids[VAR_6]);
 }

 if (VAR_4->parent)
  FUNC_9(VAR_3, VAR_4->parent);


 FUNC_5(VAR_0,
   (FUNC_6("%s(%d) name: %s; blockState: %s; state: %s, xid/subid/cid: %u/%u/%u%s%s",
        VAR_3, VAR_4->nestingLevel,
        FUNC_1(VAR_4->name) ? VAR_4->name : "unnamed",
        FUNC_0(VAR_4->blockState),
        FUNC_2(VAR_4->state),
        (unsigned int) FUNC_3(VAR_4->fullTransactionId),
        (unsigned int) VAR_4->subTransactionId,
        (unsigned int) VAR_1,
        VAR_2 ? " (used)" : "",
        VAR_5.data)));

 FUNC_8(VAR_5.data);
}
