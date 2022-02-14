
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path_cond {int mode; } ;
struct path {int dummy; } ;
struct aa_profile {int dummy; } ;
struct aa_perms {int dummy; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,struct aa_profile*,struct path const*,char*,int ,struct path_cond*,int,struct aa_perms*) ;
 int FUNC_4 (char*) ;

int FUNC_5(const char *VAR_2, struct aa_label *VAR_3,
   const struct path *VAR_4, int VAR_5, u32 VAR_6,
   struct path_cond *VAR_7)
{
 struct aa_perms VAR_8 = {};
 struct aa_profile *VAR_9;
 char *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_5 |= VAR_0 | (FUNC_0(VAR_7->mode) ? VAR_1 :
        0);
 FUNC_2(VAR_10);
 VAR_11 = FUNC_1(VAR_3, VAR_9,
   FUNC_3(VAR_2, VAR_9, VAR_4, VAR_10, VAR_6,
       VAR_7, VAR_5, &VAR_8));

 FUNC_4(VAR_10);

 return VAR_11;
}
