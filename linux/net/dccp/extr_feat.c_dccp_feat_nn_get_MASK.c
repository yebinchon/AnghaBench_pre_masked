
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sock {int dummy; } ;
struct dccp_sock {int dccps_l_seq_win; int dccps_l_ack_ratio; int dccps_featneg; } ;
struct TYPE_2__ {int nn; } ;
struct dccp_feat_entry {TYPE_1__ val; } ;




 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 struct dccp_feat_entry* FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct dccp_sock* FUNC_3 (struct sock*) ;

u64 FUNC_4(struct sock *VAR_1, u8 VAR_2)
{
 if (FUNC_2(VAR_2) == VAR_0) {
  struct dccp_sock *VAR_3 = FUNC_3(VAR_1);
  struct dccp_feat_entry *VAR_4;

  VAR_4 = FUNC_1(&VAR_3->dccps_featneg, VAR_2, 1);
  if (VAR_4 != ((void*)0))
   return VAR_4->val.nn;

  switch (VAR_2) {
  case 129:
   return VAR_3->dccps_l_ack_ratio;
  case 128:
   return VAR_3->dccps_l_seq_win;
  }
 }
 FUNC_0("attempt to look up unsupported feature %u", VAR_2);
 return 0;
}
