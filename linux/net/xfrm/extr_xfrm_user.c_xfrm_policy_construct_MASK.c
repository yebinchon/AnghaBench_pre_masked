
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_userpolicy_info {int dummy; } ;
struct TYPE_2__ {int dead; } ;
struct xfrm_policy {TYPE_1__ walk; int if_id; int mark; int type; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct xfrm_policy*,struct xfrm_userpolicy_info*) ;
 int FUNC_1 (int *,struct nlattr**) ;
 int FUNC_2 (struct xfrm_policy*,struct nlattr**) ;
 int FUNC_3 (struct xfrm_policy*,struct nlattr**) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int *) ;
 struct xfrm_policy* FUNC_6 (struct net*,int ) ;
 int FUNC_7 (struct xfrm_policy*) ;

__attribute__((used)) static struct xfrm_policy *FUNC_8(struct net *VAR_3, struct xfrm_userpolicy_info *VAR_4, struct nlattr **VAR_5, int *VAR_6)
{
 struct xfrm_policy *VAR_7 = FUNC_6(VAR_3, VAR_1);
 int VAR_8;

 if (!VAR_7) {
  *VAR_6 = -VAR_0;
  return ((void*)0);
 }

 FUNC_0(VAR_7, VAR_4);

 VAR_8 = FUNC_1(&VAR_7->type, VAR_5);
 if (VAR_8)
  goto error;

 if (!(VAR_8 = FUNC_3(VAR_7, VAR_5)))
  VAR_8 = FUNC_2(VAR_7, VAR_5);
 if (VAR_8)
  goto error;

 FUNC_5(VAR_5, &VAR_7->mark);

 if (VAR_5[VAR_2])
  VAR_7->if_id = FUNC_4(VAR_5[VAR_2]);

 return VAR_7;
 error:
 *VAR_6 = VAR_8;
 VAR_7->walk.dead = 1;
 FUNC_7(VAR_7);
 return ((void*)0);
}
