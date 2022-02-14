
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_reuseport {int bind_inany; int num_socks; struct sock** socks; } ;
struct sock {int sk_reuseport_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock_reuseport* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct sock_reuseport*) ;
 struct sock_reuseport* FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct sock *VAR_3, bool VAR_4)
{
 struct sock_reuseport *VAR_5;




 FUNC_4(&VAR_2);




 VAR_5 = FUNC_3(VAR_3->sk_reuseport_cb,
       FUNC_1(&VAR_2));
 if (VAR_5) {




  if (VAR_4)
   VAR_5->bind_inany = VAR_4;
  goto out;
 }

 VAR_5 = FUNC_0(VAR_1);
 if (!VAR_5) {
  FUNC_5(&VAR_2);
  return -VAR_0;
 }

 VAR_5->socks[0] = VAR_3;
 VAR_5->num_socks = 1;
 VAR_5->bind_inany = VAR_4;
 FUNC_2(VAR_3->sk_reuseport_cb, VAR_5);

out:
 FUNC_5(&VAR_2);

 return 0;
}
