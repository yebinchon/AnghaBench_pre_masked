
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (struct dstr*,char*) ;
 int FUNC_3 (struct dstr*,struct dstr*) ;
 int FUNC_4 (struct dstr*,char*,int) ;
 int FUNC_5 (struct dstr*,char*) ;
 int FUNC_6 (struct dstr*) ;
 int FUNC_7 (struct dstr*) ;
 scalar_t__ FUNC_8 (struct dstr*) ;
 int FUNC_9 (struct dstr*,char*,size_t) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char**,size_t*,int *) ;
 int VAR_2 ;
 char* FUNC_14 (char*) ;
 int VAR_3 ;
 char* FUNC_15 (char*,char) ;
 size_t FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*,int) ;
 char* FUNC_18 (char*,char*) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20(void)
{
 if (VAR_1)
  return;

 VAR_1 = 1;

 VAR_2 = FUNC_19(VAR_0);


 int VAR_4 = -1;
 int VAR_5 = -1;
 int VAR_6 = 0;
 char *VAR_7 = ((void*)0);
 size_t VAR_8 = 0;

 FILE *VAR_9;
 struct dstr VAR_10;
 struct dstr VAR_11;

 VAR_9 = FUNC_11("/proc/cpuinfo", "r");
 if (!VAR_9)
  return;

 FUNC_7(&VAR_10);
 FUNC_7(&VAR_11);

 while (FUNC_13(&VAR_7, &VAR_8, VAR_9) != -1) {
  if (!FUNC_17(VAR_7, "physical id", 11)) {
   char *VAR_12 = FUNC_15(VAR_7, ':');
   if (!VAR_12 || *(++VAR_12) == '\0')
    continue;

   VAR_4 = FUNC_0(VAR_12);
   FUNC_6(&VAR_10);
   FUNC_7(&VAR_10);
   FUNC_4(&VAR_10, "%d", VAR_4);
  }

  if (!FUNC_17(VAR_7, "cpu cores", 9)) {
   char *VAR_13 = FUNC_15(VAR_7, ':');
   if (!VAR_13 || *(++VAR_13) == '\0')
    continue;

   if (FUNC_8(&VAR_11) ||
       (!FUNC_8(&VAR_11) &&
        !FUNC_5(&VAR_11, VAR_10.array))) {
    FUNC_3(&VAR_11, &VAR_10);
    FUNC_2(&VAR_11, " ");
    VAR_6 += FUNC_0(VAR_13);
   }
  }

  if (*VAR_7 == '\n' && VAR_4 != VAR_5) {
   VAR_5 = VAR_4;
  }
 }

 if (VAR_6 == 0)
  VAR_3 = VAR_2;
 else
  VAR_3 = VAR_6;

 FUNC_10(VAR_9);
 FUNC_6(&VAR_11);
 FUNC_6(&VAR_10);
 FUNC_12(VAR_7);
}
