
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
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,char*) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,char const*,char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (char*,char const*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_4, const char *VAR_5,
          const char *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 FILE *VAR_9;
 char *VAR_10 = FUNC_5(FUNC_9(VAR_5) + FUNC_9(VAR_4) + 2);

 if (!VAR_10) {
  FUNC_2(VAR_3, "Memory allocation failed\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_7(VAR_10, "%s/%s", VAR_5, VAR_4);
 if (VAR_8 < 0)
  goto error_free;

 VAR_9 = FUNC_1(VAR_10, "w");
 if (!VAR_9) {
  VAR_8 = -VAR_2;
  FUNC_2(VAR_3, "Could not open %s\n", VAR_10);
  goto error_free;
 }

 VAR_8 = FUNC_2(*VAR_9, "%s", VAR_6);
 if (VAR_8 < 0) {
  if (FUNC_0(VAR_9))
   FUNC_6("_write_sysfs_string(): Failed to close dir");

  goto error_free;
 }

 if (FUNC_0(VAR_9)) {
  VAR_8 = -VAR_2;
  goto error_free;
 }

 if (VAR_7) {
  VAR_9 = FUNC_1(VAR_10, "r");
  if (!VAR_9) {
   VAR_8 = -VAR_2;
   FUNC_2(VAR_3, "Could not open file to verify\n");
   goto error_free;
  }

  if (FUNC_4(VAR_9, "%s", VAR_10) != 1) {
   VAR_8 = VAR_2 ? -VAR_2 : -VAR_0;
   if (FUNC_0(VAR_9))
    FUNC_6("_write_sysfs_string(): Failed to close dir");

   goto error_free;
  }

  if (FUNC_0(VAR_9)) {
   VAR_8 = -VAR_2;
   goto error_free;
  }

  if (FUNC_8(VAR_10, VAR_6) != 0) {
   FUNC_2(VAR_3,
    "Possible failure in string write of %s "
    "Should be %s written to %s/%s\n", VAR_10, VAR_6,
    VAR_5, VAR_4);
   VAR_8 = -1;
  }
 }

error_free:
 FUNC_3(VAR_10);

 return VAR_8;
}
