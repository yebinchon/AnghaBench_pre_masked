
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_7__ {int context; } ;
struct TYPE_6__ {scalar_t__ ninvalidations; int * invalidations; } ;
typedef int Size ;
typedef int SharedInvalidationMessage ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef TYPE_2__ ReorderBuffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ,int,int *,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *,int) ;

void
FUNC_5(ReorderBuffer *VAR_1, TransactionId VAR_2,
         XLogRecPtr VAR_3, Size VAR_4,
         SharedInvalidationMessage *VAR_5)
{
 ReorderBufferTXN *VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2, 1, ((void*)0), VAR_3, 1);

 if (VAR_6->ninvalidations != 0)
  FUNC_3(VAR_0, "only ever add one set of invalidations");

 FUNC_0(VAR_4 > 0);

 VAR_6->ninvalidations = VAR_4;
 VAR_6->invalidations = (SharedInvalidationMessage *)
  FUNC_1(VAR_1->context,
         sizeof(SharedInvalidationMessage) * VAR_4);
 FUNC_4(VAR_6->invalidations, VAR_5,
     sizeof(SharedInvalidationMessage) * VAR_4);
}
