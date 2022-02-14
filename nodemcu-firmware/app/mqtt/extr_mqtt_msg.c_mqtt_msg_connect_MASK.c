
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct mqtt_connect_variable_header {int lengthLsb; int version; int flags; int keepaliveMsb; int keepaliveLsb; int magic; scalar_t__ lengthMsb; } ;
typedef int mqtt_message_t ;
struct TYPE_10__ {scalar_t__ length; } ;
struct TYPE_11__ {scalar_t__ buffer_length; scalar_t__ buffer; TYPE_1__ message; } ;
typedef TYPE_2__ mqtt_connection_t ;
struct TYPE_12__ {int keepalive; char* client_id; char* will_topic; char* will_message; int will_qos; char* username; char* password; scalar_t__ will_retain; scalar_t__ clean_session; } ;
typedef TYPE_3__ mqtt_connect_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*,char*,int ) ;
 int * FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;

mqtt_message_t* FUNC_6(mqtt_connection_t* VAR_6, mqtt_connect_info_t* VAR_7)
{
  struct mqtt_connect_variable_header* VAR_8;

  FUNC_3(VAR_6);

  if(VAR_6->message.length + sizeof(*VAR_8) > VAR_6->buffer_length)
    return FUNC_1(VAR_6);
  VAR_8 = (void*)(VAR_6->buffer + VAR_6->message.length);
  VAR_6->message.length += sizeof(*VAR_8);

  VAR_8->lengthMsb = 0;
  VAR_8->lengthLsb = 4;
  FUNC_4(VAR_8->magic, "MQTT", 4);
  VAR_8->version = 4;
  VAR_8->flags = 0;
  VAR_8->keepaliveMsb = VAR_7->keepalive >> 8;
  VAR_8->keepaliveLsb = VAR_7->keepalive & 0xff;

  if(VAR_7->clean_session)
    VAR_8->flags |= VAR_0;

  if(VAR_7->client_id != ((void*)0) && VAR_7->client_id[0] != '\0')
  {
    if(FUNC_0(VAR_6, VAR_7->client_id, FUNC_5(VAR_7->client_id)) < 0)
      return FUNC_1(VAR_6);
  }
  else
    return FUNC_1(VAR_6);

  if(VAR_7->will_topic != ((void*)0) && VAR_7->will_topic[0] != '\0')
  {
    if(FUNC_0(VAR_6, VAR_7->will_topic, FUNC_5(VAR_7->will_topic)) < 0)
      return FUNC_1(VAR_6);

    if(FUNC_0(VAR_6, VAR_7->will_message, FUNC_5(VAR_7->will_message)) < 0)
      return FUNC_1(VAR_6);

    VAR_8->flags |= VAR_3;
    if(VAR_7->will_retain)
      VAR_8->flags |= VAR_4;
    VAR_8->flags |= (VAR_7->will_qos & 3) << 3;
  }

  if(VAR_7->username != ((void*)0) && VAR_7->username[0] != '\0')
  {
    if(FUNC_0(VAR_6, VAR_7->username, FUNC_5(VAR_7->username)) < 0)
      return FUNC_1(VAR_6);

    VAR_8->flags |= VAR_2;
  }

  if(VAR_7->password != ((void*)0) && VAR_7->password[0] != '\0')
  {
    if(FUNC_0(VAR_6, VAR_7->password, FUNC_5(VAR_7->password)) < 0)
      return FUNC_1(VAR_6);

    VAR_8->flags |= VAR_1;
  }

  return FUNC_2(VAR_6, VAR_5, 0, 0, 0);
}
