
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_cond {int dummy; } ;
struct linux_binprm {int filename; } ;
struct aa_profile {int label; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct aa_label* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct aa_profile*,int *,int ,int ,int ,int *,struct aa_label*,int ,char*,int ) ;
 int FUNC_3 (struct aa_label*) ;
 int FUNC_4 (int *,struct aa_label*,int ) ;
 int FUNC_5 (struct aa_label*,struct aa_profile*,int ) ;
 struct aa_label* FUNC_6 (struct aa_label*,struct aa_profile*,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct aa_profile*,struct aa_label*,int,struct linux_binprm const*,char*,struct path_cond*,int*) ;
 int FUNC_8 (struct aa_profile*,struct linux_binprm const*,char*,struct path_cond*,int*) ;

__attribute__((used)) static struct aa_label *FUNC_9(struct aa_label *VAR_6,
          struct aa_label *VAR_7, bool VAR_8,
          const struct linux_binprm *VAR_9,
          char *VAR_10, struct path_cond *VAR_11,
          bool *VAR_12)
{
 struct aa_profile *VAR_13;
 struct aa_label *VAR_14;
 int VAR_15;

 FUNC_0(!VAR_6);
 FUNC_0(!VAR_7);
 FUNC_0(!VAR_9);
 FUNC_0(!VAR_10);

 if (!VAR_8) {
  VAR_15 = FUNC_5(VAR_6, VAR_13,
    FUNC_7(VAR_13, VAR_7, VAR_8,
            VAR_9, VAR_10, VAR_11, VAR_12));
  if (VAR_15)
   return FUNC_1(VAR_15);
  VAR_14 = FUNC_6(VAR_6, VAR_13, VAR_2,
    FUNC_3(VAR_7),
    FUNC_8(VAR_13, VAR_9, VAR_10,
         VAR_11, VAR_12));

 } else {

  VAR_15 = FUNC_5(VAR_6, VAR_13,
    FUNC_7(VAR_13, VAR_7, VAR_8, VAR_9,
            VAR_10, VAR_11, VAR_12));
  if (VAR_15)
   return FUNC_1(VAR_15);
  VAR_14 = FUNC_6(VAR_6, VAR_13, VAR_2,
    FUNC_4(&VAR_13->label, VAR_7,
            VAR_2),
    FUNC_8(VAR_13, VAR_9, VAR_10,
         VAR_11, VAR_12));
 }

 if (VAR_14)
  return VAR_14;


 VAR_15 = FUNC_5(VAR_6, VAR_13,
   FUNC_2(VAR_13, &VAR_5, VAR_4,
          VAR_0, VAR_9->filename, ((void*)0),
          VAR_7, VAR_3,
          "failed to build target label", -VAR_1));
 return FUNC_1(VAR_15);
}
