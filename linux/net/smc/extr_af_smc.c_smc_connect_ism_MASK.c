
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sk_state; } ;
struct smc_sock {TYPE_2__ sk; scalar_t__ connect_nonblock; } ;
struct smc_init_info {int is_smcd; int cln_first_contact; int srv_first_contact; int ism_gid; } ;
struct TYPE_3__ {int flag; } ;
struct smc_clc_msg_accept_confirm {TYPE_1__ hdr; int gid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct smc_sock*,int) ;
 int FUNC_3 (struct smc_sock*) ;
 int FUNC_4 (struct smc_sock*) ;
 int FUNC_5 (struct smc_sock*,struct smc_init_info*) ;
 int FUNC_6 (struct smc_sock*,struct smc_clc_msg_accept_confirm*) ;
 int FUNC_7 (struct smc_sock*,int,int ) ;
 int FUNC_8 (struct smc_sock*) ;
 int FUNC_9 (struct smc_sock*) ;
 int VAR_3 ;
 int FUNC_10 (struct smc_sock*) ;

__attribute__((used)) static int FUNC_11(struct smc_sock *VAR_4,
      struct smc_clc_msg_accept_confirm *VAR_5,
      struct smc_init_info *VAR_6)
{
 int VAR_7 = 0;

 VAR_6->is_smcd = 1;
 VAR_6->ism_gid = VAR_5->gid;
 VAR_6->srv_first_contact = VAR_5->hdr.flag;


 FUNC_0(&VAR_3);
 VAR_7 = FUNC_5(VAR_4, VAR_6);
 if (VAR_7) {
  FUNC_1(&VAR_3);
  return VAR_7;
 }


 if (FUNC_2(VAR_4, 1))
  return FUNC_7(VAR_4, VAR_1,
      VAR_6->cln_first_contact);

 FUNC_6(VAR_4, VAR_5);
 FUNC_4(VAR_4);
 FUNC_9(VAR_4);
 FUNC_10(VAR_4);

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7)
  return FUNC_7(VAR_4, VAR_7, VAR_6->cln_first_contact);
 FUNC_1(&VAR_3);

 FUNC_8(VAR_4);
 VAR_4->connect_nonblock = 0;
 if (VAR_4->sk.sk_state == VAR_2)
  VAR_4->sk.sk_state = VAR_0;

 return 0;
}
