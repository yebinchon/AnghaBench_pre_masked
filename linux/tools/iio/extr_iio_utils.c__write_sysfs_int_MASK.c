
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
 int FUNC_4 (int *,char*,int*) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,char const*,char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_4, const char *VAR_5, int VAR_6,
       int VAR_7)
{
 int VAR_8 = 0;
 FILE *VAR_9;
 int VAR_10;
 char *VAR_11 = FUNC_5(FUNC_8(VAR_5) + FUNC_8(VAR_4) + 2);

 if (!VAR_11)
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_11, "%s/%s", VAR_5, VAR_4);
 if (VAR_8 < 0)
  goto error_free;

 VAR_9 = FUNC_1(VAR_11, "w");
 if (!VAR_9) {
  VAR_8 = -VAR_2;
  FUNC_2(VAR_3, "failed to open %s\n", VAR_11);
  goto error_free;
 }

 VAR_8 = FUNC_2(*VAR_9, "%d", VAR_6);
 if (VAR_8 < 0) {
  if (FUNC_0(VAR_9))
   FUNC_6("_write_sysfs_int(): Failed to close dir");

  goto error_free;
 }

 if (FUNC_0(VAR_9)) {
  VAR_8 = -VAR_2;
  goto error_free;
 }

 if (VAR_7) {
  VAR_9 = FUNC_1(VAR_11, "r");
  if (!VAR_9) {
   VAR_8 = -VAR_2;
   FUNC_2(VAR_3, "failed to open %s\n", VAR_11);
   goto error_free;
  }

  if (FUNC_4(VAR_9, "%d", &VAR_10) != 1) {
   VAR_8 = VAR_2 ? -VAR_2 : -VAR_0;
   if (FUNC_0(VAR_9))
    FUNC_6("_write_sysfs_int(): Failed to close dir");

   goto error_free;
  }

  if (FUNC_0(VAR_9)) {
   VAR_8 = -VAR_2;
   goto error_free;
  }

  if (VAR_10 != VAR_6) {
   FUNC_2(VAR_3,
    "Possible failure in int write %d to %s/%s\n",
    VAR_6, VAR_5, VAR_4);
   VAR_8 = -1;
  }
 }

error_free:
 FUNC_3(VAR_11);
 return VAR_8;
}
