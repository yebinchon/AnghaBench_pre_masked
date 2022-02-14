
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* tcp; } ;
struct espconn {TYPE_2__ proto; scalar_t__ reverse; } ;
typedef int sint8 ;
typedef int lmqtt_userdata ;
struct TYPE_9__ {int addr; } ;
typedef TYPE_3__ ip_addr_t ;
struct TYPE_10__ {scalar_t__ addr; } ;
struct TYPE_7__ {int remote_ip; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int FUNC_2 (struct espconn*,char const*,TYPE_5__*,int ) ;
 TYPE_5__ VAR_4 ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct espconn*) ;
 int VAR_5 ;

__attribute__((used)) static sint8 FUNC_7(const char *VAR_6, ip_addr_t *VAR_7, void *VAR_8)
{
  FUNC_1("enter socket_dns_found.\n");
  sint8 VAR_9 = VAR_0;
  struct espconn *VAR_10 = VAR_8;
  if(VAR_10 == ((void*)0)){
    FUNC_1("pesp_conn null.\n");
    return -1;
  }

  if(VAR_7 == ((void*)0))
  {
    VAR_3++;
    if( VAR_3 >= 5 ){
      FUNC_1( "DNS Fail!\n" );


      struct espconn *VAR_11 = VAR_8;
      if(VAR_11 != ((void*)0)) {
          lmqtt_userdata *VAR_12 = (lmqtt_userdata *)VAR_11->reverse;
          if(VAR_12 != ((void*)0)) {
            FUNC_4(VAR_12, VAR_2);
          }
      }

      FUNC_5(VAR_8);
      return -1;
    }
    FUNC_1( "DNS retry %d!\n", VAR_3 );
    VAR_4.addr = 0;
    return FUNC_2(VAR_10, VAR_6, &VAR_4, VAR_5);
  }


  if(VAR_7->addr != 0)
  {
    VAR_3 = 0;
    FUNC_3(VAR_10->proto.tcp->remote_ip, &(VAR_7->addr), 4);
    FUNC_1("TCP ip is set: ");
    FUNC_1(VAR_1, FUNC_0(&(VAR_7->addr)));
    FUNC_1("\n");
    VAR_9 = FUNC_6(VAR_10);
  }
  FUNC_1("leave socket_dns_found.\n");

  return VAR_9;
}
