
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,char const*,char*,int,int *) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int*,int ) ;

__attribute__((used)) static bool FUNC_11(void)
{
 pid_t VAR_6;
 int VAR_7;
 const char *VAR_8 = "/dev";
 const char *VAR_9 = "/tmp";
 int VAR_10, VAR_11;

 VAR_6 = FUNC_5();
 if (VAR_6 == -1) {
  FUNC_3("fork failed: %s\n",
   FUNC_8(VAR_5));
 }
 if (VAR_6 != 0) {
  pid_t VAR_12;
  int VAR_13;
  VAR_12 = FUNC_10(VAR_6, &VAR_13, 0);
  if (VAR_12 == -1) {
   FUNC_3("waitpid failed: %s\n",
    FUNC_8(VAR_5));
  }
  if (VAR_12 != VAR_6) {
   FUNC_3("waited for %d got %d\n",
    VAR_6, VAR_12);
  }
  if (!FUNC_1(VAR_13)) {
   FUNC_3("child did not terminate cleanly\n");
  }
  return FUNC_0(VAR_13) == VAR_1 ? 1 : 0;
 }

 VAR_10 = FUNC_7(VAR_8);

 FUNC_2();
 VAR_7 = FUNC_9(VAR_0);
 if (VAR_7 != 0) {
  FUNC_3("unshare(CLONE_NEWNS) failed: %s\n",
   FUNC_8(VAR_5));
 }

 VAR_7 = FUNC_6(VAR_8, VAR_9, "bind", VAR_2 | VAR_3, ((void*)0));
 if (VAR_7 != 0) {
  FUNC_3("recursive bind mount of %s onto %s failed: %s\n",
   VAR_8, VAR_9, FUNC_8(VAR_5));
 }

 VAR_7 = FUNC_6(VAR_9, VAR_9, "none",
      VAR_4 | VAR_2 | VAR_10 , ((void*)0));
 if (VAR_7 != 0) {

  FUNC_3("remount of /tmp failed: %s\n",
      FUNC_8(VAR_5));
 }

 VAR_11 = FUNC_7(VAR_9);
 if (VAR_10 != VAR_11) {
  FUNC_3("Mount flags unexpectedly changed during remount of %s originally mounted on %s\n",
   VAR_9, VAR_8);
 }
 FUNC_4(VAR_1);
}
