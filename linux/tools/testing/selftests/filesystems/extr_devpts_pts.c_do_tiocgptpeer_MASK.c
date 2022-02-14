
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int,char*,int) ;
 int VAR_10 ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(char *VAR_11, char *VAR_12)
{
 int VAR_13;
 int VAR_14 = -1, VAR_15 = -1, VAR_16 = -1;

 VAR_14 = FUNC_6(VAR_11, VAR_6 | VAR_5 | VAR_4);
 if (VAR_14 < 0) {
  FUNC_3(VAR_10, "Failed to open \"%s\": %s\n", VAR_11,
   FUNC_8(VAR_9));
  return -1;
 }





 VAR_13 = FUNC_11(VAR_14);
 if (VAR_13 < 0) {
  FUNC_3(VAR_10, "Failed to unlock terminal\n");
  goto do_cleanup;
 }




 if (VAR_15 < 0) {
  if (VAR_9 == VAR_0) {
   FUNC_3(VAR_10, "TIOCGPTPEER is not supported. "
     "Skipping test.\n");
   VAR_16 = VAR_3;
  } else {
   FUNC_3(VAR_10,
    "Failed to perform TIOCGPTPEER ioctl\n");
   VAR_16 = VAR_1;
  }
  goto do_cleanup;
 }

 pid_t VAR_17 = FUNC_2();
 if (VAR_17 < 0)
  goto do_cleanup;

 if (VAR_17 == 0) {
  char VAR_18[4096];

  VAR_13 = FUNC_5(VAR_15);
  if (VAR_13 < 0) {
   FUNC_3(VAR_10, "Failed to setup terminal\n");
   FUNC_0(VAR_1);
  }

  VAR_13 = FUNC_7(VAR_7, VAR_18, sizeof(VAR_18));
  if (VAR_13 < 0) {
   FUNC_3(VAR_10, "Failed to retrieve pathname of pts "
     "slave file descriptor\n");
   FUNC_0(VAR_1);
  }

  if (FUNC_10(VAR_12, VAR_18,
       FUNC_9(VAR_12)) != 0) {
   FUNC_3(VAR_10, "Received invalid contents for "
     "\"/proc/<pid>/fd/%d\" symlink: %s\n",
     VAR_7, VAR_18);
   FUNC_0(-1);
  }

  FUNC_3(VAR_10, "Contents of \"/proc/<pid>/fd/%d\" "
    "symlink are valid: %s\n", VAR_7, VAR_18);

  FUNC_0(VAR_2);
 }

 VAR_13 = FUNC_12(VAR_17);
 if (VAR_13 < 0)
  goto do_cleanup;

 VAR_16 = VAR_2;

do_cleanup:
 if (VAR_14 >= 0)
  FUNC_1(VAR_14);
 if (VAR_15 >= 0)
  FUNC_1(VAR_15);

 return VAR_16;
}
