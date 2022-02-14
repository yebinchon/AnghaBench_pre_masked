
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct phonetmsg {scalar_t__ pn_status; int pn_msg_id; int pn_orig_msg_id; void* pn_submsg_id; scalar_t__ pn_e_status; int pn_e_orig_msg_id; void* pn_e_submsg_id; int pn_e_res_id; int pn_trans_id; } ;
struct phonethdr {scalar_t__ pn_res; int pn_robj; int pn_rdev; int pn_sobj; int pn_sdev; } ;
typedef int resp ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct phonetmsg*,int ,int) ;
 struct phonethdr* FUNC_1 (struct sk_buff*) ;
 struct phonetmsg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct phonetmsg*,int,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3)
{
 const struct phonethdr *VAR_4 = FUNC_1(VAR_3);
 const struct phonetmsg *VAR_5 = FUNC_2(VAR_3);
 struct phonetmsg VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.pn_trans_id = VAR_5->pn_trans_id;
 VAR_6.pn_msg_id = VAR_0;
 if (VAR_4->pn_res == VAR_2) {
  VAR_6.pn_e_res_id = VAR_5->pn_e_res_id;
  VAR_6.pn_e_submsg_id = VAR_1;
  VAR_6.pn_e_orig_msg_id = VAR_5->pn_msg_id;
  VAR_6.pn_e_status = 0;
 } else {
  VAR_6.pn_submsg_id = VAR_1;
  VAR_6.pn_orig_msg_id = VAR_5->pn_msg_id;
  VAR_6.pn_status = 0;
 }
 return FUNC_4(&VAR_6, sizeof(VAR_6), VAR_3->dev,
    FUNC_3(VAR_4->pn_sdev, VAR_4->pn_sobj),
    FUNC_3(VAR_4->pn_rdev, VAR_4->pn_robj),
    VAR_4->pn_res);
}
