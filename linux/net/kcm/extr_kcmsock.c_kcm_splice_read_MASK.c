
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strp_msg {size_t full_len; int offset; } ;
struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pipe_inode_info {int dummy; } ;
struct TYPE_2__ {int rx_bytes; } ;
struct kcm_sock {TYPE_1__ stats; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (int ,int) ;
 unsigned int VAR_0 ;
 struct kcm_sock* FUNC_1 (struct sock*) ;
 struct sk_buff* FUNC_2 (struct sock*,unsigned int,long,int*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff*,struct sock*,int,struct pipe_inode_info*,size_t,unsigned int) ;
 long FUNC_6 (struct sock*,unsigned int) ;
 struct strp_msg* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static ssize_t FUNC_8(struct socket *VAR_1, loff_t *VAR_2,
          struct pipe_inode_info *VAR_3, size_t VAR_4,
          unsigned int VAR_5)
{
 struct sock *VAR_6 = VAR_1->sk;
 struct kcm_sock *VAR_7 = FUNC_1(VAR_6);
 long VAR_8;
 struct strp_msg *VAR_9;
 int VAR_10 = 0;
 ssize_t VAR_11;
 struct sk_buff *VAR_12;



 VAR_8 = FUNC_6(VAR_6, VAR_5 & VAR_0);

 FUNC_3(VAR_6);

 VAR_12 = FUNC_2(VAR_6, VAR_5, VAR_8, &VAR_10);
 if (!VAR_12)
  goto err_out;



 VAR_9 = FUNC_7(VAR_12);

 if (VAR_4 > VAR_9->full_len)
  VAR_4 = VAR_9->full_len;

 VAR_11 = FUNC_5(VAR_12, VAR_6, VAR_9->offset, VAR_3, VAR_4, VAR_5);
 if (VAR_11 < 0) {
  VAR_10 = VAR_11;
  goto err_out;
 }

 FUNC_0(VAR_7->stats.rx_bytes, VAR_11);

 VAR_9->offset += VAR_11;
 VAR_9->full_len -= VAR_11;







 FUNC_4(VAR_6);

 return VAR_11;

err_out:
 FUNC_4(VAR_6);

 return VAR_10;
}
