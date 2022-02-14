
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ headKnownAssignedXids; scalar_t__ tailKnownAssignedXids; scalar_t__ numKnownAssignedXids; } ;
typedef TYPE_1__ ProcArrayStruct ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 ProcArrayStruct *VAR_3 = VAR_2;

 FUNC_0(VAR_1, VAR_0);

 VAR_3->numKnownAssignedXids = 0;
 VAR_3->tailKnownAssignedXids = 0;
 VAR_3->headKnownAssignedXids = 0;

 FUNC_1(VAR_1);
}
