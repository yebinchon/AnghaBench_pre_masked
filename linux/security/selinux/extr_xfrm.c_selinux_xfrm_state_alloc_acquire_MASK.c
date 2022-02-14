
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xfrm_state {struct xfrm_sec_ctx* security; } ;
struct xfrm_sec_ctx {int ctx_len; int ctx_str; scalar_t__ ctx_sid; int ctx_alg; int ctx_doi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 struct xfrm_sec_ctx* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,scalar_t__,char**,int*) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_5(struct xfrm_state *VAR_7,
         struct xfrm_sec_ctx *VAR_8, u32 VAR_9)
{
 int VAR_10;
 struct xfrm_sec_ctx *VAR_11;
 char *VAR_12 = ((void*)0);
 int VAR_13;

 if (!VAR_8)
  return 0;

 if (VAR_9 == 0)
  return -VAR_0;

 VAR_10 = FUNC_4(&VAR_5, VAR_9, &VAR_12,
         &VAR_13);
 if (VAR_10)
  return VAR_10;

 VAR_11 = FUNC_2(sizeof(*VAR_11) + VAR_13, VAR_2);
 if (!VAR_11) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_11->ctx_doi = VAR_4;
 VAR_11->ctx_alg = VAR_3;
 VAR_11->ctx_sid = VAR_9;
 VAR_11->ctx_len = VAR_13;
 FUNC_3(VAR_11->ctx_str, VAR_12, VAR_13);

 VAR_7->security = VAR_11;
 FUNC_0(&VAR_6);
out:
 FUNC_1(VAR_12);
 return VAR_10;
}
