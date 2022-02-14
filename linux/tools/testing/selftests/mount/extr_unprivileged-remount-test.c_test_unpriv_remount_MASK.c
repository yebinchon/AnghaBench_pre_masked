
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char*,char*,char const*,int,char const*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int,int*,int ) ;

__attribute__((used)) static
bool FUNC_10(const char *VAR_5, const char *VAR_6,
    int VAR_7, int VAR_8, int VAR_9)
{
 pid_t VAR_10;

 VAR_10 = FUNC_5();
 if (VAR_10 == -1) {
  FUNC_3("fork failed: %s\n",
   FUNC_7(VAR_4));
 }
 if (VAR_10 != 0) {
  pid_t VAR_11;
  int VAR_12;
  VAR_11 = FUNC_9(VAR_10, &VAR_12, 0);
  if (VAR_11 == -1) {
   FUNC_3("waitpid failed: %s\n",
    FUNC_7(VAR_4));
  }
  if (VAR_11 != VAR_10) {
   FUNC_3("waited for %d got %d\n",
    VAR_10, VAR_11);
  }
  if (!FUNC_1(VAR_12)) {
   FUNC_3("child did not terminate cleanly\n");
  }
  return FUNC_0(VAR_12) == VAR_1 ? 1 : 0;
 }

 FUNC_2();
 if (FUNC_8(VAR_0) != 0) {
  FUNC_3("unshare(CLONE_NEWNS) failed: %s\n",
   FUNC_7(VAR_4));
 }

 if (FUNC_6("testing", "/tmp", VAR_5, VAR_7, VAR_6) != 0) {
  FUNC_3("mount of %s with options '%s' on /tmp failed: %s\n",
      VAR_5,
      VAR_6? VAR_6 : "",
      FUNC_7(VAR_4));
 }

 FUNC_2();

 if (FUNC_8(VAR_0) != 0) {
  FUNC_3("unshare(CLONE_NEWNS) failed: %s\n",
   FUNC_7(VAR_4));
 }

 if (FUNC_6("/tmp", "/tmp", "none",
    VAR_3 | VAR_2 | VAR_8, ((void*)0)) != 0) {

  FUNC_3("remount of /tmp failed: %s\n",
      FUNC_7(VAR_4));
 }

 if (FUNC_6("/tmp", "/tmp", "none",
    VAR_3 | VAR_2 | VAR_9, ((void*)0)) == 0) {

  FUNC_3("remount of /tmp with invalid flags "
      "succeeded unexpectedly\n");
 }
 FUNC_4(VAR_1);
}
