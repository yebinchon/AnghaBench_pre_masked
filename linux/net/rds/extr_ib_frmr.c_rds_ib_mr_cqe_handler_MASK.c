
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rds_ib_frmr {int fr_inv; int fr_reg; int fr_reg_done; int fr_inv_done; } ;
struct TYPE_4__ {struct rds_ib_frmr frmr; } ;
struct rds_ib_mr {TYPE_1__ u; } ;
struct rds_ib_connection {int i_fastreg_wrs; TYPE_2__* conn; } ;
struct ib_wc {scalar_t__ status; int vendor_err; scalar_t__ wr_id; } ;
struct TYPE_5__ {int c_faddr; int c_laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,int *,int *,scalar_t__,int ,int ) ;
 int FUNC_4 (struct rds_ib_mr*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

void FUNC_7(struct rds_ib_connection *VAR_4, struct ib_wc *VAR_5)
{
 struct rds_ib_mr *VAR_6 = (void *)(unsigned long)VAR_5->wr_id;
 struct rds_ib_frmr *VAR_7 = &VAR_6->u.frmr;

 if (VAR_5->status != VAR_3) {
  FUNC_4(VAR_6, VAR_1, VAR_2);
  if (FUNC_2(VAR_4->conn))
   FUNC_3(VAR_4->conn,
       "frmr completion <%pI4,%pI4> status %u(%s), vendor_err 0x%x, disconnecting and reconnecting\n",
       &VAR_4->conn->c_laddr,
       &VAR_4->conn->c_faddr,
       VAR_5->status,
       FUNC_1(VAR_5->status),
       VAR_5->vendor_err);
 }

 if (VAR_7->fr_inv) {
  FUNC_4(VAR_6, VAR_1, VAR_0);
  VAR_7->fr_inv = 0;
  FUNC_6(&VAR_7->fr_inv_done);
 }

 if (VAR_7->fr_reg) {
  VAR_7->fr_reg = 0;
  FUNC_6(&VAR_7->fr_reg_done);
 }




 FUNC_5();
 FUNC_0(&VAR_4->i_fastreg_wrs);
}
