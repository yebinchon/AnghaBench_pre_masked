
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct smc_sock {int clcsock; scalar_t__ use_fallback; } ;
struct page {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct page*,int,size_t,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct smc_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct socket*,struct page*,int,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct socket *VAR_2, struct page *VAR_3,
       int VAR_4, size_t VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_2->sk;
 struct smc_sock *VAR_8;
 int VAR_9 = -VAR_0;

 VAR_8 = FUNC_3(VAR_7);
 FUNC_1(VAR_7);
 if (VAR_7->sk_state != VAR_1) {
  FUNC_2(VAR_7);
  goto out;
 }
 FUNC_2(VAR_7);
 if (VAR_8->use_fallback)
  VAR_9 = FUNC_0(VAR_8->clcsock, VAR_3, VAR_4,
         VAR_5, VAR_6);
 else
  VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

out:
 return VAR_9;
}
