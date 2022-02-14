
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int dummy; } ;
struct aa_ns {int unconfined; } ;
struct aa_label {int dummy; } ;


 struct aa_profile* FUNC_0 (int ) ;
 struct aa_ns* FUNC_1 (int ) ;
 struct aa_ns* FUNC_2 (int ,char const*,size_t) ;
 struct aa_profile* FUNC_3 (struct aa_ns*,char const*,size_t) ;
 int FUNC_4 (struct aa_ns*) ;
 char* FUNC_5 (char const*,size_t,char const**,size_t*) ;
 int FUNC_6 (struct aa_label*) ;

struct aa_profile *FUNC_7(struct aa_label *VAR_0,
     const char *VAR_1, size_t VAR_2)
{
 struct aa_profile *VAR_3;
 struct aa_ns *VAR_4;
 const char *VAR_5, *VAR_6;
 size_t VAR_7;

 VAR_5 = FUNC_5(VAR_1, VAR_2, &VAR_6, &VAR_7);
 if (VAR_6) {
  VAR_4 = FUNC_2(FUNC_6(VAR_0), VAR_6, VAR_7);
  if (!VAR_4)
   return ((void*)0);
 } else
  VAR_4 = FUNC_1(FUNC_6(VAR_0));

 if (VAR_5)
  VAR_3 = FUNC_3(VAR_4, VAR_5, VAR_2 - (VAR_5 - VAR_1));
 else if (VAR_4)

  VAR_3 = FUNC_0(VAR_4->unconfined);
 else
  VAR_3 = ((void*)0);
 FUNC_4(VAR_4);

 return VAR_3;
}
