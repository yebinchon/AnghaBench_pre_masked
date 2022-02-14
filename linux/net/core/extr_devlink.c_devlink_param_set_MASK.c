
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_param_gset_ctx {int dummy; } ;
struct devlink_param {int (* set ) (struct devlink*,int ,struct devlink_param_gset_ctx*) ;int id; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink*,int ,struct devlink_param_gset_ctx*) ;

__attribute__((used)) static int FUNC_1(struct devlink *VAR_1,
        const struct devlink_param *VAR_2,
        struct devlink_param_gset_ctx *VAR_3)
{
 if (!VAR_2->set)
  return -VAR_0;
 return VAR_2->set(VAR_1, VAR_2->id, VAR_3);
}
