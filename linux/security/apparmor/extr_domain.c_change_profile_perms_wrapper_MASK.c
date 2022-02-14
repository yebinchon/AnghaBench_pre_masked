
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int start; } ;
struct aa_profile {TYPE_1__ file; } ;
struct aa_perms {int dummy; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aa_profile*,struct aa_perms*,char const*,int ,char const*,int *,struct aa_label*,int ,char const*,int) ;
 int FUNC_1 (struct aa_profile*,struct aa_label*,int,int ,int ,struct aa_perms*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, const char *VAR_2,
     struct aa_profile *VAR_3,
     struct aa_label *VAR_4, bool VAR_5,
     u32 VAR_6, struct aa_perms *VAR_7)
{
 const char *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (!VAR_9)
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_3->file.start, VAR_7);
 if (VAR_9)
  VAR_9 = FUNC_0(VAR_3, VAR_7, VAR_1, VAR_6, VAR_2,
          ((void*)0), VAR_4, VAR_0, VAR_8,
          VAR_9);

 return VAR_9;
}
