
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ubuf_info {int dummy; } ;
struct tcp_sock {TYPE_3__* fastopen_req; } ;
struct tcp_fastopen_request {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {int sk_socket; scalar_t__ sk_route_caps; int sk_allocation; } ;
struct msghdr {int msg_namelen; int msg_flags; struct sockaddr* msg_name; } ;
struct inet_sock {scalar_t__ defer_connect; scalar_t__ inet_dport; } ;
struct TYPE_6__ {size_t size; int copied; struct ubuf_info* uarg; struct msghdr* data; } ;
struct TYPE_4__ {int sysctl_tcp_fastopen; } ;
struct TYPE_5__ {TYPE_1__ ipv4; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct sockaddr*,int,int,int) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 TYPE_3__* FUNC_2 (int,int ) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_8, struct msghdr *VAR_9,
    int *VAR_10, size_t VAR_11,
    struct ubuf_info *VAR_12)
{
 struct tcp_sock *VAR_13 = FUNC_7(VAR_8);
 struct inet_sock *VAR_14 = FUNC_1(VAR_8);
 struct sockaddr *VAR_15 = VAR_9->msg_name;
 int VAR_16, VAR_17;

 if (!(FUNC_3(VAR_8)->ipv4.sysctl_tcp_fastopen & VAR_7) ||
     (VAR_15 && VAR_9->msg_namelen >= sizeof(VAR_15->sa_family) &&
      VAR_15->sa_family == VAR_0))
  return -VAR_3;
 if (VAR_13->fastopen_req)
  return -VAR_1;

 VAR_13->fastopen_req = FUNC_2(sizeof(struct tcp_fastopen_request),
       VAR_8->sk_allocation);
 if (FUNC_8(!VAR_13->fastopen_req))
  return -VAR_2;
 VAR_13->fastopen_req->data = VAR_9;
 VAR_13->fastopen_req->size = VAR_11;
 VAR_13->fastopen_req->uarg = VAR_12;

 if (VAR_14->defer_connect) {
  VAR_16 = FUNC_4(VAR_8);

  if (VAR_16) {
   FUNC_6(VAR_8, VAR_6);
   VAR_14->inet_dport = 0;
   VAR_8->sk_route_caps = 0;
  }
 }
 VAR_17 = (VAR_9->msg_flags & VAR_4) ? VAR_5 : 0;
 VAR_16 = FUNC_0(VAR_8->sk_socket, VAR_15,
        VAR_9->msg_namelen, VAR_17, 1);



 if (VAR_13->fastopen_req) {
  *VAR_10 = VAR_13->fastopen_req->copied;
  FUNC_5(VAR_13);
  VAR_14->defer_connect = 0;
 }
 return VAR_16;
}
