
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xfrm_state {struct xfrm_sec_ctx* security; } ;
struct xfrm_sec_ctx {int ctx_sid; } ;
struct sk_buff {int dummy; } ;
struct sec_path {int len; struct xfrm_state** xvec; } ;
struct common_audit_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_1 (struct xfrm_state*) ;
 int VAR_3 ;
 struct sec_path* FUNC_2 (struct sk_buff*) ;

int FUNC_3(u32 VAR_4, struct sk_buff *VAR_5,
         struct common_audit_data *VAR_6)
{
 int VAR_7;
 struct sec_path *VAR_8 = FUNC_2(VAR_5);
 u32 VAR_9 = VAR_2;

 if (VAR_8) {
  for (VAR_7 = 0; VAR_7 < VAR_8->len; VAR_7++) {
   struct xfrm_state *VAR_10 = VAR_8->xvec[VAR_7];

   if (VAR_10 && FUNC_1(VAR_10)) {
    struct xfrm_sec_ctx *VAR_11 = VAR_10->security;
    VAR_9 = VAR_11->ctx_sid;
    break;
   }
  }
 }




 return FUNC_0(&VAR_3,
       VAR_4, VAR_9,
       VAR_1, VAR_0, VAR_6);
}
