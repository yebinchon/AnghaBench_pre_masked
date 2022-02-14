
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** append_rel_array; } ;
typedef int Relids ;
typedef TYPE_1__ PlannerInfo ;
typedef int AppendRelInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int) ;

AppendRelInfo **
FUNC_4(PlannerInfo *VAR_1, Relids VAR_2, int *VAR_3)
{
 AppendRelInfo **VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 *VAR_3 = FUNC_1(VAR_2);
 VAR_4 = (AppendRelInfo **) FUNC_3(sizeof(AppendRelInfo *) * *VAR_3);

 VAR_6 = -1;
 while ((VAR_6 = FUNC_0(VAR_2, VAR_6)) >= 0)
 {
  AppendRelInfo *VAR_7 = VAR_1->append_rel_array[VAR_6];

  if (!VAR_7)
   FUNC_2(VAR_0, "child rel %d not found in append_rel_array", VAR_6);

  VAR_4[VAR_5++] = VAR_7;
 }
 return VAR_4;
}
