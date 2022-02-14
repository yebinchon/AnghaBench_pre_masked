
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ealgo; } ;
struct xfrm_state {int geniv; struct xfrm_algo* ealg; TYPE_1__ props; } ;
struct TYPE_7__ {int geniv; } ;
struct TYPE_8__ {TYPE_3__ encr; } ;
struct TYPE_6__ {int sadb_alg_id; } ;
struct xfrm_algo_desc {TYPE_4__ uinfo; int name; TYPE_2__ desc; } ;
struct xfrm_algo {int alg_name; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xfrm_algo* FUNC_0 (struct xfrm_algo*,int ,int ) ;
 struct xfrm_algo* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct xfrm_algo*) ;
 struct xfrm_algo_desc* FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct xfrm_state *VAR_3, struct nlattr *VAR_4)
{
 struct xfrm_algo *VAR_5, *VAR_6;
 struct xfrm_algo_desc *VAR_7;

 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_1(VAR_4);

 VAR_7 = FUNC_4(VAR_6->alg_name, 1);
 if (!VAR_7)
  return -VAR_1;
 VAR_3->props.ealgo = VAR_7->desc.sadb_alg_id;

 VAR_5 = FUNC_0(VAR_6, FUNC_3(VAR_6), VAR_2);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(VAR_5->alg_name, VAR_7->name);
 VAR_3->ealg = VAR_5;
 VAR_3->geniv = VAR_7->uinfo.encr.geniv;
 return 0;
}
