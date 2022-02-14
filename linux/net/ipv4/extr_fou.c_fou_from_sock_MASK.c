
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct fou* sk_user_data; } ;
struct fou {int dummy; } ;



__attribute__((used)) static inline struct fou *FUNC_0(struct sock *VAR_0)
{
 return VAR_0->sk_user_data;
}
