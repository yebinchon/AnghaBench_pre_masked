
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path_cond {int dummy; } ;
struct path {int dummy; } ;
struct aa_profile {int path_flags; int label; } ;
struct aa_perms {int dummy; } ;


 int FUNC_0 (char const*,struct aa_profile*,char const*,int ,struct path_cond*,int,struct aa_perms*) ;
 int FUNC_1 (char const*,int *,struct path const*,int,char*,char const**,struct path_cond*,int ) ;
 scalar_t__ FUNC_2 (struct aa_profile*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, struct aa_profile *VAR_1,
        const struct path *VAR_2, char *VAR_3, u32 VAR_4,
        struct path_cond *VAR_5, int VAR_6,
        struct aa_perms *VAR_7)
{
 const char *VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_1))
  return 0;

 VAR_9 = FUNC_1(VAR_0, &VAR_1->label, VAR_2,
     VAR_6 | VAR_1->path_flags, VAR_3, &VAR_8, VAR_5,
     VAR_4);
 if (VAR_9)
  return VAR_9;
 return FUNC_0(VAR_0, VAR_1, VAR_8, VAR_4, VAR_5, VAR_6,
         VAR_7);
}
