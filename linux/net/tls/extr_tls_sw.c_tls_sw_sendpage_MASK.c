
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int tx_lock; } ;
struct sock {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;
 struct tls_context* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct page*,int,size_t,int) ;

int FUNC_6(struct sock *VAR_6, struct page *VAR_7,
      int VAR_8, size_t VAR_9, int VAR_10)
{
 struct tls_context *VAR_11 = FUNC_4(VAR_6);
 int VAR_12;

 if (VAR_10 & ~(VAR_2 | VAR_1 | VAR_3 |
        VAR_5 | VAR_4))
  return -VAR_0;

 FUNC_1(&VAR_11->tx_lock);
 FUNC_0(VAR_6);
 VAR_12 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 FUNC_3(VAR_6);
 FUNC_2(&VAR_11->tx_lock);
 return VAR_12;
}
