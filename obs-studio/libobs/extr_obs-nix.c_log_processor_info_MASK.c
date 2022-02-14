
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int array; scalar_t__ len; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct dstr*,char*) ;
 int FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct dstr*) ;
 int FUNC_5 (struct dstr*) ;
 int FUNC_6 (struct dstr*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char**,size_t*,int *) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*,char*,int) ;

__attribute__((used)) static void FUNC_13(void)
{
 int VAR_1 = -1;
 int VAR_2 = -1;
 char *VAR_3 = ((void*)0);
 size_t VAR_4 = 0;

 FILE *VAR_5;
 struct dstr VAR_6;
 struct dstr VAR_7;

 VAR_5 = FUNC_8("/proc/cpuinfo", "r");
 if (!VAR_5)
  return;

 FUNC_5(&VAR_6);
 FUNC_5(&VAR_7);

 while (FUNC_10(&VAR_3, &VAR_4, VAR_5) != -1) {
  if (!FUNC_12(VAR_3, "model name", 10)) {
   char *VAR_8 = FUNC_11(VAR_3, ':');
   if (!VAR_8 || *(++VAR_8) == '\0')
    continue;

   FUNC_2(&VAR_6, VAR_8);
   FUNC_6(&VAR_6, VAR_6.len - 1);
   FUNC_3(&VAR_6);
  }

  if (!FUNC_12(VAR_3, "physical id", 11)) {
   char *VAR_9 = FUNC_11(VAR_3, ':');
   if (!VAR_9 || *(++VAR_9) == '\0')
    continue;

   VAR_1 = FUNC_0(VAR_9);
  }

  if (!FUNC_12(VAR_3, "cpu MHz", 7)) {
   char *VAR_10 = FUNC_11(VAR_3, ':');
   if (!VAR_10 || *(++VAR_10) == '\0')
    continue;

   FUNC_2(&VAR_7, VAR_10);
   FUNC_6(&VAR_7, VAR_7.len - 1);
   FUNC_3(&VAR_7);
  }

  if (*VAR_3 == '\n' && VAR_1 != VAR_2) {
   VAR_2 = VAR_1;
   FUNC_1(VAR_0, "CPU Name: %s", VAR_6.array);
   FUNC_1(VAR_0, "CPU Speed: %sMHz", VAR_7.array);
  }
 }

 FUNC_7(VAR_5);
 FUNC_4(&VAR_6);
 FUNC_4(&VAR_7);
 FUNC_9(VAR_3);
}
