
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int sin6_addr; int sin6_port; int sin6_family; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_9__ {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct TYPE_11__ {TYPE_3__ sin6; TYPE_2__ sin; } ;
struct sockaddr_rxrpc {int transport_len; TYPE_4__ transport; void* transport_type; } ;
struct sk_buff {int protocol; } ;
struct TYPE_14__ {int saddr; } ;
struct TYPE_13__ {int saddr; } ;
struct TYPE_12__ {int source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 void* VAR_3 ;
 TYPE_7__* FUNC_0 (struct sk_buff*) ;
 TYPE_6__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sockaddr_rxrpc*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 TYPE_5__* FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct sockaddr_rxrpc *VAR_4, struct sk_buff *VAR_5)
{
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 switch (FUNC_3(VAR_5->protocol)) {
 case 129:
  VAR_4->transport_type = VAR_3;
  VAR_4->transport_len = sizeof(VAR_4->transport.sin);
  VAR_4->transport.sin.sin_family = VAR_0;
  VAR_4->transport.sin.sin_port = FUNC_5(VAR_5)->source;
  VAR_4->transport.sin.sin_addr.s_addr = FUNC_0(VAR_5)->saddr;
  return 0;
 default:
  FUNC_4("AF_RXRPC: Unknown eth protocol %u\n",
        FUNC_3(VAR_5->protocol));
  return -VAR_2;
 }
}
