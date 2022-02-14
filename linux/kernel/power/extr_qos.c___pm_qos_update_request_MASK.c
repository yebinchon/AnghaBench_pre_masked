
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prio; } ;
struct pm_qos_request {size_t pm_qos_class; TYPE_1__ node; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {int constraints; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int ,scalar_t__) ;
 int FUNC_1 (size_t,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pm_qos_request *VAR_2,
      s32 VAR_3)
{
 FUNC_1(VAR_2->pm_qos_class, VAR_3);

 if (VAR_3 != VAR_2->node.prio)
  FUNC_0(
   VAR_1[VAR_2->pm_qos_class]->constraints,
   &VAR_2->node, VAR_0, VAR_3);
}
