
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_algo_auth {int alg_key_len; int alg_key; int alg_name; } ;
struct xfrm_algo {int alg_key_len; int alg_key; int alg_name; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct xfrm_algo* FUNC_1 (struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct xfrm_algo_auth *VAR_2, struct sk_buff *VAR_3)
{
 struct xfrm_algo *VAR_4;
 struct nlattr *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_1,
     sizeof(*VAR_4) + (VAR_2->alg_key_len + 7) / 8);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_5);
 FUNC_3(VAR_4->alg_name, VAR_2->alg_name, sizeof(VAR_4->alg_name));
 FUNC_0(VAR_4->alg_key, VAR_2->alg_key, (VAR_2->alg_key_len + 7) / 8);
 VAR_4->alg_key_len = VAR_2->alg_key_len;

 return 0;
}
