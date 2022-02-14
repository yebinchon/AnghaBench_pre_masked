
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 void** VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 size_t VAR_2 ;
 void** VAR_3 ;
 int VAR_4 ;
 char* FUNC_5 (int) ;
 char* FUNC_6 (char*,char*) ;
 void* FUNC_7 (char*,char**,int) ;
 char* VAR_5 ;

__attribute__((used)) static int FUNC_8(void)
{
 char VAR_6[256];
 FILE *VAR_7;
 int VAR_8;

 VAR_2 = 0;

 VAR_7 = FUNC_3("/proc/iomem", "r");
 if (!VAR_7) {
  FUNC_4(VAR_4, "/proc/iomem: error %d: %s\n",
   VAR_1, FUNC_5(VAR_1));
  return -VAR_1;
 }

 while (FUNC_2(VAR_6, sizeof(VAR_6), VAR_7) != 0) {
  if (FUNC_6(VAR_6, VAR_5)) {
   char *VAR_9, *VAR_10;





   VAR_9 = FUNC_6(VAR_6, "-");
   VAR_9[0] = 0x20;

   VAR_3[VAR_2] = FUNC_7(VAR_6, &VAR_10, 16);
   VAR_0[VAR_2] = FUNC_7(VAR_10, ((void*)0), 16);
   VAR_2++;
  }
 }

 FUNC_1(VAR_7);

 FUNC_0("RAM Ranges\n");
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_0("\trange %d: 0x%llx\t- 0x%llx\n",
          VAR_8, VAR_3[VAR_8], VAR_0[VAR_8]);

 if (VAR_2 == 0) {
  FUNC_4(VAR_4, "No valid address ranges found.  Error.\n");
  return -1;
 }

 return 0;
}
