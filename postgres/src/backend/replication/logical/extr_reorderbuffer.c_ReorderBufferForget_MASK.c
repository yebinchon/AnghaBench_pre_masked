
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_4__ {scalar_t__ ninvalidations; int invalidations; int * base_snapshot; int final_lsn; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef int ReorderBuffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 TYPE_1__* FUNC_3 (int *,int ,int,int *,int ,int) ;

void
FUNC_4(ReorderBuffer *VAR_1, TransactionId VAR_2, XLogRecPtr VAR_3)
{
 ReorderBufferTXN *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2, 0, ((void*)0), VAR_0,
        0);


 if (VAR_4 == ((void*)0))
  return;


 VAR_4->final_lsn = VAR_3;






 if (VAR_4->base_snapshot != ((void*)0) && VAR_4->ninvalidations > 0)
  FUNC_2(VAR_1, VAR_4->ninvalidations,
             VAR_4->invalidations);
 else
  FUNC_0(VAR_4->ninvalidations == 0);


 FUNC_1(VAR_1, VAR_4);
}
