
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,long long*,int,int) ;
 int FUNC_3 (char*,long long) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char**,int) ;

int FUNC_6(int VAR_2, char **VAR_3) {
 int VAR_4, VAR_5;
 long long VAR_6;
 char VAR_7[64];

 if (VAR_2 != 2)
  return 1;

 VAR_1 = 0;
 VAR_4 = FUNC_5(VAR_3[1], (char **) ((void*)0), 10);

 if (VAR_1)
  return 1;

 FUNC_4(VAR_7, "/dev/cpu/%d/msr", VAR_4);
 VAR_5 = FUNC_0(VAR_7, VAR_0);

 if (VAR_5 == -1) {
  FUNC_1("Failed to open");
  return 1;
 }

 FUNC_2(VAR_5, &VAR_6, sizeof(VAR_6), 0x199);

 FUNC_3("msr 0x199: 0x%llx\n", VAR_6);
 return 0;
}
