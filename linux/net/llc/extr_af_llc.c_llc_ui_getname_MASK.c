
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {int dummy; } ;
struct sockaddr_llc {int sllc_family; struct sockaddr sllc_mac; int sllc_arphrd; int sllc_sap; } ;
struct sock {scalar_t__ sk_state; } ;
struct TYPE_5__ {struct sockaddr_llc mac; int lsap; } ;
struct llc_sock {TYPE_4__* dev; TYPE_3__* sap; TYPE_1__ daddr; } ;
typedef int sllc ;
struct TYPE_8__ {struct sockaddr_llc* dev_addr; int type; } ;
struct TYPE_6__ {int lsap; } ;
struct TYPE_7__ {TYPE_2__ laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct llc_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr_llc*,int) ;
 int FUNC_3 (struct sockaddr_llc*,int ,int) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_7, struct sockaddr *VAR_8,
     int VAR_9)
{
 struct sockaddr_llc VAR_10;
 struct sock *VAR_11 = VAR_7->sk;
 struct llc_sock *VAR_12 = FUNC_0(VAR_11);
 int VAR_13 = -VAR_1;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 FUNC_1(VAR_11);
 if (FUNC_5(VAR_11, VAR_5))
  goto out;
 if (VAR_9) {
  VAR_13 = -VAR_3;
  if (VAR_11->sk_state != VAR_6)
   goto out;
  if(VAR_12->dev)
   VAR_10.sllc_arphrd = VAR_12->dev->type;
  VAR_10.sllc_sap = VAR_12->daddr.lsap;
  FUNC_2(&VAR_10.sllc_mac, &VAR_12->daddr.mac, VAR_4);
 } else {
  VAR_13 = -VAR_2;
  if (!VAR_12->sap)
   goto out;
  VAR_10.sllc_sap = VAR_12->sap->laddr.lsap;

  if (VAR_12->dev) {
   VAR_10.sllc_arphrd = VAR_12->dev->type;
   FUNC_2(&VAR_10.sllc_mac, VAR_12->dev->dev_addr,
          VAR_4);
  }
 }
 VAR_10.sllc_family = VAR_0;
 FUNC_2(VAR_8, &VAR_10, sizeof(VAR_10));
 VAR_13 = sizeof(VAR_10);
out:
 FUNC_4(VAR_11);
 return VAR_13;
}
