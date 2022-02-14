
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sk_state; } ;
struct TYPE_9__ {int rmb_desc; TYPE_2__* lgr; } ;
struct smc_sock {TYPE_3__ sk; scalar_t__ connect_nonblock; TYPE_4__ conn; } ;
struct smc_link {int dummy; } ;
struct smc_init_info {int is_smcd; scalar_t__ cln_first_contact; int srv_first_contact; int ib_clcqpn; int * ib_lcl; } ;
struct TYPE_6__ {int flag; } ;
struct smc_clc_msg_accept_confirm {TYPE_1__ hdr; int qpn; int lcl; } ;
struct TYPE_7__ {struct smc_link* lnk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct smc_sock*,int) ;
 int FUNC_4 (struct smc_sock*) ;
 int VAR_8 ;
 int FUNC_5 (struct smc_sock*) ;
 int FUNC_6 (struct smc_sock*) ;
 int FUNC_7 (struct smc_sock*,struct smc_init_info*) ;
 int FUNC_8 (struct smc_sock*,struct smc_clc_msg_accept_confirm*) ;
 int FUNC_9 (struct smc_sock*,int,scalar_t__) ;
 int FUNC_10 (struct smc_sock*) ;
 scalar_t__ FUNC_11 (struct smc_link*) ;
 int FUNC_12 (struct smc_link*,struct smc_clc_msg_accept_confirm*) ;
 scalar_t__ FUNC_13 (struct smc_link*,int ,int) ;
 scalar_t__ FUNC_14 (TYPE_4__*,struct smc_clc_msg_accept_confirm*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (struct smc_sock*) ;
 int FUNC_17 (struct smc_sock*) ;

__attribute__((used)) static int FUNC_18(struct smc_sock *VAR_9,
       struct smc_clc_msg_accept_confirm *VAR_10,
       struct smc_init_info *VAR_11)
{
 struct smc_link *VAR_12;
 int VAR_13 = 0;

 VAR_11->is_smcd = 0;
 VAR_11->ib_lcl = &VAR_10->lcl;
 VAR_11->ib_clcqpn = FUNC_2(VAR_10->qpn);
 VAR_11->srv_first_contact = VAR_10->hdr.flag;

 FUNC_0(&VAR_8);
 VAR_13 = FUNC_7(VAR_9, VAR_11);
 if (VAR_13) {
  FUNC_1(&VAR_8);
  return VAR_13;
 }
 VAR_12 = &VAR_9->conn.lgr->lnk[VAR_7];

 FUNC_8(VAR_9, VAR_10);


 if (FUNC_3(VAR_9, 0))
  return FUNC_9(VAR_9, VAR_4,
      VAR_11->cln_first_contact);

 if (VAR_11->cln_first_contact == VAR_5)
  FUNC_12(VAR_12, VAR_10);

 if (FUNC_14(&VAR_9->conn, VAR_10))
  return FUNC_9(VAR_9, VAR_3,
      VAR_11->cln_first_contact);

 FUNC_6(VAR_9);
 FUNC_16(VAR_9);

 if (VAR_11->cln_first_contact == VAR_5) {
  if (FUNC_11(VAR_12))
   return FUNC_9(VAR_9, VAR_1,
       VAR_11->cln_first_contact);
 } else {
  if (FUNC_13(VAR_12, VAR_9->conn.rmb_desc, 1))
   return FUNC_9(VAR_9, VAR_2,
       VAR_11->cln_first_contact);
 }
 FUNC_15(&VAR_9->conn);

 VAR_13 = FUNC_4(VAR_9);
 if (VAR_13)
  return FUNC_9(VAR_9, VAR_13,
      VAR_11->cln_first_contact);

 FUNC_17(VAR_9);

 if (VAR_11->cln_first_contact == VAR_5) {

  VAR_13 = FUNC_5(VAR_9);
  if (VAR_13)
   return FUNC_9(VAR_9, VAR_13,
       VAR_11->cln_first_contact);
 }
 FUNC_1(&VAR_8);

 FUNC_10(VAR_9);
 VAR_9->connect_nonblock = 0;
 if (VAR_9->sk.sk_state == VAR_6)
  VAR_9->sk.sk_state = VAR_0;

 return 0;
}
