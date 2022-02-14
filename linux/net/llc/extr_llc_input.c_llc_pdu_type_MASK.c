
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_pdu_sn {int ctrl_1; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct llc_pdu_sn*) ;
 struct llc_pdu_sn* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static __inline__ int FUNC_2(struct sk_buff *VAR_5)
{
 int VAR_6 = VAR_0;
 struct llc_pdu_sn *VAR_7 = FUNC_1(VAR_5);

 if ((VAR_7->ctrl_1 & VAR_3) != VAR_4)
  goto out;
 switch (FUNC_0(VAR_7)) {
 case 133:
 case 134:
 case 135:
  VAR_6 = VAR_2;
  break;
 case 131:
 case 132:
 case 128:
 case 130:
 case 129:
  break;
 default:
  VAR_6 = VAR_1;
  break;
 }
out:
 return VAR_6;
}
