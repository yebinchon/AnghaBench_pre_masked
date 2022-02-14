
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_type; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (char*,struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, struct sock *VAR_1)
{
 FUNC_0("sk %p", VAR_0);

 if (VAR_1) {
  VAR_0->sk_type = VAR_1->sk_type;
  FUNC_1(VAR_0)->flags = FUNC_1(VAR_1)->flags;
  FUNC_2(VAR_1, VAR_0);
 }
}
