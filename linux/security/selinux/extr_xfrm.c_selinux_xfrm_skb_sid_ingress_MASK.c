
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xfrm_state {struct xfrm_sec_ctx* security; } ;
struct xfrm_sec_ctx {scalar_t__ ctx_sid; } ;
struct sk_buff {int dummy; } ;
struct sec_path {int len; struct xfrm_state** xvec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct xfrm_state*) ;
 struct sec_path* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2,
     u32 *VAR_3, int VAR_4)
{
 u32 VAR_5 = VAR_1;
 struct sec_path *VAR_6 = FUNC_1(VAR_2);

 if (VAR_6) {
  int VAR_7;

  for (VAR_7 = VAR_6->len - 1; VAR_7 >= 0; VAR_7--) {
   struct xfrm_state *VAR_8 = VAR_6->xvec[VAR_7];
   if (FUNC_0(VAR_8)) {
    struct xfrm_sec_ctx *VAR_9 = VAR_8->security;

    if (VAR_5 == VAR_1) {
     VAR_5 = VAR_9->ctx_sid;
     if (!VAR_4)
      goto out;
    } else if (VAR_5 != VAR_9->ctx_sid) {
     *VAR_3 = VAR_1;
     return -VAR_0;
    }
   }
  }
 }

out:
 *VAR_3 = VAR_5;
 return 0;
}
