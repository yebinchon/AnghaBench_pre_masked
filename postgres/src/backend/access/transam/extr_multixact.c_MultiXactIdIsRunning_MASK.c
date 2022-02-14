
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xid; } ;
typedef TYPE_1__ MultiXactMember ;
typedef int MultiXactId ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__**,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;

bool
FUNC_7(MultiXactId VAR_1, bool VAR_2)
{
 MultiXactMember *VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_4(VAR_0, "IsRunning %u?", VAR_1);





 VAR_4 = FUNC_0(VAR_1, &VAR_3, 0, VAR_2);

 if (VAR_4 <= 0)
 {
  FUNC_3(VAR_0, "IsRunning: no members");
  return 0;
 }
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  if (FUNC_1(VAR_3[VAR_5].xid))
  {
   FUNC_4(VAR_0, "IsRunning: I (%d) am running!", VAR_5);
   FUNC_6(VAR_3);
   return 1;
  }
 }






 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  if (FUNC_2(VAR_3[VAR_5].xid))
  {
   FUNC_5(VAR_0, "IsRunning: member %d (%u) is running",
      VAR_5, VAR_3[VAR_5].xid);
   FUNC_6(VAR_3);
   return 1;
  }
 }

 FUNC_6(VAR_3);

 FUNC_4(VAR_0, "IsRunning: %u is not running", VAR_1);

 return 0;
}
