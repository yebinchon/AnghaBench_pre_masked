
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_data {int sd; TYPE_1__* rd; } ;
struct cpumask {int dummy; } ;
typedef enum s_alloc { ____Placeholder_s_alloc } s_alloc ;
struct TYPE_2__ {int rcu; int refcount; } ;


 int FUNC_0 (struct cpumask const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;





__attribute__((used)) static void FUNC_4(struct s_data *VAR_0, enum s_alloc VAR_1,
     const struct cpumask *VAR_2)
{
 switch (VAR_1) {
 case 130:
  if (!FUNC_1(&VAR_0->rd->refcount))
   FUNC_3(&VAR_0->rd->rcu);

 case 129:
  FUNC_2(VAR_0->sd);

 case 128:
  FUNC_0(VAR_2);

 case 131:
  break;
 }
}
