
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char**,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 struct dirent* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_12(void)
{
 const struct dirent *VAR_9;
 int VAR_10;
 DIR *VAR_11;

 VAR_11 = FUNC_7(VAR_4);
 if (!VAR_11) {
  FUNC_5(VAR_5, "No industrial I/O devices available\n");
  return -VAR_0;
 }

 while (VAR_9 = FUNC_10(VAR_11), VAR_9) {
  if (FUNC_1(VAR_9->d_name, VAR_6)) {
   char *VAR_12;

   if (FUNC_0(&VAR_12, "%d%d", VAR_4,
         VAR_9->d_name) < 0) {
    VAR_10 = -VAR_1;
    goto error_close_dir;
   }

   VAR_10 = FUNC_3(VAR_12);
   if (VAR_10) {
    FUNC_6(VAR_12);
    goto error_close_dir;
   }

   FUNC_6(VAR_12);
   if (VAR_8 >= VAR_2)
    FUNC_9("\n");
  }
 }
 FUNC_11(VAR_11);
 while (VAR_9 = FUNC_10(VAR_11), VAR_9) {
  if (FUNC_1(VAR_9->d_name, VAR_7)) {
   char *VAR_13;

   if (FUNC_0(&VAR_13, "%d%d", VAR_4,
         VAR_9->d_name) < 0) {
    VAR_10 = -VAR_1;
    goto error_close_dir;
   }

   VAR_10 = FUNC_4(VAR_13);
   if (VAR_10) {
    FUNC_6(VAR_13);
    goto error_close_dir;
   }

   FUNC_6(VAR_13);
  }
 }

 return (FUNC_2(VAR_11) == -1) ? -VAR_3 : 0;

error_close_dir:
 if (FUNC_2(VAR_11) == -1)
  FUNC_8("dump_devices(): Failed to close directory");

 return VAR_10;
}
