
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_3__ {void* end_lsn; void* final_lsn; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef int ReorderBuffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int *,int ,int,int *,int ,int) ;

void
FUNC_2(ReorderBuffer *VAR_1, TransactionId VAR_2,
       TransactionId VAR_3, XLogRecPtr VAR_4,
       XLogRecPtr VAR_5)
{
 ReorderBufferTXN *VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_3, 0, ((void*)0),
           VAR_0, 0);




 if (!VAR_6)
  return;

 VAR_6->final_lsn = VAR_4;
 VAR_6->end_lsn = VAR_5;





 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
}
