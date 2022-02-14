
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int sta; int rate_ctrl_lock; } ;
struct rate_control_ref {int priv; TYPE_1__* ops; } ;
typedef int gfp_t ;
struct TYPE_2__ {void* (* alloc_sta ) (int ,int *,int ) ;} ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static inline void *FUNC_2(struct rate_control_ref *VAR_0,
        struct sta_info *VAR_1, gfp_t VAR_2)
{
 FUNC_0(&VAR_1->rate_ctrl_lock);
 return VAR_0->ops->alloc_sta(VAR_0->priv, &VAR_1->sta, VAR_2);
}
