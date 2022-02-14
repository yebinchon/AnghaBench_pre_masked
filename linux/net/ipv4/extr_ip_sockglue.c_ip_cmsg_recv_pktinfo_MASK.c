
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;
struct TYPE_3__ {int s_addr; } ;
struct in_pktinfo {TYPE_1__ ipi_addr; } ;
typedef int info ;
struct TYPE_4__ {int daddr; } ;


 int VAR_0 ;
 struct in_pktinfo* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct msghdr*,int ,int ,int,struct in_pktinfo*) ;

__attribute__((used)) static void FUNC_3(struct msghdr *VAR_2, struct sk_buff *VAR_3)
{
 struct in_pktinfo VAR_4 = *FUNC_0(VAR_3);

 VAR_4.ipi_addr.s_addr = FUNC_1(VAR_3)->daddr;

 FUNC_2(VAR_2, VAR_1, VAR_0, sizeof(VAR_4), &VAR_4);
}
