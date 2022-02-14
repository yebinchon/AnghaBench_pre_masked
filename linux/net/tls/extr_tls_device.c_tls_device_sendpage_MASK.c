
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int tx_lock; } ;
struct sock {int dummy; } ;
struct page {int dummy; } ;
struct kvec {char* iov_base; size_t iov_len; } ;
struct iov_iter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iov_iter*,int ,struct kvec*,int,size_t) ;
 char* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;
 struct tls_context* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,struct iov_iter*,size_t,int,int ) ;

int FUNC_9(struct sock *VAR_6, struct page *VAR_7,
   int VAR_8, size_t VAR_9, int VAR_10)
{
 struct tls_context *VAR_11 = FUNC_7(VAR_6);
 struct iov_iter VAR_12;
 char *VAR_13 = FUNC_1(VAR_7);
 struct kvec VAR_14;
 int VAR_15;

 if (VAR_10 & VAR_3)
  VAR_10 |= VAR_1;

 FUNC_4(&VAR_11->tx_lock);
 FUNC_3(VAR_6);

 if (VAR_10 & VAR_2) {
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_14.iov_base = VAR_13 + VAR_8;
 VAR_14.iov_len = VAR_9;
 FUNC_0(&VAR_12, VAR_5, &VAR_14, 1, VAR_9);
 VAR_15 = FUNC_8(VAR_6, &VAR_12, VAR_9,
      VAR_10, VAR_4);
 FUNC_2(VAR_7);

out:
 FUNC_6(VAR_6);
 FUNC_5(&VAR_11->tx_lock);
 return VAR_15;
}
