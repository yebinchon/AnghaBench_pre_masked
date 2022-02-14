
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct path_cond {int mode; int uid; } ;
struct file {int f_path; } ;
struct aa_profile {int dummy; } ;
struct aa_perms {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_2__ {int i_mode; int i_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct aa_label*,struct aa_label*) ;
 int FUNC_2 (struct file*) ;
 TYPE_1__* FUNC_3 (struct file*) ;
 int FUNC_4 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_5 (struct aa_label*,struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*,struct aa_profile*,int *,char*,scalar_t__,struct path_cond*,int,struct aa_perms*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,struct aa_label*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(const char *VAR_2, struct aa_label *VAR_3,
       struct aa_label *VAR_4, struct file *VAR_5,
       u32 VAR_6, u32 VAR_7)
{
 struct aa_profile *VAR_8;
 struct aa_perms VAR_9 = {};
 struct path_cond VAR_10 = {
  .uid = FUNC_3(VAR_5)->i_uid,
  .mode = FUNC_3(VAR_5)->i_mode
 };
 char *VAR_11;
 int VAR_12, VAR_13;


 if (!VAR_7 && FUNC_1(VAR_4, VAR_3))

  return 0;

 VAR_12 = VAR_0 | (FUNC_0(VAR_10.mode) ? VAR_1 : 0);
 FUNC_6(VAR_11);


 VAR_13 = FUNC_5(VAR_4, VAR_3, VAR_8,
   FUNC_7(VAR_2, VAR_8, &VAR_5->f_path, VAR_11,
       VAR_6, &VAR_10, VAR_12, &VAR_9));
 if (VAR_7 && !VAR_13) {
  if (VAR_3 == VAR_4)
   VAR_13 = FUNC_4(VAR_3, VAR_8,
    FUNC_7(VAR_2, VAR_8, &VAR_5->f_path,
        VAR_11, VAR_6, &VAR_10, VAR_12,
        &VAR_9));
  else
   VAR_13 = FUNC_5(VAR_3, VAR_4, VAR_8,
    FUNC_7(VAR_2, VAR_8, &VAR_5->f_path,
        VAR_11, VAR_6, &VAR_10, VAR_12,
        &VAR_9));
 }
 if (!VAR_13)
  FUNC_9(FUNC_2(VAR_5), VAR_3, VAR_6);

 FUNC_8(VAR_11);

 return VAR_13;
}
