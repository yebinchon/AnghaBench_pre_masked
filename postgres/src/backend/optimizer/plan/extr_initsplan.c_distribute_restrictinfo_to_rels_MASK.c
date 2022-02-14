
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int baserestrict_min_security; int baserestrictinfo; } ;
struct TYPE_8__ {int security_level; int required_relids; } ;
typedef TYPE_1__ RestrictInfo ;
typedef int Relids ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;




 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 TYPE_2__* FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;

void
FUNC_8(PlannerInfo *VAR_1,
        RestrictInfo *VAR_2)
{
 Relids VAR_3 = VAR_2->required_relids;
 RelOptInfo *VAR_4;

 switch (FUNC_2(VAR_3))
 {
  case 128:





   VAR_4 = FUNC_6(VAR_1, FUNC_3(VAR_3));


   VAR_4->baserestrictinfo = FUNC_7(VAR_4->baserestrictinfo,
           VAR_2);

   VAR_4->baserestrict_min_security = FUNC_0(VAR_4->baserestrict_min_security,
             VAR_2->security_level);
   break;
  case 129:
   FUNC_4(VAR_2);




   FUNC_1(VAR_1, VAR_2, VAR_3);
   break;
  default:





   FUNC_5(VAR_0, "cannot cope with variable-free clause");
   break;
 }
}
