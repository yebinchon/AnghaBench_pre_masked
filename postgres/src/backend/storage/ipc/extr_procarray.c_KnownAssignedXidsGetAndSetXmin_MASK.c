
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_2__ {int tailKnownAssignedXids; int headKnownAssignedXids; int known_assigned_xids_lck; } ;


 int * VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_5(TransactionId *VAR_3, TransactionId *VAR_4,
          TransactionId VAR_5)
{
 int VAR_6 = 0;
 int VAR_7,
    VAR_8;
 int VAR_9;
 FUNC_0(&VAR_2->known_assigned_xids_lck);
 VAR_8 = VAR_2->tailKnownAssignedXids;
 VAR_7 = VAR_2->headKnownAssignedXids;
 FUNC_1(&VAR_2->known_assigned_xids_lck);

 for (VAR_9 = VAR_8; VAR_9 < VAR_7; VAR_9++)
 {

  if (VAR_1[VAR_9])
  {
   TransactionId VAR_10 = VAR_0[VAR_9];





   if (VAR_6 == 0 &&
    FUNC_4(VAR_10, *VAR_4))
    *VAR_4 = VAR_10;





   if (FUNC_3(VAR_5) &&
    FUNC_2(VAR_10, VAR_5))
    break;


   VAR_3[VAR_6++] = VAR_10;
  }
 }

 return VAR_6;
}
