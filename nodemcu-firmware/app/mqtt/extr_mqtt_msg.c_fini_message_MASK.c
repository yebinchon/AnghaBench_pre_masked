
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; int* data; } ;
typedef TYPE_1__ mqtt_message_t ;
struct TYPE_6__ {int* buffer; TYPE_1__ message; } ;
typedef TYPE_2__ mqtt_connection_t ;


 int VAR_0 ;

__attribute__((used)) static mqtt_message_t* FUNC_0(mqtt_connection_t* VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
  int VAR_6 = VAR_1->message.length - VAR_0;

  if(VAR_6 > 127)
  {
    VAR_1->buffer[0] = ((VAR_2 & 0x0f) << 4) | ((VAR_3 & 1) << 3) | ((VAR_4 & 3) << 1) | (VAR_5 & 1);
    VAR_1->buffer[1] = 0x80 | (VAR_6 % 128);
    VAR_1->buffer[2] = VAR_6 / 128;
    VAR_1->message.length = VAR_6 + 3;
    VAR_1->message.data = VAR_1->buffer;
  }
  else
  {
    VAR_1->buffer[1] = ((VAR_2 & 0x0f) << 4) | ((VAR_3 & 1) << 3) | ((VAR_4 & 3) << 1) | (VAR_5 & 1);
    VAR_1->buffer[2] = VAR_6;
    VAR_1->message.length = VAR_6 + 2;
    VAR_1->message.data = VAR_1->buffer + 1;
  }

  return &VAR_1->message;
}
