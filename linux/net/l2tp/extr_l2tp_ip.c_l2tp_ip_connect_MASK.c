
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_l2tpip {int l2tp_conn_id; TYPE_1__ l2tp_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_bind_node; } ;
struct TYPE_4__ {int peer_conn_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,struct sockaddr*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int *) ;
 scalar_t__ FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_4, struct sockaddr *VAR_5, int VAR_6)
{
 struct sockaddr_l2tpip *VAR_7 = (struct sockaddr_l2tpip *) VAR_5;
 int VAR_8;

 if (VAR_6 < sizeof(*VAR_7))
  return -VAR_0;

 if (FUNC_2(VAR_7->l2tp_addr.s_addr))
  return -VAR_0;

 FUNC_4(VAR_4);


 if (FUNC_7(VAR_4, VAR_1)) {
  VAR_8 = -VAR_0;
  goto out_sk;
 }

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_8 < 0)
  goto out_sk;

 FUNC_3(VAR_4)->peer_conn_id = VAR_7->l2tp_conn_id;

 FUNC_8(&VAR_3);
 FUNC_1(&VAR_4->sk_bind_node);
 FUNC_6(VAR_4, &VAR_2);
 FUNC_9(&VAR_3);

out_sk:
 FUNC_5(VAR_4);

 return VAR_8;
}
