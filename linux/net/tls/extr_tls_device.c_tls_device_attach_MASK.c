
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {scalar_t__ sk_destruct; int list; struct net_device* netdev; int refcount; } ;
struct sock {scalar_t__ sk_destruct; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_5(struct tls_context *VAR_3, struct sock *VAR_4,
         struct net_device *VAR_5)
{
 if (VAR_4->sk_destruct != VAR_2) {
  FUNC_2(&VAR_3->refcount, 1);
  FUNC_0(VAR_5);
  VAR_3->netdev = VAR_5;
  FUNC_3(&VAR_1);
  FUNC_1(&VAR_3->list, &VAR_0);
  FUNC_4(&VAR_1);

  VAR_3->sk_destruct = VAR_4->sk_destruct;
  VAR_4->sk_destruct = VAR_2;
 }
}
