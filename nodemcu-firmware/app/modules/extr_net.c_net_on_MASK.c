
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int cb_connect_ref; int cb_disconnect_ref; int cb_reconnect_ref; int cb_dns_ref; int cb_receive_ref; int cb_sent_ref; } ;
struct TYPE_5__ {int type; TYPE_1__ client; } ;
typedef TYPE_2__ lnet_userdata ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 TYPE_2__* FUNC_8 (int *) ;
 int FUNC_9 (char*,char const*) ;

int FUNC_10( lua_State *VAR_3 ) {
  lnet_userdata *VAR_4 = FUNC_8(VAR_3);
  if (!VAR_4 || VAR_4->type == VAR_2)
    return FUNC_1(VAR_3, "invalid user data");
  int *VAR_5 = ((void*)0);
  const char *VAR_6 = FUNC_0(VAR_3, 2);
  if (!VAR_6) return FUNC_1(VAR_3, "need callback name");
  switch (VAR_4->type) {
    case 129:
      if (FUNC_9("connection",VAR_6)==0)
        { VAR_5 = &VAR_4->client.cb_connect_ref; break; }
      if (FUNC_9("disconnection",VAR_6)==0)
        { VAR_5 = &VAR_4->client.cb_disconnect_ref; break; }
      if (FUNC_9("reconnection",VAR_6)==0)
        { VAR_5 = &VAR_4->client.cb_reconnect_ref; break; }
    case 128:
      if (FUNC_9("dns",VAR_6)==0)
        { VAR_5 = &VAR_4->client.cb_dns_ref; break; }
      if (FUNC_9("receive",VAR_6)==0)
        { VAR_5 = &VAR_4->client.cb_receive_ref; break; }
      if (FUNC_9("sent",VAR_6)==0)
        { VAR_5 = &VAR_4->client.cb_sent_ref; break; }
      break;
    default: return FUNC_1(VAR_3, "invalid user data");
  }
  if (VAR_5 == ((void*)0))
    return FUNC_1(VAR_3, "invalid callback name");
  if (FUNC_4(VAR_3, 3) || FUNC_5(VAR_3, 3)) {
    FUNC_7(VAR_3, 3);
    FUNC_3(VAR_3, VAR_1, *VAR_5);
    *VAR_5 = FUNC_2(VAR_3, VAR_1);
  } else if (FUNC_6(VAR_3, 3)) {
    FUNC_3(VAR_3, VAR_1, *VAR_5);
    *VAR_5 = VAR_0;
  } else {
    return FUNC_1(VAR_3, "invalid callback function");
  }
  return 0;
}
