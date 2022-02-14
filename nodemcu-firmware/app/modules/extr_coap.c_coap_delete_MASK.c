
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct espconn {int dummy; } ;
typedef int lua_State ;
struct TYPE_7__ {scalar_t__ self_ref; TYPE_4__* pesp_conn; } ;
typedef TYPE_2__ lcoap_userdata ;
struct TYPE_6__ {TYPE_4__* udp; } ;
struct TYPE_8__ {TYPE_1__ proto; scalar_t__ local_port; scalar_t__ remote_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_2__*,int,char*) ;
 scalar_t__ FUNC_4 (int *,int,char const*) ;
 int FUNC_5 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_2, const char* VAR_3 )
{
  struct espconn *VAR_4 = ((void*)0);
  lcoap_userdata *VAR_5;

  VAR_5 = (lcoap_userdata *)FUNC_4(VAR_2, 1, VAR_3);
  FUNC_3(VAR_2, VAR_5, 1, "Server/Client expected");
  if(VAR_5==((void*)0)){
    FUNC_0("userdata is nil.\n");
    return 0;
  }


  if(VAR_0!=VAR_5->self_ref){
    FUNC_5(VAR_2, VAR_1, VAR_5->self_ref);
    VAR_5->self_ref = VAR_0;
  }

  if(VAR_5->pesp_conn)
  {
    if(VAR_5->pesp_conn->proto.udp->remote_port || VAR_5->pesp_conn->proto.udp->local_port)
      FUNC_1(VAR_5->pesp_conn);
    FUNC_2(VAR_5->pesp_conn->proto.udp);
    VAR_5->pesp_conn->proto.udp = ((void*)0);
    FUNC_2(VAR_5->pesp_conn);
    VAR_5->pesp_conn = ((void*)0);
  }

  FUNC_0("coap_delete is called.\n");
  return 0;
}
