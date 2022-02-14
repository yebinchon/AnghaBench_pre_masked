
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int pid_t ;
typedef int filename ;
typedef int bf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int) ;
 size_t FUNC_6 (int,char*,int) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char*,int) ;
 char* FUNC_9 (char*,char) ;
 size_t FUNC_10 (char*) ;
 char* FUNC_11 (char*,char*) ;

__attribute__((used)) static int FUNC_12(pid_t VAR_2, char *VAR_3, size_t VAR_4,
        pid_t *VAR_5, pid_t *VAR_6)
{
 char VAR_7[VAR_1];
 char VAR_8[4096];
 int VAR_9;
 size_t VAR_10 = 0;
 ssize_t VAR_11;
 char *VAR_12, *VAR_13, *VAR_14;

 *VAR_5 = -1;
 *VAR_6 = -1;

 FUNC_8(VAR_7, sizeof(VAR_7), "/proc/%d/status", VAR_2);

 VAR_9 = FUNC_3(VAR_7, VAR_0);
 if (VAR_9 < 0) {
  FUNC_4("couldn't open %s\n", VAR_7);
  return -1;
 }

 VAR_11 = FUNC_6(VAR_9, VAR_8, sizeof(VAR_8) - 1);
 FUNC_1(VAR_9);
 if (VAR_11 <= 0) {
  FUNC_5("Couldn't get COMM, tigd and ppid for pid %d\n",
      VAR_2);
  return -1;
 }
 VAR_8[VAR_11] = '\0';

 VAR_12 = FUNC_11(VAR_8, "Name:");
 VAR_13 = FUNC_11(VAR_8, "Tgid:");
 VAR_14 = FUNC_11(VAR_8, "PPid:");

 if (VAR_12) {
  char *VAR_15;

  VAR_12 = FUNC_7(VAR_12 + 5);
  VAR_15 = FUNC_9(VAR_12, '\n');
  if (VAR_15)
   *VAR_15 = '\0';

  VAR_10 = FUNC_10(VAR_12);
  if (VAR_10 >= VAR_4)
   VAR_10 = VAR_4 - 1;
  FUNC_2(VAR_3, VAR_12, VAR_10);
  VAR_3[VAR_10] = '\0';
 } else {
  FUNC_4("Name: string not found for pid %d\n", VAR_2);
 }

 if (VAR_13) {
  VAR_13 += 5;
  *VAR_5 = FUNC_0(VAR_13);
 } else {
  FUNC_4("Tgid: string not found for pid %d\n", VAR_2);
 }

 if (VAR_14) {
  VAR_14 += 5;
  *VAR_6 = FUNC_0(VAR_14);
 } else {
  FUNC_4("PPid: string not found for pid %d\n", VAR_2);
 }

 return 0;
}
