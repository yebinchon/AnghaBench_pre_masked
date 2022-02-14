
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int sin_addr; } ;
struct TYPE_9__ {int sin6_addr; } ;
union ipvs_sockaddr {TYPE_3__ in; TYPE_2__ in6; } ;
struct socket {TYPE_4__* sk; TYPE_1__* ops; } ;
struct sockaddr {int dummy; } ;
struct TYPE_12__ {scalar_t__ mcast_af; } ;
struct netns_ipvs {TYPE_7__ bcfg; int net; } ;
struct net_device {int ifindex; } ;
struct TYPE_11__ {int sk_bound_dev_if; int sk_reuse; } ;
struct TYPE_8__ {int (* bind ) (struct socket*,struct sockaddr*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ipvs_sockaddr*,int*,TYPE_7__*,int) ;
 int FUNC_1 (TYPE_4__*,int *,struct net_device*) ;
 int FUNC_2 (TYPE_4__*,int *,struct net_device*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (int ,scalar_t__,int ,int ,struct socket**) ;
 int FUNC_6 (struct socket*,struct sockaddr*,int) ;
 int FUNC_7 (struct netns_ipvs*) ;

__attribute__((used)) static int FUNC_8(struct netns_ipvs *VAR_4, int VAR_5,
        struct net_device *VAR_6, struct socket **VAR_7)
{

 union ipvs_sockaddr VAR_8;
 struct socket *VAR_9;
 int VAR_10, VAR_11;


 VAR_10 = FUNC_5(VAR_4->net, VAR_4->bcfg.mcast_af, VAR_3,
      VAR_1, &VAR_9);
 if (VAR_10 < 0) {
  FUNC_3("Error during creation of socket; terminating\n");
  goto error;
 }
 *VAR_7 = VAR_9;

 VAR_9->sk->sk_reuse = VAR_2;
 VAR_10 = FUNC_7(VAR_4);
 if (VAR_10 > 0)
  FUNC_4(VAR_9->sk, 0, VAR_10);

 FUNC_0(&VAR_8, &VAR_11, &VAR_4->bcfg, VAR_5);
 VAR_9->sk->sk_bound_dev_if = VAR_6->ifindex;
 VAR_10 = VAR_9->ops->bind(VAR_9, (struct sockaddr *)&VAR_8, VAR_11);
 if (VAR_10 < 0) {
  FUNC_3("Error binding to the multicast addr\n");
  goto error;
 }
  VAR_10 = FUNC_1(VAR_9->sk, &VAR_8.in.sin_addr,
       VAR_6);
 if (VAR_10 < 0) {
  FUNC_3("Error joining to the multicast group\n");
  goto error;
 }

 return 0;

error:
 return VAR_10;
}
