
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ length; } ;
typedef TYPE_1__ mqtt_message_t ;
struct TYPE_9__ {scalar_t__ buffer_length; int* buffer; TYPE_1__ message; } ;
typedef TYPE_2__ mqtt_connection_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,char const*,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char const*) ;

mqtt_message_t* FUNC_3(mqtt_connection_t* VAR_0, const char* VAR_1, int VAR_2)
{
  if(VAR_1 == ((void*)0) || VAR_1[0] == '\0')
    return FUNC_1(VAR_0);

  if(FUNC_0(VAR_0, VAR_1, FUNC_2(VAR_1)) < 0)
    return FUNC_1(VAR_0);

  if(VAR_0->message.length + 1 > VAR_0->buffer_length)
    return FUNC_1(VAR_0);
  VAR_0->buffer[VAR_0->message.length++] = VAR_2;

  return &VAR_0->message;
}
