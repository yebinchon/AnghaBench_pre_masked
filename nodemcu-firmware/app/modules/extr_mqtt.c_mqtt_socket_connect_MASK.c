
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* tcp; } ;
struct espconn {TYPE_1__ proto; int state; int type; TYPE_3__* reverse; } ;
typedef int sint8 ;
typedef int os_timer_func_t ;
typedef int lua_State ;
struct TYPE_12__ {unsigned int port; } ;
struct TYPE_13__ {int connected; unsigned int secure; int mqttTimer; void* self_ref; void* cb_connect_fail_ref; void* cb_connect_ref; TYPE_2__ mqtt_state; struct espconn* pesp_conn; } ;
typedef TYPE_3__ lmqtt_userdata ;
struct TYPE_14__ {scalar_t__ addr; } ;
typedef TYPE_4__ ip_addr_t ;
struct TYPE_15__ {unsigned int remote_port; scalar_t__ local_port; int remote_ip; } ;
typedef TYPE_5__ esp_tcp ;
struct TYPE_16__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct espconn*) ;
 int FUNC_5 (struct espconn*,char const*,TYPE_6__*,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct espconn*,int ) ;
 int FUNC_8 (struct espconn*,int ) ;
 int FUNC_9 (struct espconn*) ;
 TYPE_6__ VAR_10 ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (int *,TYPE_3__*,int,char*) ;
 char* FUNC_12 (int *,int,size_t*) ;
 scalar_t__ FUNC_13 (int *,int,char*) ;
 int FUNC_14 (int *,char*) ;
 void* FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ,void*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,int) ;
 scalar_t__ FUNC_19 (int *,int) ;
 scalar_t__ FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int) ;
 unsigned int FUNC_23 (int *,int) ;
 unsigned int FUNC_24 (int *,int) ;
 scalar_t__ FUNC_25 (int *,int) ;
 scalar_t__ FUNC_26 (char const*,char*,int) ;
 int FUNC_27 (int ,scalar_t__*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,int *,TYPE_3__*) ;
 int FUNC_30 (char*,char*) ;
 int FUNC_31 (struct espconn*) ;
 int FUNC_32 (char const*,TYPE_6__*,struct espconn*) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_33( lua_State* VAR_15 )
{
  FUNC_1("enter mqtt_socket_connect.\n");
  lmqtt_userdata *VAR_16 = ((void*)0);
  unsigned VAR_17 = 1883;
  size_t VAR_18;
  ip_addr_t VAR_19;
  const char *VAR_20;
  int VAR_21 = 1;
  unsigned VAR_22 = 0;
  int VAR_23 = FUNC_17(VAR_15);
  sint8 VAR_24;

  VAR_16 = (lmqtt_userdata *)FUNC_13(VAR_15, VAR_21, "mqtt.socket");
  FUNC_11(VAR_15, VAR_16, VAR_21, "mqtt.socket expected");
  VAR_21++;
  if(VAR_16 == ((void*)0))
    return 0;

  if(VAR_16->connected){
    return FUNC_14(VAR_15, "already connected");
  }

  struct espconn *VAR_25 = VAR_16->pesp_conn;
  if(!VAR_25) {
    VAR_25 = VAR_16->pesp_conn = (struct espconn *)FUNC_3(1,sizeof(struct espconn));
  } else {
    FUNC_4(VAR_25);
  }

  if(!VAR_25)
    return FUNC_14(VAR_15, "not enough memory");
  if (!VAR_25->proto.tcp)
    VAR_25->proto.tcp = (esp_tcp *)FUNC_3(1,sizeof(esp_tcp));
  if(!VAR_25->proto.tcp){
    FUNC_9(VAR_25);
    VAR_25 = VAR_16->pesp_conn = ((void*)0);
    return FUNC_14(VAR_15, "not enough memory");
  }

  VAR_25->reverse = VAR_16;
  VAR_25->type = VAR_2;
  VAR_25->state = VAR_0;
  VAR_16->connected = 0;

  if( (VAR_21<=VAR_23) && FUNC_20(VAR_15,VAR_21) )
  {
    VAR_20 = FUNC_12( VAR_15, VAR_21, &VAR_18 );

    VAR_21++;
    if (VAR_20 == ((void*)0))
    {
      VAR_20 = "127.0.0.1";
    }
    VAR_19.addr = FUNC_10(VAR_20);
    FUNC_27(VAR_25->proto.tcp->remote_ip, &VAR_19.addr, 4);
    FUNC_1("TCP ip is set: ");
    FUNC_1(VAR_4, FUNC_0(&VAR_19.addr));
    FUNC_1("\n");
  }

  if ( (VAR_21<=VAR_23) && FUNC_19(VAR_15, VAR_21) )
  {
    VAR_17 = FUNC_24(VAR_15, VAR_21);
    VAR_21++;
    FUNC_1("TCP port is set: %d.\n", VAR_17);
  }
  VAR_25->proto.tcp->remote_port = VAR_17;
  if (VAR_25->proto.tcp->local_port == 0)
    VAR_25->proto.tcp->local_port = FUNC_6();
  VAR_16->mqtt_state.port = VAR_17;

  if ( (VAR_21<=VAR_23) && (FUNC_19(VAR_15, VAR_21) || FUNC_18(VAR_15, VAR_21)) )
  {
    if (FUNC_19(VAR_15, VAR_21)) {
      FUNC_30("mqtt.connect secure parameter as integer","in the future");
      VAR_22 = !!FUNC_24(VAR_15, VAR_21);
    } else {
      VAR_22 = FUNC_23(VAR_15, VAR_21);
    }
    VAR_21++;
  } else {
    VAR_22 = 0;
  }



  if ( VAR_22 )
  {
    return FUNC_14(VAR_15, "ssl not available");
  }



  if ((VAR_21<=VAR_23) && (FUNC_25(VAR_15, VAR_21) == VAR_6 || FUNC_25(VAR_15, VAR_21) == VAR_7)){
    FUNC_22(VAR_15, VAR_21);
    FUNC_16(VAR_15, VAR_5, VAR_16->cb_connect_ref);
    VAR_16->cb_connect_ref = FUNC_15(VAR_15, VAR_5);
  }

  VAR_21++;


  if ((VAR_21<=VAR_23) && (FUNC_25(VAR_15, VAR_21) == VAR_6 || FUNC_25(VAR_15, VAR_21) == VAR_7)){
    FUNC_22(VAR_15, VAR_21);
    FUNC_16(VAR_15, VAR_5, VAR_16->cb_connect_fail_ref);
    VAR_16->cb_connect_fail_ref = FUNC_15(VAR_15, VAR_5);
    VAR_21++;
  }

  FUNC_22(VAR_15, 1);
  FUNC_16(VAR_15, VAR_5, VAR_16->self_ref);
  VAR_16->self_ref = FUNC_15(VAR_15, VAR_5);

  VAR_24 = FUNC_7(VAR_25, VAR_11);
  VAR_24 |= FUNC_8(VAR_25, VAR_12);

  FUNC_28(&VAR_16->mqttTimer);
  FUNC_29(&VAR_16->mqttTimer, (os_timer_func_t *)VAR_13, VAR_16);
  FUNC_2(VAR_13, VAR_8);




  if((VAR_19.addr == VAR_3) && (FUNC_26(VAR_20,"255.255.255.255",16) != 0))
  {
    VAR_10.addr = 0;
    VAR_9 = 0;
    if(VAR_1 == FUNC_5(VAR_25, VAR_20, &VAR_10, VAR_14)){
      VAR_24 |= FUNC_32(VAR_20, &VAR_10, VAR_25);
    }
  }
  else
  {
    VAR_24 |= FUNC_31(VAR_25);
  }

  FUNC_1("leave mqtt_socket_connect.\n");

  if (VAR_24 == VAR_1) {
    FUNC_21(VAR_15, 1);
  } else {
    FUNC_21(VAR_15, 0);
  }
  return 1;
}
