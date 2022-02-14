
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int mqtt_message_t ;
struct TYPE_9__ {scalar_t__ length; } ;
struct TYPE_10__ {scalar_t__ buffer_length; scalar_t__ buffer; TYPE_1__ message; } ;
typedef TYPE_2__ mqtt_connection_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char const*,int ) ;
 int * FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (TYPE_2__*,int ,int ,int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__,char const*,int) ;
 int FUNC_6 (char const*) ;

mqtt_message_t* FUNC_7(mqtt_connection_t* VAR_1, const char* VAR_2, const char* VAR_3, int VAR_4, int VAR_5, int VAR_6, uint16_t* VAR_7)
{
  FUNC_4(VAR_1);

  if(VAR_2 == ((void*)0) || VAR_2[0] == '\0')
    return FUNC_2(VAR_1);

  if(FUNC_1(VAR_1, VAR_2, FUNC_6(VAR_2)) < 0)
    return FUNC_2(VAR_1);

  if(VAR_5 > 0)
  {
    if((*VAR_7 = FUNC_0(VAR_1, 0)) == 0)
      return FUNC_2(VAR_1);
  }
  else
    *VAR_7 = 0;

  if(VAR_1->message.length + VAR_4 > VAR_1->buffer_length)
    return FUNC_2(VAR_1);
  FUNC_5(VAR_1->buffer + VAR_1->message.length, VAR_3, VAR_4);
  VAR_1->message.length += VAR_4;

  return FUNC_3(VAR_1, VAR_0, 0, VAR_5, VAR_6);
}
