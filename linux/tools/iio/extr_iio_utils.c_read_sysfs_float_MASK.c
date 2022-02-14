
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,float*) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,char const*,char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (char const*) ;

int FUNC_9(const char *VAR_4, const char *VAR_5, float *VAR_6)
{
 int VAR_7 = 0;
 FILE *VAR_8;
 char *VAR_9 = FUNC_5(FUNC_8(VAR_5) + FUNC_8(VAR_4) + 2);

 if (!VAR_9) {
  FUNC_2(VAR_3, "Memory allocation failed");
  return -VAR_1;
 }

 VAR_7 = FUNC_7(VAR_9, "%s/%s", VAR_5, VAR_4);
 if (VAR_7 < 0)
  goto error_free;

 VAR_8 = FUNC_1(VAR_9, "r");
 if (!VAR_8) {
  VAR_7 = -VAR_2;
  goto error_free;
 }

 VAR_2 = 0;
 if (FUNC_4(VAR_8, "%f\n", VAR_6) != 1) {
  VAR_7 = VAR_2 ? -VAR_2 : -VAR_0;
  if (FUNC_0(VAR_8))
   FUNC_6("read_sysfs_float(): Failed to close dir");

  goto error_free;
 }

 if (FUNC_0(VAR_8))
  VAR_7 = -VAR_2;

error_free:
 FUNC_3(VAR_9);

 return VAR_7;
}
