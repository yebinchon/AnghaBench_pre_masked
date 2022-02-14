
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int backendId; } ;
typedef TYPE_1__ VirtualTransactionId ;
typedef int TransactionId ;
struct TYPE_12__ {int pid; } ;
typedef TYPE_2__ PGPROC ;


 TYPE_2__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int,int,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__) ;
 scalar_t__ FUNC_3 (TYPE_1__,TYPE_1__) ;
 scalar_t__ FUNC_4 (TYPE_1__) ;
 int FUNC_5 (TYPE_1__,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(TransactionId VAR_5, bool VAR_6)
{
 int VAR_7;
 int VAR_8;
 VirtualTransactionId *VAR_9;

 VAR_9 = FUNC_1(VAR_5, 1, 0,
            VAR_1 | VAR_0,
            &VAR_7);
 if (VAR_6)
  FUNC_7(VAR_4, VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  if (!FUNC_4(VAR_9[VAR_8]))
   continue;

  if (VAR_8 > 0)
  {

   VirtualTransactionId *VAR_10;
   int VAR_11;
   int VAR_12;
   int VAR_13;

   VAR_10 = FUNC_1(VAR_5,
             1, 0,
             VAR_1 | VAR_0,
             &VAR_11);
   for (VAR_12 = VAR_8; VAR_12 < VAR_7; VAR_12++)
   {
    if (!FUNC_4(VAR_9[VAR_12]))
     continue;
    for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
    {
     if (FUNC_3(VAR_9[VAR_12],
               VAR_10[VAR_13]))
      break;
    }
    if (VAR_13 >= VAR_11)
     FUNC_2(VAR_9[VAR_12]);
   }
   FUNC_6(VAR_10);
  }

  if (FUNC_4(VAR_9[VAR_8]))
  {

   if (VAR_6)
   {
    PGPROC *VAR_14 = FUNC_0(VAR_9[VAR_8].backendId);

    if (VAR_14)
     FUNC_7(VAR_2,
             VAR_14->pid);
   }
   FUNC_5(VAR_9[VAR_8], 1);
  }

  if (VAR_6)
   FUNC_7(VAR_3, VAR_8 + 1);
 }
}
