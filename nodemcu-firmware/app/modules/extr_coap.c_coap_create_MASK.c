
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * udp; int * tcp; } ;
struct espconn {TYPE_2__* reverse; int state; TYPE_1__ proto; int type; } ;
typedef int lua_State ;
struct TYPE_4__ {struct espconn* pesp_conn; int self_ref; } ;
typedef TYPE_2__ lcoap_userdata ;
typedef int esp_udp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct espconn*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7( lua_State* VAR_3, const char* VAR_4 )
{
  struct espconn *VAR_5 = ((void*)0);
  lcoap_userdata *VAR_6;
  unsigned VAR_7;
  int VAR_8 = 1;


  VAR_6 = (lcoap_userdata *)FUNC_5(VAR_3, sizeof(lcoap_userdata));

  VAR_6->self_ref = VAR_2;
  VAR_6->pesp_conn = ((void*)0);


  FUNC_4(VAR_3, VAR_4);
  FUNC_6(VAR_3, -2);


  VAR_5 = (struct espconn *)FUNC_1(1,sizeof(struct espconn));
  if(!VAR_5)
    return FUNC_3(VAR_3, "not enough memory");

  VAR_6->pesp_conn = VAR_5;

  VAR_5->type = VAR_1;
  VAR_5->proto.tcp = ((void*)0);
  VAR_5->proto.udp = ((void*)0);

  VAR_5->proto.udp = (esp_udp *)FUNC_1(1,sizeof(esp_udp));
  if(!VAR_5->proto.udp){
    FUNC_2(VAR_5);
    VAR_6->pesp_conn = VAR_5 = ((void*)0);
    return FUNC_3(VAR_3, "not enough memory");
  }
  VAR_5->state = VAR_0;
  FUNC_0("UDP server/client is set.\n");

  VAR_5->reverse = VAR_6;

  FUNC_0("coap_create is called.\n");
  return 1;
}
