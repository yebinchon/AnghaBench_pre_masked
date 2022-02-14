
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,int) ;
 scalar_t__ FUNC_7 () ;
 int VAR_5 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_11(int VAR_10, char *VAR_11)
{
 int VAR_12, VAR_13 = VAR_10;

 VAR_12 = FUNC_5(VAR_11);
 if (VAR_12 < 0) {
  FUNC_3(VAR_5, "ERROR: (%i) load bpf failed\n", VAR_12);
  return VAR_12;
 }

 if (VAR_10 < 0) {
  if (FUNC_7()) {
   FUNC_3(VAR_5, "ERROR: cgroup env failed\n");
   return -VAR_1;
  }

  VAR_10 = FUNC_2(VAR_0);
  if (VAR_10 < 0) {
   FUNC_3(VAR_5,
    "ERROR: (%i) open cg path failed: %s\n",
    VAR_10, VAR_3);
   return VAR_10;
  }

  if (FUNC_4(VAR_0)) {
   FUNC_3(VAR_5, "ERROR: failed to join cgroup\n");
   return -VAR_1;
  }
 }


 VAR_8 = VAR_6 = VAR_9 = VAR_7 = 0;
 VAR_12 = FUNC_10(VAR_10);
 if (VAR_12)
  goto out;


 VAR_12 = FUNC_8(VAR_10);
 if (VAR_12)
  goto out;


 VAR_12 = FUNC_9(VAR_10);
 if (VAR_12)
  goto out;

out:
 FUNC_6("Summary: %i PASSED %i FAILED\n", VAR_4, VAR_2);
 if (VAR_13 < 0) {
  FUNC_0();
  FUNC_1(VAR_10);
 }
 return VAR_12;
}
