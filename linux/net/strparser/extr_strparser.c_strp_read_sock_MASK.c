
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int (* read_sock_done ) (struct strparser*,int) ;} ;
struct strparser {TYPE_3__ cb; TYPE_5__* sk; } ;
struct socket {TYPE_2__* ops; } ;
struct TYPE_7__ {struct strparser* data; } ;
struct TYPE_10__ {int error; int count; TYPE_1__ arg; } ;
typedef TYPE_4__ read_descriptor_t ;
struct TYPE_11__ {struct socket* sk_socket; } ;
struct TYPE_8__ {int (* read_sock ) (TYPE_5__*,TYPE_4__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_1 (struct strparser*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct strparser *VAR_2)
{
 struct socket *VAR_3 = VAR_2->sk->sk_socket;
 read_descriptor_t VAR_4;

 if (FUNC_2(!VAR_3 || !VAR_3->ops || !VAR_3->ops->read_sock))
  return -VAR_0;

 VAR_4.arg.data = VAR_2;
 VAR_4.error = 0;
 VAR_4.count = 1;


 VAR_3->ops->read_sock(VAR_2->sk, &VAR_4, VAR_1);

 VAR_4.error = VAR_2->cb.read_sock_done(VAR_2, VAR_4.error);

 return VAR_4.error;
}
