
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* VAR_5 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 int VAR_7 ;
 int * VAR_8 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

int FUNC_7(int VAR_9, char **VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = 0;

 if (VAR_9 < 3)
  return FUNC_6(VAR_10[0]);

 VAR_11 = FUNC_3(VAR_10[1], VAR_3 | VAR_4);
 if (VAR_11 < 0) {
  FUNC_4("Failed to open cgroup path: '%s'\n", FUNC_5(VAR_6));
  return VAR_1;
 }

 if (FUNC_2(VAR_10[2]))
  return VAR_1;

 FUNC_4("Output from kernel verifier:\n%s\n-------\n", VAR_5);

 if (VAR_9 > 3)
  VAR_13 = FUNC_0(VAR_10[3]);

 if (VAR_13 >= VAR_7) {
  FUNC_4("Invalid program id; program not found in file\n");
  return VAR_1;
 }

 VAR_12 = FUNC_1(VAR_8[VAR_13], VAR_11,
         VAR_0, 0);
 if (VAR_12 < 0) {
  FUNC_4("Failed to attach prog to cgroup: '%s'\n",
         FUNC_5(VAR_6));
  return VAR_1;
 }

 return VAR_2;
}
