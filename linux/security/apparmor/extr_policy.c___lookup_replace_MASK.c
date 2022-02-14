
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int dummy; } ;
struct aa_ns {int base; } ;


 int FUNC_0 (int *,char const*) ;
 struct aa_profile* FUNC_1 (int ) ;
 int FUNC_2 (struct aa_profile*,int,char const**) ;

__attribute__((used)) static int FUNC_3(struct aa_ns *VAR_0, const char *VAR_1,
       bool VAR_2, struct aa_profile **VAR_3,
       const char **VAR_4)
{
 *VAR_3 = FUNC_1(FUNC_0(&VAR_0->base, VAR_1));
 if (*VAR_3) {
  int VAR_5 = FUNC_2(*VAR_3, VAR_2, VAR_4);
  if (VAR_5) {
   *VAR_4 = "profile can not be replaced";
   return VAR_5;
  }
 }

 return 0;
}
