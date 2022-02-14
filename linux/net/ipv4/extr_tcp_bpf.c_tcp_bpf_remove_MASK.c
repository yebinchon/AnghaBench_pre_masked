
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_psock_link {int dummy; } ;
struct sk_psock {int dummy; } ;


 int FUNC_0 (struct sk_psock_link*) ;
 struct sk_psock_link* FUNC_1 (struct sk_psock*) ;
 int FUNC_2 (struct sock*,struct sk_psock_link*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, struct sk_psock *VAR_1)
{
 struct sk_psock_link *VAR_2;

 while ((VAR_2 = FUNC_1(VAR_1))) {
  FUNC_2(VAR_0, VAR_2);
  FUNC_0(VAR_2);
 }
}
