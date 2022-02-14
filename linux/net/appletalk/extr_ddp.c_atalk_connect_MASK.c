
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int state; struct sock* sk; } ;
struct TYPE_4__ {scalar_t__ s_node; int s_net; } ;
struct sockaddr_at {scalar_t__ sat_family; TYPE_2__ sat_addr; int sat_port; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; } ;
struct atalk_sock {scalar_t__ dest_node; int dest_net; int dest_port; } ;
struct TYPE_3__ {int comm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct atalk_sock* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* VAR_13 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_14, struct sockaddr *VAR_15,
    int VAR_16, int VAR_17)
{
 struct sock *VAR_18 = VAR_14->sk;
 struct atalk_sock *VAR_19 = FUNC_0(VAR_18);
 struct sockaddr_at *VAR_20;
 int VAR_21;

 VAR_18->sk_state = VAR_11;
 VAR_14->state = VAR_10;

 if (VAR_16 != sizeof(*VAR_20))
  return -VAR_5;

 VAR_20 = (struct sockaddr_at *)VAR_15;

 if (VAR_20->sat_family != VAR_0)
  return -VAR_3;

 if (VAR_20->sat_addr.s_node == VAR_1 &&
     !FUNC_6(VAR_18, VAR_7)) {

  FUNC_4("atalk_connect: %s is broken and did not set SO_BROADCAST.\n",
   VAR_13->comm);



 }

 FUNC_3(VAR_18);
 VAR_21 = -VAR_4;
 if (FUNC_6(VAR_18, VAR_8))
  if (FUNC_1(VAR_18) < 0)
   goto out;

 VAR_21 = -VAR_6;
 if (!FUNC_2(&VAR_20->sat_addr))
  goto out;

 VAR_19->dest_port = VAR_20->sat_port;
 VAR_19->dest_net = VAR_20->sat_addr.s_net;
 VAR_19->dest_node = VAR_20->sat_addr.s_node;

 VAR_14->state = VAR_9;
 VAR_18->sk_state = VAR_12;
 VAR_21 = 0;
out:
 FUNC_5(VAR_18);
 return VAR_21;
}
