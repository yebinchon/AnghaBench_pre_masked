
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rate_control_ref {int priv; TYPE_4__* ops; } ;
struct TYPE_7__ {TYPE_1__* wiphy; } ;
struct TYPE_6__ {struct dentry* rcdir; } ;
struct ieee80211_local {TYPE_3__ hw; TYPE_2__ debugfs; } ;
struct dentry {int dummy; } ;
struct TYPE_8__ {int (* alloc ) (TYPE_3__*,struct dentry*) ;} ;
struct TYPE_5__ {int debugfsdir; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,struct dentry*,struct rate_control_ref*,int *) ;
 TYPE_4__* FUNC_2 (char const*) ;
 int FUNC_3 (struct rate_control_ref*) ;
 struct rate_control_ref* FUNC_4 (int,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*,struct dentry*) ;

__attribute__((used)) static struct rate_control_ref *FUNC_6(const char *VAR_2,
         struct ieee80211_local *VAR_3)
{
 struct dentry *VAR_4 = ((void*)0);
 struct rate_control_ref *VAR_5;

 VAR_5 = FUNC_4(sizeof(struct rate_control_ref), VAR_0);
 if (!VAR_5)
  return ((void*)0);
 VAR_5->ops = FUNC_2(VAR_2);
 if (!VAR_5->ops)
  goto free;







 VAR_5->priv = VAR_5->ops->alloc(&VAR_3->hw, VAR_4);
 if (!VAR_5->priv)
  goto free;
 return VAR_5;

free:
 FUNC_3(VAR_5);
 return ((void*)0);
}
