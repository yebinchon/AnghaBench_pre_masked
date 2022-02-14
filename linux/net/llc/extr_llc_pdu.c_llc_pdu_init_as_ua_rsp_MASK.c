
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct llc_pdu_un {int ctrl_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct llc_pdu_un* FUNC_0 (struct sk_buff*) ;

void FUNC_1(struct sk_buff *VAR_3, u8 VAR_4)
{
 struct llc_pdu_un *VAR_5 = FUNC_0(VAR_3);

 VAR_5->ctrl_1 = VAR_1;
 VAR_5->ctrl_1 |= VAR_0;
 VAR_5->ctrl_1 |= ((VAR_4 & 1) << 4) & VAR_2;
}
