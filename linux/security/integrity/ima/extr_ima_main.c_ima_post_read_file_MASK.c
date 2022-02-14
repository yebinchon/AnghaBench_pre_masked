
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct file {int dummy; } ;
typedef int loff_t ;
typedef enum kernel_read_file_id { ____Placeholder_kernel_read_file_id } kernel_read_file_id ;
typedef enum ima_hooks { ____Placeholder_ima_hooks } ima_hooks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct file*,int ,int ,void*,int ,int ,int) ;
 scalar_t__* VAR_9 ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct file *VAR_10, void *VAR_11, loff_t VAR_12,
         enum kernel_read_file_id VAR_13)
{
 enum ima_hooks VAR_14;
 u32 VAR_15;

 if (!VAR_10 && VAR_13 == VAR_5) {
  if ((VAR_8 & VAR_3) &&
      (VAR_8 & VAR_2)) {
   FUNC_1("Prevent firmware loading_store.\n");
   return -VAR_0;
  }
  return 0;
 }


 if (!VAR_10 && VAR_13 == VAR_6)
  return 0;

 if (!VAR_10 || !VAR_11 || VAR_12 == 0) {
  if (VAR_8 & VAR_2)
   return -VAR_0;
  return 0;
 }

 VAR_14 = VAR_9[VAR_13] ?: VAR_1;
 FUNC_3(VAR_7, &VAR_15);
 return FUNC_2(VAR_10, FUNC_0(), VAR_15, VAR_11, VAR_12,
       VAR_4, VAR_14);
}
