
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aa_profile {TYPE_1__* ns; int parent; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 struct aa_profile* FUNC_1 (int ,int ) ;

__attribute__((used)) static inline struct aa_profile *FUNC_2(struct aa_profile *VAR_0)
{
 return FUNC_1(VAR_0->parent,
      FUNC_0(&VAR_0->ns->lock));
}
