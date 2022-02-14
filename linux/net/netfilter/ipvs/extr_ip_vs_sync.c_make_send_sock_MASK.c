
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ipvs_sockaddr {int dummy; } ipvs_sockaddr ;
struct socket {TYPE_1__* ops; int sk; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ mcast_af; int mcast_ttl; } ;
struct netns_ipvs {TYPE_2__ mcfg; int net; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* connect ) (struct socket*,struct sockaddr*,int,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct socket*,struct net_device*) ;
 int FUNC_1 (union ipvs_sockaddr*,int*,TYPE_2__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,scalar_t__,int ,int ,struct socket**) ;
 int FUNC_9 (struct socket*,struct sockaddr*,int,int ) ;
 int FUNC_10 (struct netns_ipvs*) ;

__attribute__((used)) static int FUNC_11(struct netns_ipvs *VAR_4, int VAR_5,
     struct net_device *VAR_6, struct socket **VAR_7)
{

 union ipvs_sockaddr VAR_8;
 struct socket *VAR_9;
 int VAR_10, VAR_11;


 VAR_10 = FUNC_8(VAR_4->net, VAR_4->mcfg.mcast_af, VAR_3,
      VAR_1, &VAR_9);
 if (VAR_10 < 0) {
  FUNC_2("Error during creation of socket; terminating\n");
  goto error;
 }
 *VAR_7 = VAR_9;
 VAR_10 = FUNC_3(VAR_9->sk, VAR_6);
 if (VAR_10 < 0) {
  FUNC_2("Error setting outbound mcast interface\n");
  goto error;
 }

 FUNC_4(VAR_9->sk, 0);
 FUNC_6(VAR_9->sk, VAR_4->mcfg.mcast_ttl);

 FUNC_5(VAR_9->sk, VAR_2);
 VAR_10 = FUNC_10(VAR_4);
 if (VAR_10 > 0)
  FUNC_7(VAR_9->sk, 1, VAR_10);

 if (VAR_0 == VAR_4->mcfg.mcast_af)
  VAR_10 = FUNC_0(VAR_9, VAR_6);
 else
  VAR_10 = 0;
 if (VAR_10 < 0) {
  FUNC_2("Error binding address of the mcast interface\n");
  goto error;
 }

 FUNC_1(&VAR_8, &VAR_11, &VAR_4->mcfg, VAR_5);
 VAR_10 = VAR_9->ops->connect(VAR_9, (struct sockaddr *) &VAR_8,
        VAR_11, 0);
 if (VAR_10 < 0) {
  FUNC_2("Error connecting to the multicast addr\n");
  goto error;
 }

 return 0;

error:
 return VAR_10;
}
