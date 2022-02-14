
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {int s_node; int s_net; } ;
struct sockaddr_at {int sat_family; int sat_port; TYPE_1__ sat_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct atalk_sock {int src_port; int src_node; int src_net; int dest_port; int dest_node; int dest_net; } ;
typedef int sat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct atalk_sock* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sockaddr*,struct sockaddr_at*,int) ;
 int FUNC_4 (struct sockaddr_at*,int ,int) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_5, struct sockaddr *VAR_6,
    int VAR_7)
{
 struct sockaddr_at VAR_8;
 struct sock *VAR_9 = VAR_5->sk;
 struct atalk_sock *VAR_10 = FUNC_0(VAR_9);
 int VAR_11;

 FUNC_2(VAR_9);
 VAR_11 = -VAR_1;
 if (FUNC_6(VAR_9, VAR_3))
  if (FUNC_1(VAR_9) < 0)
   goto out;

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 if (VAR_7) {
  VAR_11 = -VAR_2;
  if (VAR_9->sk_state != VAR_4)
   goto out;

  VAR_8.sat_addr.s_net = VAR_10->dest_net;
  VAR_8.sat_addr.s_node = VAR_10->dest_node;
  VAR_8.sat_port = VAR_10->dest_port;
 } else {
  VAR_8.sat_addr.s_net = VAR_10->src_net;
  VAR_8.sat_addr.s_node = VAR_10->src_node;
  VAR_8.sat_port = VAR_10->src_port;
 }

 VAR_8.sat_family = VAR_0;
 FUNC_3(VAR_6, &VAR_8, sizeof(VAR_8));
 VAR_11 = sizeof(struct sockaddr_at);

out:
 FUNC_5(VAR_9);
 return VAR_11;
}
