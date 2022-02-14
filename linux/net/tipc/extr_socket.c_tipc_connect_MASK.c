
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_sock {long conn_timeout; int peer; scalar_t__ group; } ;
struct socket {struct sock* sk; } ;
struct sockaddr_tipc {scalar_t__ family; scalar_t__ addrtype; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; } ;
struct msghdr {int msg_namelen; int msg_flags; struct sockaddr* msg_name; int * member_0; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 scalar_t__ VAR_8 ;
 int FUNC_0 (struct socket*,struct msghdr*,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,struct sockaddr*,int) ;
 int FUNC_3 (int *,int ,int) ;
 long FUNC_4 (long) ;
 int FUNC_5 (struct sock*) ;
 struct tipc_sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sockaddr_tipc*) ;
 int FUNC_9 (struct socket*,long*) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_9, struct sockaddr *VAR_10,
   int VAR_11, int VAR_12)
{
 struct sock *VAR_13 = VAR_9->sk;
 struct tipc_sock *VAR_14 = FUNC_6(VAR_13);
 struct sockaddr_tipc *VAR_15 = (struct sockaddr_tipc *)VAR_10;
 struct msghdr VAR_16 = {((void*)0),};
 long VAR_17 = (VAR_12 & VAR_7) ? 0 : VAR_14->conn_timeout;
 int VAR_18;
 int VAR_19 = 0;

 if (VAR_11 != sizeof(struct sockaddr_tipc))
  return -VAR_3;

 FUNC_1(VAR_13);

 if (VAR_14->group) {
  VAR_19 = -VAR_3;
  goto exit;
 }

 if (VAR_15->family == VAR_0) {
  FUNC_3(&VAR_14->peer, 0, sizeof(struct sockaddr_tipc));
  if (!FUNC_7(VAR_13))
   VAR_19 = -VAR_3;
  goto exit;
 }
 if (!FUNC_8(VAR_15)) {
  VAR_19 = -VAR_3;
  goto exit;
 }

 if (FUNC_7(VAR_13)) {
  FUNC_2(&VAR_14->peer, VAR_10, VAR_11);
  goto exit;
 } else if (VAR_15->addrtype == VAR_8) {
  VAR_19 = -VAR_3;
  goto exit;
 }

 VAR_18 = VAR_13->sk_state;

 switch (VAR_13->sk_state) {
 case 128:

  VAR_16.msg_name = VAR_10;
  VAR_16.msg_namelen = VAR_11;




  if (!VAR_17)
   VAR_16.msg_flags = VAR_6;

  VAR_19 = FUNC_0(VAR_9, &VAR_16, 0);
  if ((VAR_19 < 0) && (VAR_19 != -VAR_5))
   goto exit;





  VAR_19 = -VAR_2;

 case 130:
  if (!VAR_17) {
   if (VAR_18 == 130)
    VAR_19 = -VAR_1;
   goto exit;
  }
  VAR_17 = FUNC_4(VAR_17);

  VAR_19 = FUNC_9(VAR_9, &VAR_17);
  break;
 case 129:
  VAR_19 = -VAR_4;
  break;
 default:
  VAR_19 = -VAR_3;
 }

exit:
 FUNC_5(VAR_13);
 return VAR_19;
}
