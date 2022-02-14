
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* udp; } ;
struct espconn {TYPE_2__ proto; } ;
typedef int lua_State ;
struct TYPE_8__ {scalar_t__ self_ref; struct espconn* pesp_conn; } ;
typedef TYPE_3__ lcoap_userdata ;
struct TYPE_9__ {int addr; } ;
typedef TYPE_4__ ip_addr_t ;
struct TYPE_6__ {unsigned int local_port; int local_ip; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct espconn*) ;
 int FUNC_3 (struct espconn*,int ) ;
 int FUNC_4 (struct espconn*,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,TYPE_3__*,int,char*) ;
 unsigned int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *,int,size_t*) ;
 scalar_t__ FUNC_9 (int *,int,char const*) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int ,int *,int) ;

__attribute__((used)) static int FUNC_14( lua_State* VAR_5, const char* VAR_6 )
{
  struct espconn *VAR_7 = ((void*)0);
  lcoap_userdata *VAR_8;
  unsigned VAR_9;
  size_t VAR_10;
  ip_addr_t VAR_11;

  VAR_8 = (lcoap_userdata *)FUNC_9(VAR_5, 1, VAR_6);
  FUNC_6(VAR_5, VAR_8, 1, "Server/Client expected");
  if(VAR_8==((void*)0)){
    FUNC_1("userdata is nil.\n");
    return 0;
  }

  VAR_7 = VAR_8->pesp_conn;
  VAR_9 = FUNC_7( VAR_5, 2 );
  VAR_7->proto.udp->local_port = VAR_9;
  FUNC_1("UDP port is set: %d.\n", VAR_9);

  if( FUNC_11(VAR_5,3) )
  {
    const char *VAR_12 = FUNC_8( VAR_5, 3, &VAR_10 );
    if (VAR_12 == ((void*)0))
    {
      VAR_12 = "0.0.0.0";
    }
    VAR_11.addr = FUNC_5(VAR_12);
    FUNC_13(VAR_7->proto.udp->local_ip, &VAR_11.addr, 4);
    FUNC_1("UDP ip is set: ");
    FUNC_1(VAR_0, FUNC_0(&VAR_11.addr));
    FUNC_1("\n");
  }

  if(VAR_1==VAR_8->self_ref){
    FUNC_12(VAR_5, 1);
    VAR_8->self_ref = FUNC_10(VAR_5, VAR_2);
  }

  FUNC_3(VAR_7, VAR_3);
  FUNC_4(VAR_7, VAR_4);
  FUNC_2(VAR_7);

  FUNC_1("Coap Server started on port: %d\n", VAR_9);
  FUNC_1("coap_start is called.\n");
  return 0;
}
