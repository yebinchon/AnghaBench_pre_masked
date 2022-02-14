
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int dummy; } ;
struct aa_ns {int unconfined; int base; } ;


 struct aa_profile* FUNC_0 (int *,char const*,size_t) ;
 struct aa_profile* FUNC_1 (int ) ;
 int FUNC_2 (struct aa_profile*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*,char*,size_t) ;

struct aa_profile *FUNC_6(struct aa_ns *VAR_0, const char *VAR_1,
          size_t VAR_2)
{
 struct aa_profile *VAR_3;

 FUNC_3();
 do {
  VAR_3 = FUNC_0(&VAR_0->base, VAR_1, VAR_2);
 } while (VAR_3 && !FUNC_2(VAR_3));
 FUNC_4();


 if (!VAR_3 && FUNC_5(VAR_1, "unconfined", VAR_2) == 0)
  VAR_3 = FUNC_1(VAR_0->unconfined);


 return VAR_3;
}
