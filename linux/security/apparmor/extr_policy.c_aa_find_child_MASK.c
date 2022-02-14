
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int profiles; } ;
struct aa_profile {TYPE_1__ base; } ;


 struct aa_profile* FUNC_0 (int *,char const*) ;
 int FUNC_1 (struct aa_profile*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct aa_profile *FUNC_4(struct aa_profile *VAR_0, const char *VAR_1)
{
 struct aa_profile *VAR_2;

 FUNC_2();
 do {
  VAR_2 = FUNC_0(&VAR_0->base.profiles, VAR_1);
 } while (VAR_2 && !FUNC_1(VAR_2));
 FUNC_3();


 return VAR_2;
}
