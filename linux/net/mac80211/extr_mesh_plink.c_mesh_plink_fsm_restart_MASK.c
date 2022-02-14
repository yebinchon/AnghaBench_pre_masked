
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {TYPE_1__* mesh; } ;
struct TYPE_2__ {scalar_t__ plink_retries; scalar_t__ reason; scalar_t__ plid; scalar_t__ llid; int plink_state; int plink_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct sta_info *VAR_1)
{
 FUNC_0(&VAR_1->mesh->plink_lock);
 VAR_1->mesh->plink_state = VAR_0;
 VAR_1->mesh->llid = VAR_1->mesh->plid = VAR_1->mesh->reason = 0;
 VAR_1->mesh->plink_retries = 0;
}
