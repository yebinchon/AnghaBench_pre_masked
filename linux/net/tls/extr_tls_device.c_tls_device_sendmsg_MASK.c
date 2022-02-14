
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int tx_lock; } ;
struct sock {int dummy; } ;
struct msghdr {int msg_flags; int msg_iter; int msg_controllen; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;
 struct tls_context* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct msghdr*,unsigned char*) ;
 int FUNC_6 (struct sock*,int *,size_t,int ,unsigned char) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct sock *VAR_1, struct msghdr *VAR_2, size_t VAR_3)
{
 unsigned char VAR_4 = VAR_0;
 struct tls_context *VAR_5 = FUNC_4(VAR_1);
 int VAR_6;

 FUNC_1(&VAR_5->tx_lock);
 FUNC_0(VAR_1);

 if (FUNC_7(VAR_2->msg_controllen)) {
  VAR_6 = FUNC_5(VAR_1, VAR_2, &VAR_4);
  if (VAR_6)
   goto out;
 }

 VAR_6 = FUNC_6(VAR_1, &VAR_2->msg_iter, VAR_3,
      VAR_2->msg_flags, VAR_4);

out:
 FUNC_3(VAR_1);
 FUNC_2(&VAR_5->tx_lock);
 return VAR_6;
}
