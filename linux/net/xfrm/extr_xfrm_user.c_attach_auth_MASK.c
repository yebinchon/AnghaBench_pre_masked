
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int icv_truncbits; } ;
struct TYPE_6__ {TYPE_2__ auth; } ;
struct TYPE_4__ {int sadb_alg_id; } ;
struct xfrm_algo_desc {TYPE_3__ uinfo; int name; TYPE_1__ desc; } ;
struct xfrm_algo_auth {int alg_key_len; int alg_key; int alg_trunc_len; int alg_name; } ;
struct xfrm_algo {int alg_key_len; int alg_key; int alg_name; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xfrm_algo_auth* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct xfrm_algo* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (int ,int ) ;
 struct xfrm_algo_desc* FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct xfrm_algo_auth **VAR_3, u8 *VAR_4,
         struct nlattr *VAR_5)
{
 struct xfrm_algo *VAR_6;
 struct xfrm_algo_auth *VAR_7;
 struct xfrm_algo_desc *VAR_8;

 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_2(VAR_5);

 VAR_8 = FUNC_4(VAR_6->alg_name, 1);
 if (!VAR_8)
  return -VAR_1;
 *VAR_4 = VAR_8->desc.sadb_alg_id;

 VAR_7 = FUNC_0(sizeof(*VAR_7) + (VAR_6->alg_key_len + 7) / 8, VAR_2);
 if (!VAR_7)
  return -VAR_0;

 FUNC_3(VAR_7->alg_name, VAR_8->name);
 VAR_7->alg_key_len = VAR_6->alg_key_len;
 VAR_7->alg_trunc_len = VAR_8->uinfo.auth.icv_truncbits;
 FUNC_1(VAR_7->alg_key, VAR_6->alg_key, (VAR_6->alg_key_len + 7) / 8);

 *VAR_3 = VAR_7;
 return 0;
}
