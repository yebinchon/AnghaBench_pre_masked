
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char**,size_t*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,unsigned long*,unsigned long*,char*,unsigned long*,char*,unsigned long*,char*) ;

__attribute__((used)) static FILE *FUNC_7(unsigned long VAR_1)
{
 FILE *VAR_2;
 char *VAR_3 = ((void*)0);
 size_t VAR_4 = 0;
 unsigned long VAR_5, VAR_6;
 char VAR_7[5];
 unsigned long VAR_8;
 char VAR_9[32];
 unsigned long VAR_10;
 char VAR_11[VAR_0];

 VAR_2 = FUNC_2("/proc/self/smaps", "r");
 if (!VAR_2) {
  FUNC_5("fopen smaps");
  FUNC_0(1);
 }

 while (FUNC_4(&VAR_3, &VAR_4, VAR_2) > 0) {
  if (FUNC_6(VAR_3, "%lx-%lx %s %lx %s %lu %s\n",
      &VAR_5, &VAR_6, VAR_7, &VAR_8, VAR_9, &VAR_10, VAR_11) < 6)
   goto next;

  if (VAR_5 <= VAR_1 && VAR_1 < VAR_6)
   goto out;

next:
  FUNC_3(VAR_3);
  VAR_3 = ((void*)0);
  VAR_4 = 0;
 }

 FUNC_1(VAR_2);
 VAR_2 = ((void*)0);

out:
 FUNC_3(VAR_3);
 return VAR_2;
}
