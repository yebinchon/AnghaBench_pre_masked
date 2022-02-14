
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct socket {int sk; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {int dst; scalar_t__ conn; } ;
struct hidp_session {int user; } ;
struct hidp_connadd_req {int flags; } ;
struct TYPE_2__ {struct l2cap_chan* chan; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hidp_session**,int *,struct socket*,struct socket*,struct hidp_connadd_req const*,struct l2cap_conn*) ;
 int FUNC_2 (struct hidp_session*) ;
 int FUNC_3 (struct socket*,struct socket*) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct l2cap_chan*) ;
 struct l2cap_conn* FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct l2cap_conn*) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (struct l2cap_conn*,int *) ;

int FUNC_10(const struct hidp_connadd_req *VAR_4,
   struct socket *VAR_5,
   struct socket *VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_3) |
     FUNC_0(VAR_2);
 struct hidp_session *VAR_8;
 struct l2cap_conn *VAR_9;
 struct l2cap_chan *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_5, VAR_6);
 if (VAR_11)
  return VAR_11;

 if (VAR_4->flags & ~VAR_7)
  return -VAR_1;

 VAR_10 = FUNC_8(VAR_5->sk)->chan;
 VAR_9 = ((void*)0);
 FUNC_4(VAR_10);
 if (VAR_10->conn)
  VAR_9 = FUNC_6(VAR_10->conn);
 FUNC_5(VAR_10);

 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_1(&VAR_8, &VAR_10->dst, VAR_5,
          VAR_6, VAR_4, VAR_9);
 if (VAR_11)
  goto out_conn;

 VAR_11 = FUNC_9(VAR_9, &VAR_8->user);
 if (VAR_11)
  goto out_session;

 VAR_11 = 0;

out_session:
 FUNC_2(VAR_8);
out_conn:
 FUNC_7(VAR_9);
 return VAR_11;
}
