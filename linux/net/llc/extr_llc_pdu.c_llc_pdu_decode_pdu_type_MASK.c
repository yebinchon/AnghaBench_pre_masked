
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

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_3, u8 *VAR_4)
{
 struct llc_pdu_un *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->ctrl_1 & 1) {
  if ((VAR_5->ctrl_1 & VAR_2) == VAR_2)
   *VAR_4 = VAR_2;
  else
   *VAR_4 = VAR_1;
 } else
  *VAR_4 = VAR_0;
}
