
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink_resource {int occ_get_priv; int (* occ_get ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct devlink_resource *VAR_2,
        struct sk_buff *VAR_3)
{
 if (!VAR_2->occ_get)
  return 0;
 return FUNC_0(VAR_3, VAR_1,
     VAR_2->occ_get(VAR_2->occ_get_priv),
     VAR_0);
}
