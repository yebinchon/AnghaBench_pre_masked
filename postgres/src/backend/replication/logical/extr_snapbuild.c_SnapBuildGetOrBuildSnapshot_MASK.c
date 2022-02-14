
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_4__ {scalar_t__ state; int * snapshot; } ;
typedef int * Snapshot ;
typedef TYPE_1__ SnapBuild ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

Snapshot
FUNC_3(SnapBuild *VAR_1, TransactionId VAR_2)
{
 FUNC_0(VAR_1->state == VAR_0);


 if (VAR_1->snapshot == ((void*)0))
 {
  VAR_1->snapshot = FUNC_1(VAR_1);

  FUNC_2(VAR_1->snapshot);
 }

 return VAR_1->snapshot;
}
