
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pathtype; } ;
struct TYPE_6__ {int joinrestrictinfo; TYPE_1__ path; } ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Path ;
typedef int NestPath ;
typedef int MergePath ;
typedef int List ;
typedef TYPE_2__ JoinPath ;
typedef int HashPath ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int * FUNC_0 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (scalar_t__) ;
 int * FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static Plan *
FUNC_11(PlannerInfo *VAR_2, JoinPath *VAR_3)
{
 Plan *VAR_4;
 List *VAR_5;

 switch (VAR_3->path.pathtype)
 {
  case 129:
   VAR_4 = (Plan *) FUNC_2(VAR_2,
              (MergePath *) VAR_3);
   break;
  case 130:
   VAR_4 = (Plan *) FUNC_1(VAR_2,
             (HashPath *) VAR_3);
   break;
  case 128:
   VAR_4 = (Plan *) FUNC_3(VAR_2,
             (NestPath *) VAR_3);
   break;
  default:
   FUNC_4(VAR_0, "unrecognized node type: %d",
     (int) VAR_3->path.pathtype);
   VAR_4 = ((void*)0);
   break;
 }






 VAR_5 = FUNC_6(VAR_2, VAR_3->joinrestrictinfo);
 if (VAR_5)
  VAR_4 = FUNC_0(VAR_2, (Path *) VAR_3, VAR_4,
          VAR_5);
 return VAR_4;
}
