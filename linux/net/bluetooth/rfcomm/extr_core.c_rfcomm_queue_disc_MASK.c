
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rfcomm_dlc {int tx_queue; int addr; int dlci; } ;
struct rfcomm_cmd {int fcs; int len; int ctrl; int addr; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct rfcomm_cmd* FUNC_4 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_5 (int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct rfcomm_dlc *VAR_3)
{
 struct rfcomm_cmd *VAR_4;
 struct sk_buff *VAR_5;

 FUNC_0("dlc %p dlci %d", VAR_3, VAR_3->dlci);

 VAR_5 = FUNC_5(sizeof(*VAR_4), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_5, sizeof(*VAR_4));
 VAR_4->addr = VAR_3->addr;
 VAR_4->ctrl = FUNC_1(VAR_2, 1);
 VAR_4->len = FUNC_3(0);
 VAR_4->fcs = FUNC_2((u8 *) VAR_4);

 FUNC_7(&VAR_3->tx_queue, VAR_5);
 FUNC_6();
 return 0;
}
