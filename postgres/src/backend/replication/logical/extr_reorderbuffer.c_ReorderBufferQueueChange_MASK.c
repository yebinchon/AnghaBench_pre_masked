
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_7__ {int node; scalar_t__ lsn; } ;
struct TYPE_6__ {int nentries_mem; int nentries; int changes; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef TYPE_2__ ReorderBufferChange ;
typedef int ReorderBuffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,int ,int,int *,scalar_t__,int) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(ReorderBuffer *VAR_1, TransactionId VAR_2, XLogRecPtr VAR_3,
       ReorderBufferChange *VAR_4)
{
 ReorderBufferTXN *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, 1, ((void*)0), VAR_3, 1);

 VAR_4->lsn = VAR_3;
 FUNC_0(VAR_0 != VAR_3);
 FUNC_3(&VAR_5->changes, &VAR_4->node);
 VAR_5->nentries++;
 VAR_5->nentries_mem++;

 FUNC_1(VAR_1, VAR_5);
}
