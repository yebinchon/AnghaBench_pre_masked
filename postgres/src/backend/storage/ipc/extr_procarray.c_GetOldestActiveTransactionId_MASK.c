
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_8__ {int nextFullXid; } ;
struct TYPE_7__ {int xid; } ;
struct TYPE_6__ {int numProcs; int* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGXACT ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 TYPE_5__* VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

TransactionId
FUNC_8(void)
{
 ProcArrayStruct *VAR_6 = VAR_5;
 TransactionId VAR_7;
 int VAR_8;

 FUNC_0(!FUNC_3());
 FUNC_1(VAR_3, VAR_0);
 VAR_7 = FUNC_7(VAR_2->nextFullXid);
 FUNC_2(VAR_3);




 FUNC_1(VAR_1, VAR_0);
 for (VAR_8 = 0; VAR_8 < VAR_6->numProcs; VAR_8++)
 {
  int VAR_9 = VAR_6->pgprocnos[VAR_8];
  PGXACT *VAR_10 = &VAR_4[VAR_9];
  TransactionId VAR_11;


  VAR_11 = FUNC_6(VAR_10->xid);

  if (!FUNC_4(VAR_11))
   continue;

  if (FUNC_5(VAR_11, VAR_7))
   VAR_7 = VAR_11;






 }
 FUNC_2(VAR_1);

 return VAR_7;
}
