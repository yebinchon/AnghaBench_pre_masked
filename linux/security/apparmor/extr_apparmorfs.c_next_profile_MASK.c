
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int ns; } ;
struct aa_ns {int dummy; } ;


 struct aa_profile* FUNC_0 (struct aa_ns*,int ) ;
 int FUNC_1 (struct aa_ns*,int ) ;
 struct aa_profile* FUNC_2 (struct aa_profile*) ;

__attribute__((used)) static struct aa_profile *FUNC_3(struct aa_ns *VAR_0,
           struct aa_profile *VAR_1)
{
 struct aa_profile *VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;


 return FUNC_0(VAR_0, FUNC_1(VAR_0, VAR_1->ns));
}
