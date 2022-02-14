
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path_cond {int uid; } ;
struct TYPE_2__ {int start; int dfa; } ;
struct aa_profile {TYPE_1__ file; } ;
struct aa_perms {int allow; } ;


 int VAR_0 ;
 int FUNC_0 (struct aa_profile*,struct aa_perms*,char const*,int,char const*,int *,int *,int ,int *,int) ;
 int FUNC_1 (int ,int ,char const*,struct path_cond*,struct aa_perms*) ;
 scalar_t__ FUNC_2 (struct aa_profile*) ;

int FUNC_3(const char *VAR_1, struct aa_profile *VAR_2, const char *VAR_3,
     u32 VAR_4, struct path_cond *VAR_5, int VAR_6,
     struct aa_perms *VAR_7)
{
 int VAR_8 = 0;

 if (FUNC_2(VAR_2))
  return 0;
 FUNC_1(VAR_2->file.dfa, VAR_2->file.start, VAR_3, VAR_5, VAR_7);
 if (VAR_4 & ~VAR_7->allow)
  VAR_8 = -VAR_0;
 return FUNC_0(VAR_2, VAR_7, VAR_1, VAR_4, VAR_3, ((void*)0), ((void*)0),
        VAR_5->uid, ((void*)0), VAR_8);
}
