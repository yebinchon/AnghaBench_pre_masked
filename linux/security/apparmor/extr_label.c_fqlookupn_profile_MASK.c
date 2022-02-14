
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;


 struct aa_profile* FUNC_0 (struct aa_label*,char const*,size_t) ;
 char* FUNC_1 (char const*,size_t) ;

__attribute__((used)) static struct aa_profile *FUNC_2(struct aa_label *VAR_0,
         struct aa_label *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 const char *VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (VAR_4 && *VAR_4 == ':')
  return FUNC_0(VAR_0, VAR_2, VAR_3);

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
