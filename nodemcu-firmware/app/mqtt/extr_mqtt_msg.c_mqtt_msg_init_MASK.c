
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int buffer_length; int * buffer; } ;
typedef TYPE_1__ mqtt_connection_t ;
typedef int connection ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(mqtt_connection_t* VAR_0, uint8_t* VAR_1, uint16_t VAR_2)
{
  FUNC_0(VAR_0, 0, sizeof(VAR_0));
  VAR_0->buffer = VAR_1;
  VAR_0->buffer_length = VAR_2;
}
