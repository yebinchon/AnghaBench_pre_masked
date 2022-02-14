
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_lingertime; int sk_shutdown; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,scalar_t__) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_5->sk;
 int VAR_8 = 0;

 FUNC_0("sock %p, sk %p", VAR_5, VAR_7);

 if (!VAR_7)
  return 0;

 FUNC_7(VAR_7);
 FUNC_3(VAR_7);

 if (!VAR_7->sk_shutdown) {
  VAR_7->sk_shutdown = VAR_2;
  FUNC_5(VAR_7);
  FUNC_1(VAR_7);

  if (FUNC_6(VAR_7, VAR_3) && VAR_7->sk_lingertime &&
      !(VAR_4->flags & VAR_1))
   VAR_8 = FUNC_2(VAR_7, VAR_0,
       VAR_7->sk_lingertime);
 }

 FUNC_4(VAR_7);
 FUNC_8(VAR_7);

 return VAR_8;
}
