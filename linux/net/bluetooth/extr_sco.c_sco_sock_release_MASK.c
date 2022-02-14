
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_lingertime; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sock*,int ,scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_4)
{
 struct sock *VAR_5 = VAR_4->sk;
 int VAR_6 = 0;

 FUNC_0("sock %p, sk %p", VAR_4, VAR_5);

 if (!VAR_5)
  return 0;

 FUNC_4(VAR_5);

 if (FUNC_6(VAR_5, VAR_2) && VAR_5->sk_lingertime &&
     !(VAR_3->flags & VAR_1)) {
  FUNC_2(VAR_5);
  VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_5->sk_lingertime);
  FUNC_3(VAR_5);
 }

 FUNC_7(VAR_5);
 FUNC_5(VAR_5);
 return VAR_6;
}
