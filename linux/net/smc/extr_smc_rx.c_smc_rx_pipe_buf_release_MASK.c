
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct smc_spd_priv {int len; struct smc_sock* smc; } ;
struct smc_connection {int splice_pending; } ;
struct smc_sock {struct smc_connection conn; struct sock sk; } ;
struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int page; scalar_t__ private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct smc_spd_priv*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct smc_sock*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct pipe_inode_info *VAR_3,
        struct pipe_buffer *VAR_4)
{
 struct smc_spd_priv *VAR_5 = (struct smc_spd_priv *)VAR_4->private;
 struct smc_sock *VAR_6 = VAR_5->smc;
 struct smc_connection *VAR_7;
 struct sock *VAR_8 = &VAR_6->sk;

 if (VAR_8->sk_state == VAR_1 ||
     VAR_8->sk_state == VAR_2 ||
     VAR_8->sk_state == VAR_0)
  goto out;
 VAR_7 = &VAR_6->conn;
 FUNC_2(VAR_8);
 FUNC_5(VAR_6, VAR_5->len);
 FUNC_4(VAR_8);
 if (FUNC_0(VAR_5->len, &VAR_7->splice_pending))
  FUNC_6(VAR_8);
out:
 FUNC_1(VAR_5);
 FUNC_3(VAR_4->page);
 FUNC_7(VAR_8);
}
