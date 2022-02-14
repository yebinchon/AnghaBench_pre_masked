
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (struct sock*) ;
 struct sk_buff* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0)
{
 struct sk_buff *VAR_1;
 __be32 *VAR_2 = ((void*)0);
 int VAR_3 = 0;

 VAR_1 = FUNC_1(&VAR_0->sk_write_queue);
 if (VAR_1 == ((void*)0))
  goto out;

 VAR_2 = (__be32 *)FUNC_2(VAR_1);
 *VAR_2 = 0;

 VAR_3 = FUNC_0(VAR_0);

out:
 return VAR_3;
}
