
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udp_sock {size_t len; scalar_t__ corkflag; int pending; } ;
struct sock {int sk_socket; } ;
struct page {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct TYPE_4__ {int ip4; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__ fl; } ;
struct inet_sock {TYPE_3__ cork; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int *,struct page*,int,size_t,int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,struct page*,int,size_t,int) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,struct msghdr*,int ) ;
 struct udp_sock* FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct sock *VAR_4, struct page *VAR_5, int VAR_6,
   size_t VAR_7, int VAR_8)
{
 struct inet_sock *VAR_9 = FUNC_0(VAR_4);
 struct udp_sock *VAR_10 = FUNC_9(VAR_4);
 int VAR_11;

 if (VAR_8 & VAR_3)
  VAR_8 |= VAR_2;

 if (!VAR_10->pending) {
  struct msghdr VAR_12 = { .msg_flags = VAR_8|VAR_2 };





  VAR_11 = FUNC_8(VAR_4, &VAR_12, 0);
  if (VAR_11 < 0)
   return VAR_11;
 }

 FUNC_2(VAR_4);

 if (FUNC_10(!VAR_10->pending)) {
  FUNC_4(VAR_4);

  FUNC_3("cork failed\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_1(VAR_4, &VAR_9->cork.fl.u.ip4,
        VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_11 == -VAR_1) {
  FUNC_4(VAR_4);
  return FUNC_5(VAR_4->sk_socket, VAR_5, VAR_6,
     VAR_7, VAR_8);
 }
 if (VAR_11 < 0) {
  FUNC_6(VAR_4);
  goto out;
 }

 VAR_10->len += VAR_7;
 if (!(VAR_10->corkflag || (VAR_8&VAR_2)))
  VAR_11 = FUNC_7(VAR_4);
 if (!VAR_11)
  VAR_11 = VAR_7;
out:
 FUNC_4(VAR_4);
 return VAR_11;
}
