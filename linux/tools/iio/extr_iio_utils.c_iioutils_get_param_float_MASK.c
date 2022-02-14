
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char const* d_name; } ;
typedef int FILE ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char*,char const*,char const*) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,float*) ;
 int * FUNC_5 (char const*) ;
 int FUNC_6 (char*) ;
 struct dirent* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,char const*) ;

int FUNC_9(float *VAR_4, const char *VAR_5,
        const char *VAR_6, const char *VAR_7,
        const char *VAR_8)
{
 FILE *VAR_9;
 int VAR_10;
 DIR *VAR_11;
 char *VAR_12, *VAR_13;
 char *VAR_14 = ((void*)0);
 const struct dirent *VAR_15;

 VAR_10 = FUNC_0(&VAR_12, "%s_%s", VAR_7, VAR_5);
 if (VAR_10 < 0)
  return -VAR_2;

 VAR_10 = FUNC_0(&VAR_13,
         "%s_%s", VAR_8, VAR_5);
 if (VAR_10 < 0) {
  VAR_10 = -VAR_2;
  goto error_free_builtname;
 }

 VAR_11 = FUNC_5(VAR_6);
 if (!VAR_11) {
  VAR_10 = -VAR_3;
  goto error_free_builtname_generic;
 }

 VAR_10 = -VAR_1;
 while (VAR_15 = FUNC_7(VAR_11), VAR_15)
  if ((FUNC_8(VAR_12, VAR_15->d_name) == 0) ||
      (FUNC_8(VAR_13, VAR_15->d_name) == 0)) {
   VAR_10 = FUNC_0(&VAR_14,
           "%s/%s", VAR_6, VAR_15->d_name);
   if (VAR_10 < 0) {
    VAR_10 = -VAR_2;
    goto error_closedir;
   }

   VAR_9 = FUNC_2(VAR_14, "r");
   if (!VAR_9) {
    VAR_10 = -VAR_3;
    goto error_free_filename;
   }

   VAR_3 = 0;
   if (FUNC_4(VAR_9, "%f", VAR_4) != 1)
    VAR_10 = VAR_3 ? -VAR_3 : -VAR_0;

   break;
  }
error_free_filename:
 if (VAR_14)
  FUNC_3(VAR_14);

error_closedir:
 if (FUNC_1(VAR_11) == -1)
  FUNC_6("iioutils_get_param_float(): Failed to close directory");

error_free_builtname_generic:
 FUNC_3(VAR_13);
error_free_builtname:
 FUNC_3(VAR_12);

 return VAR_10;
}
