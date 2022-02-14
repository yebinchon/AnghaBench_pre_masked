
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
union sctp_addr {struct sockaddr_in v4; } ;
struct sk_buff {int dummy; } ;
struct sctphdr {int dest; int source; } ;
struct TYPE_4__ {int daddr; int saddr; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 struct sctphdr* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(union sctp_addr *VAR_1, struct sk_buff *VAR_2,
        int VAR_3)
{

 struct sctphdr *VAR_4 = FUNC_1(VAR_2);
 struct sockaddr_in *VAR_5 = &VAR_1->v4;

 VAR_1->v4.sin_family = VAR_0;

 if (VAR_3) {
  VAR_5->sin_port = VAR_4->source;
  VAR_5->sin_addr.s_addr = FUNC_0(VAR_2)->saddr;
 } else {
  VAR_5->sin_port = VAR_4->dest;
  VAR_5->sin_addr.s_addr = FUNC_0(VAR_2)->daddr;
 }
}
