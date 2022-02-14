
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int key ;
struct TYPE_8__ {int t_tableOid; int t_self; } ;
struct TYPE_7__ {int cmax; int cmin; } ;
struct TYPE_6__ {int tid; int relnode; } ;
typedef int Snapshot ;
typedef TYPE_1__ ReorderBufferTupleCidKey ;
typedef TYPE_2__ ReorderBufferTupleCidEnt ;
typedef TYPE_3__* HeapTuple ;
typedef int HTAB ;
typedef scalar_t__ ForkNumber ;
typedef int CommandId ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *,void*,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

bool
FUNC_8(HTAB *VAR_2,
         Snapshot VAR_3,
         HeapTuple VAR_4, Buffer VAR_5,
         CommandId *VAR_6, CommandId *VAR_7)
{
 ReorderBufferTupleCidKey VAR_8;
 ReorderBufferTupleCidEnt *VAR_9;
 ForkNumber VAR_10;
 BlockNumber VAR_11;
 bool VAR_12 = 0;


 FUNC_7(&VAR_8, 0, sizeof(VAR_8));

 FUNC_0(!FUNC_2(VAR_5));





 FUNC_1(VAR_5, &VAR_8.relnode, &VAR_10, &VAR_11);


 FUNC_0(VAR_10 == VAR_1);
 FUNC_0(VAR_11 == FUNC_4(&VAR_4->t_self));

 FUNC_3(&VAR_4->t_self,
     &VAR_8.tid);

restart:
 VAR_9 = (ReorderBufferTupleCidEnt *)
  FUNC_6(VAR_2,
     (void *) &VAR_8,
     VAR_0,
     ((void*)0));







 if (VAR_9 == ((void*)0) && !VAR_12)
 {
  FUNC_5(VAR_2, VAR_4->t_tableOid, VAR_3);

  VAR_12 = 1;
  goto restart;
 }
 else if (VAR_9 == ((void*)0))
  return 0;

 if (VAR_6)
  *VAR_6 = VAR_9->cmin;
 if (VAR_7)
  *VAR_7 = VAR_9->cmax;
 return 1;
}
