
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct espconn {int dummy; } ;
typedef int lua_State ;
struct TYPE_8__ {scalar_t__ self_ref; TYPE_5__* pesp_conn; } ;
typedef TYPE_3__ lcoap_userdata ;
struct TYPE_7__ {TYPE_1__* udp; } ;
struct TYPE_9__ {TYPE_2__ proto; } ;
struct TYPE_6__ {scalar_t__ local_port; scalar_t__ remote_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,TYPE_3__*,int,char*) ;
 scalar_t__ FUNC_3 (int *,int,char const*) ;
 int FUNC_4 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_2, const char* VAR_3 )
{
  struct espconn *VAR_4 = ((void*)0);
  lcoap_userdata *VAR_5;

  VAR_5 = (lcoap_userdata *)FUNC_3(VAR_2, 1, VAR_3);
  FUNC_2(VAR_2, VAR_5, 1, "Server/Client expected");
  if(VAR_5==((void*)0)){
    FUNC_0("userdata is nil.\n");
    return 0;
  }

  if(VAR_5->pesp_conn)
  {
    if(VAR_5->pesp_conn->proto.udp->remote_port || VAR_5->pesp_conn->proto.udp->local_port)
      FUNC_1(VAR_5->pesp_conn);
  }

  if(VAR_0!=VAR_5->self_ref){
    FUNC_4(VAR_2, VAR_1, VAR_5->self_ref);
    VAR_5->self_ref = VAR_0;
  }

  FUNC_0("coap_close is called.\n");
  return 0;
}
