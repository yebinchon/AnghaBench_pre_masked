
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ length; } ;
struct TYPE_5__ {int message_id; scalar_t__ buffer_length; int* buffer; TYPE_1__ message; } ;
typedef TYPE_2__ mqtt_connection_t ;



__attribute__((used)) static uint16_t FUNC_0(mqtt_connection_t* VAR_0, uint16_t VAR_1)
{


  while(VAR_1 == 0)
    VAR_1 = ++VAR_0->message_id;

  if(VAR_0->message.length + 2 > VAR_0->buffer_length)
    return 0;

  VAR_0->buffer[VAR_0->message.length++] = VAR_1 >> 8;
  VAR_0->buffer[VAR_0->message.length++] = VAR_1 & 0xff;

  return VAR_1;
}
