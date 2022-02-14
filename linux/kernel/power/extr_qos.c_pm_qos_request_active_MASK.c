
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_qos_request {scalar_t__ pm_qos_class; } ;



int FUNC_0(struct pm_qos_request *VAR_0)
{
 return VAR_0->pm_qos_class != 0;
}
