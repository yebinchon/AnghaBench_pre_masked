
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_2__ {int tailKnownAssignedXids; int headKnownAssignedXids; int known_assigned_xids_lck; } ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static TransactionId
FUNC_2(void)
{
 int VAR_4,
    VAR_5;
 int VAR_6;




 FUNC_0(&VAR_3->known_assigned_xids_lck);
 VAR_5 = VAR_3->tailKnownAssignedXids;
 VAR_4 = VAR_3->headKnownAssignedXids;
 FUNC_1(&VAR_3->known_assigned_xids_lck);

 for (VAR_6 = VAR_5; VAR_6 < VAR_4; VAR_6++)
 {

  if (VAR_2[VAR_6])
   return VAR_1[VAR_6];
 }

 return VAR_0;
}
