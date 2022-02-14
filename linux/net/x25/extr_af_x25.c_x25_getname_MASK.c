
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_sock {int source_addr; int dest_addr; } ;
struct socket {struct sock* sk; } ;
struct sockaddr_x25 {int sx25_family; int sx25_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct x25_sock* FUNC_0 (struct sock*) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_3, struct sockaddr *VAR_4,
         int VAR_5)
{
 struct sockaddr_x25 *VAR_6 = (struct sockaddr_x25 *)VAR_4;
 struct sock *VAR_7 = VAR_3->sk;
 struct x25_sock *VAR_8 = FUNC_0(VAR_7);
 int VAR_9 = 0;

 if (VAR_5) {
  if (VAR_7->sk_state != VAR_2) {
   VAR_9 = -VAR_1;
   goto out;
  }
  VAR_6->sx25_addr = VAR_8->dest_addr;
 } else
  VAR_6->sx25_addr = VAR_8->source_addr;

 VAR_6->sx25_family = VAR_0;
 VAR_9 = sizeof(*VAR_6);

out:
 return VAR_9;
}
