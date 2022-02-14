
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* b; } ;
struct smp_ltk {scalar_t__ bdaddr_type; int enc_size; scalar_t__ type; int val; int rand; int ediv; TYPE_3__ bdaddr; } ;
struct TYPE_4__ {int type; int bdaddr; } ;
struct TYPE_5__ {int enc_size; int master; struct mgmt_ev_new_long_term_key* val; int rand; int ediv; int type; TYPE_1__ addr; } ;
struct mgmt_ev_new_long_term_key {int store_hint; TYPE_2__ key; } ;
struct hci_dev {int dummy; } ;
typedef int ev ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct mgmt_ev_new_long_term_key*,int ,int) ;
 int FUNC_3 (struct mgmt_ev_new_long_term_key*,int ,int) ;
 int FUNC_4 (int ,struct hci_dev*,struct mgmt_ev_new_long_term_key*,int,int *) ;
 int FUNC_5 (struct smp_ltk*) ;

void FUNC_6(struct hci_dev *VAR_4, struct smp_ltk *VAR_5, bool VAR_6)
{
 struct mgmt_ev_new_long_term_key VAR_7;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 if (VAR_5->bdaddr_type == VAR_0 &&
     (VAR_5->bdaddr.b[5] & 0xc0) != 0xc0)
  VAR_7.store_hint = 0x00;
 else
  VAR_7.store_hint = VAR_6;

 FUNC_0(&VAR_7.key.addr.bdaddr, &VAR_5->bdaddr);
 VAR_7.key.addr.type = FUNC_1(VAR_1, VAR_5->bdaddr_type);
 VAR_7.key.type = FUNC_5(VAR_5);
 VAR_7.key.enc_size = VAR_5->enc_size;
 VAR_7.key.ediv = VAR_5->ediv;
 VAR_7.key.rand = VAR_5->rand;

 if (VAR_5->type == VAR_3)
  VAR_7.key.master = 1;




 FUNC_2(VAR_7.key.val, VAR_5->val, VAR_5->enc_size);
 FUNC_3(VAR_7.key.val + VAR_5->enc_size, 0,
        sizeof(VAR_7.key.val) - VAR_5->enc_size);

 FUNC_4(VAR_2, VAR_4, &VAR_7, sizeof(VAR_7), ((void*)0));
}
