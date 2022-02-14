
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct smp_cmd_pairing_confirm {int confirm_val; } ;
struct smp_chan {struct l2cap_conn* conn; int flags; int prsp; int preq; int prnd; int tk; } ;
struct l2cap_conn {TYPE_1__* hcon; } ;
typedef int cp ;
struct TYPE_2__ {scalar_t__ out; int resp_addr; int resp_addr_type; int init_addr; int init_addr_type; } ;


 int FUNC_0 (char*,struct l2cap_conn*) ;
 int FUNC_1 (struct smp_chan*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int *,int ,int *,int ) ;
 int FUNC_4 (struct l2cap_conn*,int ,int,struct smp_cmd_pairing_confirm*) ;

__attribute__((used)) static u8 FUNC_5(struct smp_chan *VAR_4)
{
 struct l2cap_conn *VAR_5 = VAR_4->conn;
 struct smp_cmd_pairing_confirm VAR_6;
 int VAR_7;

 FUNC_0("conn %p", VAR_5);

 VAR_7 = FUNC_3(VAR_4->tk, VAR_4->prnd, VAR_4->preq, VAR_4->prsp,
       VAR_5->hcon->init_addr_type, &VAR_5->hcon->init_addr,
       VAR_5->hcon->resp_addr_type, &VAR_5->hcon->resp_addr,
       VAR_6.confirm_val);
 if (VAR_7)
  return VAR_3;

 FUNC_2(VAR_2, &VAR_4->flags);

 FUNC_4(VAR_4->conn, VAR_0, sizeof(VAR_6), &VAR_6);

 if (VAR_5->hcon->out)
  FUNC_1(VAR_4, VAR_0);
 else
  FUNC_1(VAR_4, VAR_1);

 return 0;
}
