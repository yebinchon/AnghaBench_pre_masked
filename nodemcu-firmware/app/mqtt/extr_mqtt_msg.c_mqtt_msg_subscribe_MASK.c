
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ length; } ;
typedef TYPE_1__ mqtt_message_t ;
typedef int mqtt_connection_t ;


 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *,char const*,int) ;

mqtt_message_t* FUNC_3(mqtt_connection_t* VAR_0, const char* VAR_1, int VAR_2, uint16_t* VAR_3)
{
  mqtt_message_t* VAR_4;

  VAR_4 = FUNC_1(VAR_0, VAR_3);
  if (VAR_4->length != 0) {
    VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
  }
  if (VAR_4->length != 0) {
    VAR_4 = FUNC_0(VAR_0);
  }

  return VAR_4;
}
