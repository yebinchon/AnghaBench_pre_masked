
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_llc {scalar_t__ sllc_arphrd; } ;
struct sock {scalar_t__ sk_bound_dev_if; } ;
struct TYPE_5__ {int * mac; int lsap; } ;
struct llc_sock {int addr; TYPE_2__* dev; TYPE_1__ laddr; } ;
struct llc_sap {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; struct sockaddr_llc* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int *,scalar_t__) ;
 TYPE_2__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_3 (struct llc_sap*,struct sock*) ;
 struct llc_sap* FUNC_4 (int ,int *) ;
 struct llc_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,struct sockaddr_llc*,int) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_7, struct sockaddr_llc *VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 struct llc_sock *VAR_10 = FUNC_5(VAR_9);
 struct llc_sap *VAR_11;
 int VAR_12 = -VAR_1;

 if (!FUNC_8(VAR_9, VAR_5))
  goto out;
 VAR_12 = -VAR_2;
 if (VAR_9->sk_bound_dev_if) {
  VAR_10->dev = FUNC_0(&VAR_6, VAR_9->sk_bound_dev_if);
  if (VAR_10->dev && VAR_8->sllc_arphrd != VAR_10->dev->type) {
   FUNC_2(VAR_10->dev);
   VAR_10->dev = ((void*)0);
  }
 } else
  VAR_10->dev = FUNC_1(&VAR_6, VAR_8->sllc_arphrd);
 if (!VAR_10->dev)
  goto out;
 VAR_12 = -VAR_3;
 VAR_10->laddr.lsap = FUNC_6();
 if (!VAR_10->laddr.lsap)
  goto out;
 VAR_12 = -VAR_0;
 VAR_11 = FUNC_4(VAR_10->laddr.lsap, ((void*)0));
 if (!VAR_11)
  goto out;
 FUNC_7(VAR_10->laddr.mac, VAR_10->dev->dev_addr, VAR_4);
 FUNC_7(&VAR_10->addr, VAR_8, sizeof(VAR_10->addr));

 FUNC_3(VAR_11, VAR_9);
 FUNC_9(VAR_9, VAR_5);
 VAR_12 = 0;
out:
 return VAR_12;
}
