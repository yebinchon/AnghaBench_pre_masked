
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct smp_chan {int dhkey; int tfm_cmac; int * prnd; int * rrnd; TYPE_1__* conn; } ;
struct hci_conn {int resp_addr_type; int init_addr_type; int resp_addr; int init_addr; scalar_t__ out; } ;
struct TYPE_2__ {struct hci_conn* hcon; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int ,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct smp_chan *VAR_0, u8 VAR_1[16], u8 VAR_2[16])
{
 struct hci_conn *VAR_3 = VAR_0->conn->hcon;
 u8 *VAR_4, *VAR_5, VAR_6[7], VAR_7[7];

 if (VAR_3->out) {
  VAR_4 = VAR_0->prnd;
  VAR_5 = VAR_0->rrnd;
 } else {
  VAR_4 = VAR_0->rrnd;
  VAR_5 = VAR_0->prnd;
 }

 FUNC_0(VAR_6, &VAR_3->init_addr, 6);
 FUNC_0(VAR_7, &VAR_3->resp_addr, 6);
 VAR_6[6] = VAR_3->init_addr_type;
 VAR_7[6] = VAR_3->resp_addr_type;

 return FUNC_1(VAR_0->tfm_cmac, VAR_0->dhkey, VAR_4, VAR_5, VAR_6, VAR_7, VAR_1, VAR_2);
}
