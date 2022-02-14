
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mnt; } ;
struct file {TYPE_2__ f_path; } ;
typedef enum kernel_read_file_id { ____Placeholder_kernel_read_file_id } kernel_read_file_id ;
struct TYPE_3__ {struct super_block* mnt_sb; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 char* FUNC_3 (int) ;
 struct super_block* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char const*,struct file*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_5, enum kernel_read_file_id VAR_6)
{
 struct super_block *VAR_7;
 const char *VAR_8 = FUNC_3(VAR_6);


 if ((unsigned int)VAR_6 < FUNC_0(VAR_2) &&
     VAR_2[VAR_6]) {
  FUNC_4(VAR_8, VAR_5, "pinning-excluded");
  return 0;
 }


 if (!VAR_5) {
  if (!VAR_1) {
   FUNC_4(VAR_8, ((void*)0), "old-api-pinning-ignored");
   return 0;
  }

  FUNC_4(VAR_8, ((void*)0), "old-api-denied");
  return -VAR_0;
 }

 VAR_7 = VAR_5->f_path.mnt->mnt_sb;


 FUNC_5(&VAR_4);




 if (!VAR_3) {
  VAR_3 = VAR_7;






  FUNC_6(&VAR_4);
  FUNC_2(VAR_3);
  FUNC_4(VAR_8, VAR_5, "pinned");
 } else {
  FUNC_6(&VAR_4);
 }

 if (FUNC_1(VAR_3) || VAR_7 != VAR_3) {
  if (FUNC_7(!VAR_1)) {
   FUNC_4(VAR_8, VAR_5, "pinning-ignored");
   return 0;
  }

  FUNC_4(VAR_8, VAR_5, "denied");
  return -VAR_0;
 }

 return 0;
}
