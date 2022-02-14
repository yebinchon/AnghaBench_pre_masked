
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {scalar_t__ s_net; int s_node; } ;
struct sockaddr_at {scalar_t__ sat_family; scalar_t__ sat_port; TYPE_1__ sat_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct atalk_sock {scalar_t__ src_net; scalar_t__ src_port; int src_node; } ;
struct atalk_addr {scalar_t__ s_net; int s_node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct atalk_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct sock*,struct sockaddr_at*) ;
 struct atalk_addr* FUNC_3 () ;
 int FUNC_4 (struct sock*,struct sockaddr_at*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_8, struct sockaddr *VAR_9, int VAR_10)
{
 struct sockaddr_at *VAR_11 = (struct sockaddr_at *)VAR_9;
 struct sock *VAR_12 = VAR_8->sk;
 struct atalk_sock *VAR_13 = FUNC_0(VAR_12);
 int VAR_14;

 if (!FUNC_8(VAR_12, VAR_7) ||
     VAR_10 != sizeof(struct sockaddr_at))
  return -VAR_6;

 if (VAR_11->sat_family != VAR_0)
  return -VAR_5;

 FUNC_6(VAR_12);
 if (VAR_11->sat_addr.s_net == FUNC_5(VAR_1)) {
  struct atalk_addr *VAR_15 = FUNC_3();

  VAR_14 = -VAR_4;
  if (!VAR_15)
   goto out;

  VAR_13->src_net = VAR_11->sat_addr.s_net = VAR_15->s_net;
  VAR_13->src_node = VAR_11->sat_addr.s_node = VAR_15->s_node;
 } else {
  VAR_14 = -VAR_4;
  if (!FUNC_1(VAR_11->sat_addr.s_net,
       VAR_11->sat_addr.s_node))
   goto out;

  VAR_13->src_net = VAR_11->sat_addr.s_net;
  VAR_13->src_node = VAR_11->sat_addr.s_node;
 }

 if (VAR_11->sat_port == VAR_2) {
  VAR_14 = FUNC_4(VAR_12, VAR_11);

  if (VAR_14 < 0)
   goto out;
 } else {
  VAR_13->src_port = VAR_11->sat_port;

  VAR_14 = -VAR_3;
  if (FUNC_2(VAR_12, VAR_11))
   goto out;
 }

 FUNC_9(VAR_12, VAR_7);
 VAR_14 = 0;
out:
 FUNC_7(VAR_12);
 return VAR_14;
}
