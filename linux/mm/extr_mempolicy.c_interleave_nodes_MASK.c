
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {unsigned int il_prev; } ;
struct TYPE_2__ {int nodes; } ;
struct mempolicy {TYPE_1__ v; } ;


 unsigned int VAR_0 ;
 struct task_struct* VAR_1 ;
 unsigned int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static unsigned FUNC_1(struct mempolicy *VAR_2)
{
 unsigned VAR_3;
 struct task_struct *VAR_4 = VAR_1;

 VAR_3 = FUNC_0(VAR_4->il_prev, VAR_2->v.nodes);
 if (VAR_3 < VAR_0)
  VAR_4->il_prev = VAR_3;
 return VAR_3;
}
