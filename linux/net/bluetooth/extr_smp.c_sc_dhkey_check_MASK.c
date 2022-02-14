
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct smp_cmd_dhkey_check {int e; } ;
struct smp_chan {scalar_t__ method; TYPE_1__* conn; int rrnd; int prnd; int mackey; int tfm_cmac; int * rr; int * prsp; int * preq; } ;
struct hci_conn {int passkey_notify; scalar_t__ out; int resp_addr_type; int init_addr_type; int resp_addr; int init_addr; } ;
typedef int r ;
typedef int check ;
struct TYPE_2__ {struct hci_conn* hcon; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int *,int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int,struct smp_cmd_dhkey_check*) ;

__attribute__((used)) static void FUNC_5(struct smp_chan *VAR_4)
{
 struct hci_conn *VAR_5 = VAR_4->conn->hcon;
 struct smp_cmd_dhkey_check VAR_6;
 u8 VAR_7[7], VAR_8[7], *VAR_9, *VAR_10;
 u8 VAR_11[3], VAR_12[16];

 FUNC_0(VAR_7, &VAR_5->init_addr, 6);
 FUNC_0(VAR_8, &VAR_5->resp_addr, 6);
 VAR_7[6] = VAR_5->init_addr_type;
 VAR_8[6] = VAR_5->resp_addr_type;

 if (VAR_5->out) {
  VAR_9 = VAR_7;
  VAR_10 = VAR_8;
  FUNC_0(VAR_11, &VAR_4->preq[1], 3);
 } else {
  VAR_9 = VAR_8;
  VAR_10 = VAR_7;
  FUNC_0(VAR_11, &VAR_4->prsp[1], 3);
 }

 FUNC_1(VAR_12, 0, sizeof(VAR_12));

 if (VAR_4->method == VAR_2 || VAR_4->method == VAR_0)
  FUNC_2(VAR_5->passkey_notify, VAR_12);

 if (VAR_4->method == VAR_1)
  FUNC_0(VAR_12, VAR_4->rr, 16);

 FUNC_3(VAR_4->tfm_cmac, VAR_4->mackey, VAR_4->prnd, VAR_4->rrnd, VAR_12, VAR_11,
        VAR_9, VAR_10, VAR_6.e);

 FUNC_4(VAR_4->conn, VAR_3, sizeof(VAR_6), &VAR_6);
}
