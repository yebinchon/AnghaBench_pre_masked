
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mqtt_message_t ;
struct TYPE_5__ {int message; } ;
typedef TYPE_1__ mqtt_connection_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,char const*,int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*) ;

mqtt_message_t* FUNC_3(mqtt_connection_t* VAR_0, const char* VAR_1)
{
  if(VAR_1 == ((void*)0) || VAR_1[0] == '\0')
    return FUNC_1(VAR_0);

  if(FUNC_0(VAR_0, VAR_1, FUNC_2(VAR_1)) < 0)
    return FUNC_1(VAR_0);

  return &VAR_0->message;
}
