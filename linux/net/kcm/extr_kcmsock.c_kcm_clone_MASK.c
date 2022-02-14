
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {struct sock* sk; TYPE_1__* ops; int type; } ;
struct sock {TYPE_2__* sk_prot_creator; } ;
struct file {int dummy; } ;
struct TYPE_7__ {int mux; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_4 ;
 TYPE_3__* FUNC_3 (struct sock*) ;
 struct sock* FUNC_4 (int ,int ,int ,int *,int) ;
 struct socket* FUNC_5 () ;
 struct file* FUNC_6 (struct socket*,int ,int ) ;
 int FUNC_7 (struct socket*,struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct socket*) ;

__attribute__((used)) static struct file *FUNC_10(struct socket *VAR_5)
{
 struct socket *VAR_6;
 struct sock *VAR_7;

 VAR_6 = FUNC_5();
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->type = VAR_5->type;
 VAR_6->ops = VAR_5->ops;

 FUNC_1(VAR_6->ops->owner);

 VAR_7 = FUNC_4(FUNC_8(VAR_5->sk), VAR_3, VAR_2,
    &VAR_4, 0);
 if (!VAR_7) {
  FUNC_9(VAR_6);
  return FUNC_0(-VAR_1);
 }
 FUNC_7(VAR_6, VAR_7);
 FUNC_2(FUNC_3(VAR_7), FUNC_3(VAR_5->sk)->mux);

 return FUNC_6(VAR_6, 0, VAR_5->sk->sk_prot_creator->name);
}
