
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; } ;
struct smc_sock {TYPE_2__* clcsock; scalar_t__ use_fallback; } ;
struct pipe_inode_info {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* splice_read ) (TYPE_2__*,scalar_t__*,struct pipe_inode_info*,size_t,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct smc_sock*,int *,struct pipe_inode_info*,size_t,unsigned int) ;
 struct smc_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__*,struct pipe_inode_info*,size_t,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_5(struct socket *VAR_9, loff_t *VAR_10,
          struct pipe_inode_info *VAR_11, size_t VAR_12,
          unsigned int VAR_13)
{
 struct sock *VAR_14 = VAR_9->sk;
 struct smc_sock *VAR_15;
 int VAR_16 = -VAR_0;

 VAR_15 = FUNC_3(VAR_14);
 FUNC_0(VAR_14);
 if (VAR_14->sk_state == VAR_4 && (VAR_14->sk_shutdown & VAR_3)) {

  VAR_16 = 0;
  goto out;
 }
 if (VAR_14->sk_state == VAR_5 ||
     VAR_14->sk_state == VAR_6 ||
     VAR_14->sk_state == VAR_4)
  goto out;

 if (VAR_14->sk_state == VAR_7) {
  VAR_16 = 0;
  goto out;
 }

 if (VAR_15->use_fallback) {
  VAR_16 = VAR_15->clcsock->ops->splice_read(VAR_15->clcsock, VAR_10,
          VAR_11, VAR_12, VAR_13);
 } else {
  if (*VAR_10) {
   VAR_16 = -VAR_1;
   goto out;
  }
  if (VAR_13 & VAR_8)
   VAR_13 = VAR_2;
  else
   VAR_13 = 0;
  VAR_16 = FUNC_2(VAR_15, ((void*)0), VAR_11, VAR_12, VAR_13);
 }
out:
 FUNC_1(VAR_14);

 return VAR_16;
}
