
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_tsflags; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int s_addr; } ;
struct in_pktinfo {TYPE_1__ ipi_spec_dst; int ipi_ifindex; } ;
struct TYPE_4__ {int saddr; } ;


 struct in_pktinfo* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_2(const struct sock *VAR_3,
           struct sk_buff *VAR_4,
           int VAR_5)
{
 struct in_pktinfo *VAR_6;

 if (VAR_5 == VAR_1)
  return 1;

 if (VAR_5 == VAR_2)
  return 0;





 VAR_6 = FUNC_0(VAR_4);
 if (!(VAR_3->sk_tsflags & VAR_0) ||
     !VAR_6->ipi_ifindex)
  return 0;

 VAR_6->ipi_spec_dst.s_addr = FUNC_1(VAR_4)->saddr;
 return 1;
}
