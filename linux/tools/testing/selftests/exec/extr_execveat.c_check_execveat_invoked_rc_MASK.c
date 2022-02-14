
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char const*,int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int,int*,int ) ;

__attribute__((used)) static int FUNC_9(int VAR_3, const char *VAR_4, int VAR_5,
         int VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;
 pid_t VAR_10;
 int VAR_11 = VAR_4 ? FUNC_7(VAR_4) : 0;

 if (VAR_11 > 40)
  FUNC_5("Check success of execveat(%d, '%.20s...%s', %d)... ",
   VAR_3, VAR_4, (VAR_4 + VAR_11 - 20), VAR_5);
 else
  FUNC_5("Check success of execveat(%d, '%s', %d)... ",
   VAR_3, VAR_4?:"(null)", VAR_5);
 VAR_10 = FUNC_4();
 if (VAR_10 < 0) {
  FUNC_5("[FAIL] (fork() failed)\n");
  return 1;
 }
 if (VAR_10 == 0) {

  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_0, VAR_1, VAR_5);
  FUNC_5("[FAIL]: execveat() failed, rc=%d errno=%d (%s)\n",
   VAR_9, VAR_2, FUNC_6(VAR_2));
  FUNC_3(1);
 }

 VAR_9 = FUNC_8(VAR_10, &VAR_8, 0);
 if (VAR_9 != VAR_10) {
  FUNC_5("[FAIL] (waitpid(%d,...) returned %d)\n", VAR_10, VAR_9);
  return 1;
 }
 if (!FUNC_1(VAR_8)) {
  FUNC_5("[FAIL] (child %d did not exit cleanly, status=%08x)\n",
   VAR_10, VAR_8);
  return 1;
 }
 if ((FUNC_0(VAR_8) != VAR_6) &&
     (FUNC_0(VAR_8) != VAR_7)) {
  FUNC_5("[FAIL] (child %d exited with %d not %d nor %d)\n",
   VAR_10, FUNC_0(VAR_8), VAR_6, VAR_7);
  return 1;
 }
 FUNC_5("[OK]\n");
 return 0;
}
