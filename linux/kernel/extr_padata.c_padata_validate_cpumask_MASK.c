
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padata_instance {int flags; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpumask const*,int ) ;

__attribute__((used)) static bool FUNC_1(struct padata_instance *VAR_2,
        const struct cpumask *VAR_3)
{
 if (!FUNC_0(VAR_3, VAR_1)) {
  VAR_2->flags |= VAR_0;
  return 0;
 }

 VAR_2->flags &= ~VAR_0;
 return 1;
}
