
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ TransactionId ;
struct TYPE_3__ {int tailKnownAssignedXids; int headKnownAssignedXids; scalar_t__ numKnownAssignedXids; int known_assigned_xids_lck; } ;
typedef TYPE_1__ ProcArrayStruct ;


 int FUNC_0 (int) ;
 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static bool
FUNC_4(TransactionId VAR_3, bool VAR_4)
{
 ProcArrayStruct *VAR_5 = VAR_2;
 int VAR_6,
    VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10 = -1;

 if (VAR_4)
 {

  VAR_9 = VAR_5->tailKnownAssignedXids;
  VAR_8 = VAR_5->headKnownAssignedXids;
 }
 else
 {

  FUNC_1(&VAR_5->known_assigned_xids_lck);
  VAR_9 = VAR_5->tailKnownAssignedXids;
  VAR_8 = VAR_5->headKnownAssignedXids;
  FUNC_2(&VAR_5->known_assigned_xids_lck);
 }





 VAR_6 = VAR_9;
 VAR_7 = VAR_8 - 1;
 while (VAR_6 <= VAR_7)
 {
  int VAR_11;
  TransactionId VAR_12;

  VAR_11 = (VAR_6 + VAR_7) / 2;
  VAR_12 = VAR_0[VAR_11];

  if (VAR_3 == VAR_12)
  {
   VAR_10 = VAR_11;
   break;
  }
  else if (FUNC_3(VAR_3, VAR_12))
   VAR_7 = VAR_11 - 1;
  else
   VAR_6 = VAR_11 + 1;
 }

 if (VAR_10 < 0)
  return 0;

 if (!VAR_1[VAR_10])
  return 0;

 if (VAR_4)
 {
  VAR_1[VAR_10] = 0;

  VAR_5->numKnownAssignedXids--;
  FUNC_0(VAR_5->numKnownAssignedXids >= 0);





  if (VAR_10 == VAR_9)
  {
   VAR_9++;
   while (VAR_9 < VAR_8 && !VAR_1[VAR_9])
    VAR_9++;
   if (VAR_9 >= VAR_8)
   {

    VAR_5->headKnownAssignedXids = 0;
    VAR_5->tailKnownAssignedXids = 0;
   }
   else
   {
    VAR_5->tailKnownAssignedXids = VAR_9;
   }
  }
 }

 return 1;
}
