
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tailKnownAssignedXids; int headKnownAssignedXids; int numKnownAssignedXids; } ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ ProcArrayStruct ;


 int * VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int,int ) ;
 int FUNC_1 (int,char*,int,int ,int,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void
FUNC_4(int VAR_3)
{
 ProcArrayStruct *VAR_4 = VAR_2;
 StringInfoData VAR_5;
 int VAR_6,
    VAR_7,
    VAR_8;
 int VAR_9 = 0;

 VAR_7 = VAR_4->tailKnownAssignedXids;
 VAR_6 = VAR_4->headKnownAssignedXids;

 FUNC_2(&VAR_5);

 for (VAR_8 = VAR_7; VAR_8 < VAR_6; VAR_8++)
 {
  if (VAR_1[VAR_8])
  {
   VAR_9++;
   FUNC_0(&VAR_5, "[%d]=%u ", VAR_8, VAR_0[VAR_8]);
  }
 }

 FUNC_1(VAR_3, "%d KnownAssignedXids (num=%d tail=%d head=%d) %s",
   VAR_9,
   VAR_4->numKnownAssignedXids,
   VAR_4->tailKnownAssignedXids,
   VAR_4->headKnownAssignedXids,
   VAR_5.data);

 FUNC_3(VAR_5.data);
}
