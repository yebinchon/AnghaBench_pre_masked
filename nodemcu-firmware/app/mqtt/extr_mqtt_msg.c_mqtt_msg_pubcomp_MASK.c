
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int mqtt_message_t ;
typedef int mqtt_connection_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;

mqtt_message_t* FUNC_4(mqtt_connection_t* VAR_1, uint16_t VAR_2)
{
  FUNC_3(VAR_1);
  if(FUNC_0(VAR_1, VAR_2) == 0)
    return FUNC_1(VAR_1);
  return FUNC_2(VAR_1, VAR_0, 0, 0, 0);
}
