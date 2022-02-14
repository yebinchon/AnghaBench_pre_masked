
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tlv ;
struct mpoa_client {int* our_ctrl_addr; TYPE_2__* dev; } ;
struct lec_priv {TYPE_1__* lane2_ops; } ;
struct k_message {int MPS_ctrl; } ;
struct TYPE_6__ {char* name; int dev_addr; } ;
struct TYPE_5__ {int (* associate_req ) (TYPE_2__*,int ,int*,int) ;int (* resolve ) (TYPE_2__*,int *,int,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int*,int ,int) ;
 struct lec_priv* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_2__*,int ,int*,int) ;
 int FUNC_6 (TYPE_2__*,int *,int,int *,int *) ;

__attribute__((used)) static void FUNC_7(struct k_message *VAR_1,
       struct mpoa_client *VAR_2)
{
 struct lec_priv *VAR_3;
 int VAR_4, VAR_5 ;

 uint8_t VAR_6[4 + 1 + 1 + 1 + VAR_0];

 VAR_6[0] = 00; VAR_6[1] = 0xa0; VAR_6[2] = 0x3e; VAR_6[3] = 0x2a;
 VAR_6[4] = 1 + 1 + VAR_0;
 VAR_6[5] = 0x02;
 VAR_6[6] = 0x00;

 FUNC_2(&VAR_6[7], VAR_1->MPS_ctrl, VAR_0);
 FUNC_2(VAR_2->our_ctrl_addr, VAR_1->MPS_ctrl, VAR_0);

 FUNC_0("(%s) setting MPC ctrl ATM address to",
  VAR_2->dev ? VAR_2->dev->name : "<unknown>");
 for (VAR_4 = 7; VAR_4 < sizeof(VAR_6); VAR_4++)
  FUNC_1(" %02x", VAR_6[VAR_4]);
 FUNC_1("\n");

 if (VAR_2->dev) {
  VAR_3 = FUNC_3(VAR_2->dev);
  VAR_5 = VAR_3->lane2_ops->associate_req(VAR_2->dev,
       VAR_2->dev->dev_addr,
       VAR_6, sizeof(VAR_6));
  if (VAR_5 == 0)
   FUNC_4("(%s) MPOA device type TLV association failed\n",
    VAR_2->dev->name);
  VAR_5 = VAR_3->lane2_ops->resolve(VAR_2->dev, ((void*)0), 1, ((void*)0), ((void*)0));
  if (VAR_5 < 0)
   FUNC_4("(%s) targetless LE_ARP request failed\n",
    VAR_2->dev->name);
 }
}
