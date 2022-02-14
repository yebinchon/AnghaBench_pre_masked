
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_reuseport {int num_socks; int max_socks; int rcu; struct sock** socks; } ;
struct sock {int sk_reuseport_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct sock_reuseport*) ;
 struct sock_reuseport* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sock*,int) ;
 int VAR_2 ;
 struct sock_reuseport* FUNC_6 (struct sock_reuseport*) ;
 int VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct sock *VAR_4, struct sock *VAR_5, bool VAR_6)
{
 struct sock_reuseport *VAR_7, *VAR_8;

 if (!FUNC_2(VAR_5->sk_reuseport_cb)) {
  int VAR_9 = FUNC_5(VAR_5, VAR_6);

  if (VAR_9)
   return VAR_9;
 }

 FUNC_8(&VAR_3);
 VAR_8 = FUNC_4(VAR_5->sk_reuseport_cb,
       FUNC_1(&VAR_3));
 VAR_7 = FUNC_4(VAR_4->sk_reuseport_cb,
          FUNC_1(&VAR_3));
 if (VAR_7 && VAR_7->num_socks != 1) {
  FUNC_9(&VAR_3);
  return -VAR_0;
 }

 if (VAR_8->num_socks == VAR_8->max_socks) {
  VAR_8 = FUNC_6(VAR_8);
  if (!VAR_8) {
   FUNC_9(&VAR_3);
   return -VAR_1;
  }
 }

 VAR_8->socks[VAR_8->num_socks] = VAR_4;

 FUNC_7();
 VAR_8->num_socks++;
 FUNC_3(VAR_4->sk_reuseport_cb, VAR_8);

 FUNC_9(&VAR_3);

 if (VAR_7)
  FUNC_0(&VAR_7->rcu, VAR_2);
 return 0;
}
