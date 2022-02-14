
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char**,size_t*,int *) ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (unsigned long) ;
 int FUNC_5 (char*,char*,unsigned long*) ;
 int FUNC_6 (char*,char*) ;

int FUNC_7(unsigned long VAR_0)
{
 FILE *VAR_1;
 char *VAR_2;
 unsigned long VAR_3 = 0;
 size_t VAR_4;

 VAR_1 = FUNC_4(VAR_0);
 if (!VAR_1) {
  FUNC_3("Unable to parse /proc/self/smaps\n");
  return 0;
 }

 while (FUNC_2(&VAR_2, &VAR_4, VAR_1) > 0) {
  if (!FUNC_6(VAR_2, "MMUPageSize")) {
   FUNC_1(VAR_2);
   VAR_2 = ((void*)0);
   VAR_4 = 0;
   continue;
  }


  if (FUNC_5(VAR_2, "MMUPageSize:    %8lu kB",
     &VAR_3) < 1) {
   FUNC_3("Unable to parse smaps entry for Size:%s\n",
     VAR_2);
   break;
  }

 }
 FUNC_1(VAR_2);
 if (VAR_1)
  FUNC_0(VAR_1);
 return VAR_3 << 10;
}
