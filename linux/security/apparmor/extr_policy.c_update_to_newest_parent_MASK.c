
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aa_profile {int parent; TYPE_1__* ns; } ;
struct TYPE_2__ {int lock; } ;


 struct aa_profile* FUNC_0 (struct aa_profile*) ;
 int FUNC_1 (struct aa_profile*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct aa_profile*) ;
 struct aa_profile* FUNC_4 (int ,int ) ;

__attribute__((used)) static struct aa_profile *FUNC_5(struct aa_profile *VAR_0)
{
 struct aa_profile *VAR_1, *VAR_2;

 VAR_1 = FUNC_4(VAR_0->parent,
        FUNC_2(&VAR_0->ns->lock));
 VAR_2 = FUNC_0(VAR_1);


 if (VAR_2 != VAR_1) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_0->parent, VAR_2);
 } else
  FUNC_1(VAR_2);

 return VAR_2;
}
