
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int preferred_node; int nodes; } ;
struct TYPE_3__ {int user_nodemask; } ;
struct mempolicy {int mode; scalar_t__ flags; TYPE_2__ v; TYPE_1__ w; } ;


 int FUNC_0 () ;

 int VAR_0 ;


 scalar_t__ FUNC_1 (struct mempolicy*) ;
 int FUNC_2 (int ,int ) ;

bool FUNC_3(struct mempolicy *VAR_1, struct mempolicy *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return 0;
 if (VAR_1->mode != VAR_2->mode)
  return 0;
 if (VAR_1->flags != VAR_2->flags)
  return 0;
 if (FUNC_1(VAR_1))
  if (!FUNC_2(VAR_1->w.user_nodemask, VAR_2->w.user_nodemask))
   return 0;

 switch (VAR_1->mode) {
 case 130:

 case 129:
  return !!FUNC_2(VAR_1->v.nodes, VAR_2->v.nodes);
 case 128:

  if (VAR_1->flags & VAR_0)
   return 1;
  return VAR_1->v.preferred_node == VAR_2->v.preferred_node;
 default:
  FUNC_0();
  return 0;
 }
}
