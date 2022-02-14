
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct sock {struct socket* sk_socket; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int (* sendpage_locked ) (struct sock*,struct page*,int,size_t,int) ;} ;


 int FUNC_0 (struct sock*,struct page*,int,size_t,int) ;
 int FUNC_1 (struct sock*,struct page*,int,size_t,int) ;

int FUNC_2(struct sock *VAR_0, struct page *VAR_1, int VAR_2,
      size_t VAR_3, int VAR_4)
{
 struct socket *VAR_5 = VAR_0->sk_socket;

 if (VAR_5->ops->sendpage_locked)
  return VAR_5->ops->sendpage_locked(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
