
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct l2tp_tunnel* sk_user_data; } ;
struct l2tp_tunnel {int dummy; } ;



__attribute__((used)) static inline struct l2tp_tunnel *FUNC_0(struct sock *VAR_0)
{
 return VAR_0->sk_user_data;
}
