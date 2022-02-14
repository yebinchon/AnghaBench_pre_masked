
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct msghdr {int dummy; } ;
struct TYPE_7__ {scalar_t__ rxinfo; } ;
struct TYPE_8__ {TYPE_1__ bits; } ;
struct ipv6_pinfo {TYPE_2__ rxopt; } ;
struct in6_pktinfo {scalar_t__ ipi6_ifindex; int ipi6_addr; } ;
typedef int src_info ;
struct TYPE_12__ {scalar_t__ iif; } ;
struct TYPE_11__ {scalar_t__ ipi_ifindex; } ;
struct TYPE_10__ {int daddr; } ;
struct TYPE_9__ {int daddr; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 struct ipv6_pinfo* FUNC_3 (struct sock*) ;
 TYPE_4__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int *) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct msghdr*,int ,int ,int,struct in6_pktinfo*) ;

void FUNC_8(struct sock *VAR_3, struct msghdr *VAR_4,
     struct sk_buff *VAR_5)
{
 struct ipv6_pinfo *VAR_6 = FUNC_3(VAR_3);
 bool VAR_7 = VAR_5->protocol == FUNC_2(VAR_0);

 if (VAR_6->rxopt.bits.rxinfo) {
  struct in6_pktinfo VAR_8;

  if (VAR_7) {
   VAR_8.ipi6_ifindex = FUNC_0(VAR_5)->iif;
   VAR_8.ipi6_addr = FUNC_6(VAR_5)->daddr;
  } else {
   VAR_8.ipi6_ifindex =
    FUNC_1(VAR_5)->ipi_ifindex;
   FUNC_5(FUNC_4(VAR_5)->daddr,
            &VAR_8.ipi6_addr);
  }

  if (VAR_8.ipi6_ifindex >= 0)
   FUNC_7(VAR_4, VAR_2, VAR_1,
     sizeof(VAR_8), &VAR_8);
 }
}
