
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct msghdr {int dummy; } ;
struct llc_sock {int cmsg_flags; TYPE_1__* dev; } ;
struct llc_pktinfo {int lpi_mac; int lpi_sap; int lpi_ifindex; } ;
typedef int info ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,int *) ;
 struct llc_sock* FUNC_2 (int ) ;
 int FUNC_3 (struct llc_pktinfo*,int ,int) ;
 int FUNC_4 (struct msghdr*,int ,int ,int,struct llc_pktinfo*) ;

__attribute__((used)) static void FUNC_5(struct msghdr *VAR_3, struct sk_buff *VAR_4)
{
 struct llc_sock *VAR_5 = FUNC_2(VAR_4->sk);

 if (VAR_5->cmsg_flags & VAR_0) {
  struct llc_pktinfo VAR_6;

  FUNC_3(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.lpi_ifindex = FUNC_2(VAR_4->sk)->dev->ifindex;
  FUNC_1(VAR_4, &VAR_6.lpi_sap);
  FUNC_0(VAR_4, VAR_6.lpi_mac);
  FUNC_4(VAR_3, VAR_2, VAR_1, sizeof(VAR_6), &VAR_6);
 }
}
