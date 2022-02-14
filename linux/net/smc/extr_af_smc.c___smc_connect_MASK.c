
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smc_sock {TYPE_3__* clcsock; int fallback_rsn; scalar_t__ use_fallback; } ;
struct smc_init_info {int member_0; } ;
struct TYPE_4__ {int path; } ;
struct smc_clc_msg_accept_confirm {TYPE_1__ hdr; } ;
struct TYPE_6__ {int sk; } ;
struct TYPE_5__ {int syn_smc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct smc_sock*,int,struct smc_clc_msg_accept_confirm*,struct smc_init_info*) ;
 int FUNC_1 (struct smc_sock*,int) ;
 int FUNC_2 (struct smc_sock*,int ) ;
 int FUNC_3 (struct smc_sock*,struct smc_clc_msg_accept_confirm*,struct smc_init_info*) ;
 int FUNC_4 (struct smc_sock*,int,struct smc_init_info*) ;
 int FUNC_5 (struct smc_sock*,struct smc_init_info*) ;
 int FUNC_6 (struct smc_sock*,struct smc_clc_msg_accept_confirm*,struct smc_init_info*) ;
 int FUNC_7 (struct smc_sock*,struct smc_init_info*) ;
 int FUNC_8 (struct smc_sock*,struct smc_init_info*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,struct smc_init_info*) ;
 TYPE_2__* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct smc_sock*) ;

__attribute__((used)) static int FUNC_12(struct smc_sock *VAR_8)
{
 bool VAR_9 = 0, VAR_10 = 0;
 struct smc_clc_msg_accept_confirm VAR_11;
 struct smc_init_info VAR_12 = {0};
 int VAR_13;
 int VAR_14 = 0;

 if (VAR_8->use_fallback)
  return FUNC_2(VAR_8, VAR_8->fallback_rsn);


 if (!FUNC_10(VAR_8->clcsock->sk)->syn_smc)
  return FUNC_2(VAR_8, VAR_4);


 if (FUNC_11(VAR_8))
  return FUNC_1(VAR_8, VAR_1);


 if (FUNC_9(VAR_8->clcsock, &VAR_12))
  return FUNC_1(VAR_8,
          VAR_0);


 if (!FUNC_7(VAR_8, &VAR_12) &&
     !FUNC_5(VAR_8, &VAR_12)) {

  VAR_9 = 1;
  VAR_13 = VAR_6;
 }


 if (!FUNC_8(VAR_8, &VAR_12)) {

  VAR_10 = 1;
  if (VAR_9)
   VAR_13 = VAR_5;
  else
   VAR_13 = VAR_7;
 }


 if (!VAR_10 && !VAR_9)
  return FUNC_1(VAR_8, VAR_3);


 VAR_14 = FUNC_0(VAR_8, VAR_13, &VAR_11, &VAR_12);
 if (VAR_14) {
  FUNC_4(VAR_8, VAR_9, &VAR_12);
  return FUNC_1(VAR_8, VAR_14);
 }


 if (VAR_10 && VAR_11.hdr.path == VAR_7)
  VAR_14 = FUNC_6(VAR_8, &VAR_11, &VAR_12);
 else if (VAR_9 && VAR_11.hdr.path == VAR_6)
  VAR_14 = FUNC_3(VAR_8, &VAR_11, &VAR_12);
 else
  VAR_14 = VAR_2;
 if (VAR_14) {
  FUNC_4(VAR_8, VAR_9, &VAR_12);
  return FUNC_1(VAR_8, VAR_14);
 }

 FUNC_4(VAR_8, VAR_9, &VAR_12);
 return 0;
}
