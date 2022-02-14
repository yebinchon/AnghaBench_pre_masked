
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rtable {scalar_t__ rt_iif; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct in_pktinfo {scalar_t__ ipi_ifindex; TYPE_1__ ipi_spec_dst; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int cmsg_flags; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct in_pktinfo* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct sock const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sock const*) ;
 int FUNC_7 (struct sk_buff*) ;
 struct rtable* FUNC_8 (struct sk_buff*) ;

void FUNC_9(const struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct in_pktinfo *VAR_4 = FUNC_1(VAR_3);
 bool VAR_5 = (FUNC_4(VAR_2)->cmsg_flags & VAR_0) ||
         FUNC_6(VAR_2);

 if (VAR_5 && FUNC_8(VAR_3)) {
  struct rtable *VAR_6 = FUNC_8(VAR_3);
  bool VAR_7 = FUNC_5(FUNC_0(VAR_3)->flags);

  if (VAR_4->ipi_ifindex == VAR_1)
   VAR_4->ipi_ifindex = FUNC_3(VAR_3);
  else if (VAR_7 && VAR_6 && VAR_6->rt_iif)
   VAR_4->ipi_ifindex = VAR_6->rt_iif;

  VAR_4->ipi_spec_dst.s_addr = FUNC_2(VAR_3);
 } else {
  VAR_4->ipi_ifindex = 0;
  VAR_4->ipi_spec_dst.s_addr = 0;
 }
 FUNC_7(VAR_3);
}
