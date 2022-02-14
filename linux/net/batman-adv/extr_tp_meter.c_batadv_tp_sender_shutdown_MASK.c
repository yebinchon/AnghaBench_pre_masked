
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_tp_vars {int reason; int sending; } ;
typedef enum batadv_tp_meter_reason { ____Placeholder_batadv_tp_meter_reason } batadv_tp_meter_reason ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct batadv_tp_vars *VAR_0,
          enum batadv_tp_meter_reason VAR_1)
{
 if (!FUNC_0(&VAR_0->sending))
  return;

 VAR_0->reason = VAR_1;
}
