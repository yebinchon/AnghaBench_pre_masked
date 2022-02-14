
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int headKnownAssignedXids; int tailKnownAssignedXids; int numKnownAssignedXids; } ;
typedef TYPE_1__ ProcArrayStruct ;


 int * VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_0(bool VAR_4)
{
 ProcArrayStruct *VAR_5 = VAR_3;
 int VAR_6,
    VAR_7;
 int VAR_8;
 int VAR_9;


 VAR_6 = VAR_5->headKnownAssignedXids;
 VAR_7 = VAR_5->tailKnownAssignedXids;

 if (!VAR_4)
 {
  int VAR_10 = VAR_6 - VAR_7;

  if (VAR_10 < 4 * VAR_2 ||
   VAR_10 < 2 * VAR_5->numKnownAssignedXids)
   return;
 }





 VAR_8 = 0;
 for (VAR_9 = VAR_7; VAR_9 < VAR_6; VAR_9++)
 {
  if (VAR_1[VAR_9])
  {
   VAR_0[VAR_8] = VAR_0[VAR_9];
   VAR_1[VAR_8] = 1;
   VAR_8++;
  }
 }

 VAR_5->tailKnownAssignedXids = 0;
 VAR_5->headKnownAssignedXids = VAR_8;
}
