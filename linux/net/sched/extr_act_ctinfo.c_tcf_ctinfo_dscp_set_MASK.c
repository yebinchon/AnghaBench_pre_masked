
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcf_ctinfo_params {int dscpmask; int dscpmaskshift; } ;
struct tcf_ctinfo {int stats_dscp_error; int stats_dscp_set; } ;
struct sk_buff {int dummy; } ;
struct nf_conn {int mark; } ;


 int VAR_0 ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct nf_conn *VAR_1, struct tcf_ctinfo *VAR_2,
    struct tcf_ctinfo_params *VAR_3,
    struct sk_buff *VAR_4, int VAR_5, int VAR_6)
{
 u8 VAR_7, VAR_8;

 VAR_8 = (((VAR_1->mark & VAR_3->dscpmask) >> VAR_3->dscpmaskshift) << 2) &
       ~VAR_0;

 switch (VAR_6) {
 case 129:
  VAR_7 = FUNC_2(FUNC_0(VAR_4)) & ~VAR_0;
  if (VAR_7 != VAR_8) {
   if (FUNC_6(!FUNC_7(VAR_4, VAR_5))) {
    FUNC_1(FUNC_0(VAR_4),
          VAR_0,
          VAR_8);
    VAR_2->stats_dscp_set++;
   } else {
    VAR_2->stats_dscp_error++;
   }
  }
  break;
 case 128:
  VAR_7 = FUNC_4(FUNC_5(VAR_4)) & ~VAR_0;
  if (VAR_7 != VAR_8) {
   if (FUNC_6(!FUNC_7(VAR_4, VAR_5))) {
    FUNC_3(FUNC_5(VAR_4),
          VAR_0,
          VAR_8);
    VAR_2->stats_dscp_set++;
   } else {
    VAR_2->stats_dscp_error++;
   }
  }
  break;
 default:
  break;
 }
}
