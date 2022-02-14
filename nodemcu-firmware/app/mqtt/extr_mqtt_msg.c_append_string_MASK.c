
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; } ;
struct TYPE_5__ {scalar_t__ buffer_length; int* buffer; TYPE_1__ message; } ;
typedef TYPE_2__ mqtt_connection_t ;


 int FUNC_0 (int*,char const*,int) ;

__attribute__((used)) static int FUNC_1(mqtt_connection_t* VAR_0, const char* VAR_1, int VAR_2)
{
  if(VAR_0->message.length + VAR_2 + 2 > VAR_0->buffer_length)
    return -1;

  VAR_0->buffer[VAR_0->message.length++] = VAR_2 >> 8;
  VAR_0->buffer[VAR_0->message.length++] = VAR_2 & 0xff;
  FUNC_0(VAR_0->buffer + VAR_0->message.length, VAR_1, VAR_2);
  VAR_0->message.length += VAR_2;

  return VAR_2 + 2;
}
