
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_4__ {int final_lsn; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef int ReorderBuffer ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ,int,int *,int ,int) ;

void
FUNC_2(ReorderBuffer *VAR_1, TransactionId VAR_2, XLogRecPtr VAR_3)
{
 ReorderBufferTXN *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, 0, ((void*)0), VAR_0,
        0);


 if (VAR_4 == ((void*)0))
  return;


 VAR_4->final_lsn = VAR_3;


 FUNC_0(VAR_1, VAR_4);
}
