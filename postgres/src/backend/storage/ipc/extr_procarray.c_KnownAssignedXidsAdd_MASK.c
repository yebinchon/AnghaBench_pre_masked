
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ TransactionId ;
struct TYPE_3__ {int headKnownAssignedXids; int tailKnownAssignedXids; int maxKnownAssignedXids; int numKnownAssignedXids; int known_assigned_xids_lck; } ;
typedef TYPE_1__ ProcArrayStruct ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,char*) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void
FUNC_12(TransactionId VAR_7, TransactionId VAR_8,
      bool VAR_9)
{
 ProcArrayStruct *VAR_10 = VAR_6;
 TransactionId VAR_11;
 int VAR_12,
    VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_0(FUNC_10(VAR_7, VAR_8));






 if (VAR_8 >= VAR_7)
  VAR_14 = VAR_8 - VAR_7 + 1;
 else
 {
  VAR_14 = 1;
  VAR_11 = VAR_7;
  while (FUNC_9(VAR_11, VAR_8))
  {
   VAR_14++;
   FUNC_7(VAR_11);
  }
 }





 VAR_12 = VAR_10->headKnownAssignedXids;
 VAR_13 = VAR_10->tailKnownAssignedXids;

 FUNC_0(VAR_12 >= 0 && VAR_12 <= VAR_10->maxKnownAssignedXids);
 FUNC_0(VAR_13 >= 0 && VAR_13 < VAR_10->maxKnownAssignedXids);






 if (VAR_12 > VAR_13 &&
  FUNC_8(VAR_1[VAR_12 - 1], VAR_7))
 {
  FUNC_2(VAR_3);
  FUNC_11(VAR_0, "out-of-order XID insertion in KnownAssignedXids");
 }




 if (VAR_12 + VAR_14 > VAR_10->maxKnownAssignedXids)
 {

  if (!VAR_9)
   FUNC_3(VAR_5, VAR_4);

  FUNC_1(1);

  VAR_12 = VAR_10->headKnownAssignedXids;


  if (!VAR_9)
   FUNC_4(VAR_5);




  if (VAR_12 + VAR_14 > VAR_10->maxKnownAssignedXids)
   FUNC_11(VAR_0, "too many KnownAssignedXids");
 }


 VAR_11 = VAR_7;
 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
 {
  VAR_1[VAR_12] = VAR_11;
  VAR_2[VAR_12] = 1;
  FUNC_7(VAR_11);
  VAR_12++;
 }


 VAR_10->numKnownAssignedXids += VAR_14;
 if (VAR_9)
  VAR_10->headKnownAssignedXids = VAR_12;
 else
 {
  FUNC_5(&VAR_10->known_assigned_xids_lck);
  VAR_10->headKnownAssignedXids = VAR_12;
  FUNC_6(&VAR_10->known_assigned_xids_lck);
 }
}
