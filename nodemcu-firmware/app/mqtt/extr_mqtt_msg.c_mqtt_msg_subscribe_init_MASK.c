
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int mqtt_message_t ;
struct TYPE_6__ {int message; } ;
typedef TYPE_1__ mqtt_connection_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

mqtt_message_t* FUNC_3(mqtt_connection_t* VAR_0, uint16_t *VAR_1)
{
  FUNC_2(VAR_0);

  if((*VAR_1 = FUNC_0(VAR_0, 0)) == 0)
    return FUNC_1(VAR_0);

  return &VAR_0->message;
}
