
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_3__ {scalar_t__ numKnownAssignedXids; int headKnownAssignedXids; int tailKnownAssignedXids; } ;
typedef TYPE_1__ ProcArrayStruct ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int) ;
 int* VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(TransactionId VAR_4)
{
 ProcArrayStruct *VAR_5 = VAR_3;
 int VAR_6 = 0;
 int VAR_7,
    VAR_8,
    VAR_9;

 if (!FUNC_4(VAR_4))
 {
  FUNC_5(FUNC_6(VAR_0), "removing all KnownAssignedXids");
  VAR_5->numKnownAssignedXids = 0;
  VAR_5->headKnownAssignedXids = VAR_5->tailKnownAssignedXids = 0;
  return;
 }

 FUNC_5(FUNC_6(VAR_0), "prune KnownAssignedXids to %u", VAR_4);





 VAR_8 = VAR_5->tailKnownAssignedXids;
 VAR_7 = VAR_5->headKnownAssignedXids;

 for (VAR_9 = VAR_8; VAR_9 < VAR_7; VAR_9++)
 {
  if (VAR_2[VAR_9])
  {
   TransactionId VAR_10 = VAR_1[VAR_9];

   if (FUNC_3(VAR_10, VAR_4))
    break;

   if (!FUNC_2(VAR_10))
   {
    VAR_2[VAR_9] = 0;
    VAR_6++;
   }
  }
 }

 VAR_5->numKnownAssignedXids -= VAR_6;
 FUNC_0(VAR_5->numKnownAssignedXids >= 0);




 for (VAR_9 = VAR_8; VAR_9 < VAR_7; VAR_9++)
 {
  if (VAR_2[VAR_9])
   break;
 }
 if (VAR_9 >= VAR_7)
 {

  VAR_5->headKnownAssignedXids = 0;
  VAR_5->tailKnownAssignedXids = 0;
 }
 else
 {
  VAR_5->tailKnownAssignedXids = VAR_9;
 }


 FUNC_1(0);
}
