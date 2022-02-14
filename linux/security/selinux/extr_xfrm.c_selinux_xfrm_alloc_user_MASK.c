
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xfrm_user_sec_ctx {scalar_t__ ctx_doi; scalar_t__ ctx_alg; int ctx_len; } ;
struct xfrm_sec_ctx {int ctx_len; char* ctx_str; int ctx_sid; scalar_t__ ctx_alg; scalar_t__ ctx_doi; } ;
struct task_security_struct {int sid; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct xfrm_sec_ctx*) ;
 struct xfrm_sec_ctx* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,struct xfrm_user_sec_ctx*,int) ;
 int FUNC_6 (int *,char*,int,int *,int ) ;
 struct task_security_struct* FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct xfrm_sec_ctx **VAR_9,
       struct xfrm_user_sec_ctx *VAR_10,
       gfp_t VAR_11)
{
 int VAR_12;
 const struct task_security_struct *VAR_13 = FUNC_7(FUNC_2());
 struct xfrm_sec_ctx *VAR_14 = ((void*)0);
 u32 VAR_15;

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0) ||
     VAR_10->ctx_doi != VAR_6 ||
     VAR_10->ctx_alg != VAR_5)
  return -VAR_1;

 VAR_15 = VAR_10->ctx_len;
 if (VAR_15 >= VAR_3)
  return -VAR_2;

 VAR_14 = FUNC_4(sizeof(*VAR_14) + VAR_15 + 1, VAR_11);
 if (!VAR_14)
  return -VAR_2;

 VAR_14->ctx_doi = VAR_6;
 VAR_14->ctx_alg = VAR_5;
 VAR_14->ctx_len = VAR_15;
 FUNC_5(VAR_14->ctx_str, &VAR_10[1], VAR_15);
 VAR_14->ctx_str[VAR_15] = '\0';
 VAR_12 = FUNC_6(&VAR_7, VAR_14->ctx_str, VAR_15,
         &VAR_14->ctx_sid, VAR_11);
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_1(&VAR_7,
     VAR_13->sid, VAR_14->ctx_sid,
     VAR_4, VAR_0, ((void*)0));
 if (VAR_12)
  goto err;

 *VAR_9 = VAR_14;
 FUNC_0(&VAR_8);
 return 0;

err:
 FUNC_3(VAR_14);
 return VAR_12;
}
