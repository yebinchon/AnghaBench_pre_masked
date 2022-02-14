
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_type; } ;


 int FUNC_0 (struct sock*,struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0, struct sock *VAR_1)
{
 if (VAR_1) {
  VAR_0->sk_type = VAR_1->sk_type;
  FUNC_0(VAR_1, VAR_0);
 }
}
