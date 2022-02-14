
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jmp_buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (char const) ;
 scalar_t__ FUNC_6 (char) ;
 int * VAR_4 ;
 int FUNC_7 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char** VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 char const* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (char*,...) ;
 int VAR_12 ;
 int FUNC_9 (char*,char const*,char const*,char*,int) ;
 char* FUNC_10 (char const**,int ) ;
 int FUNC_11 (int ) ;
 int VAR_13 ;
 int FUNC_12 (int *,char*) ;
 size_t FUNC_13 (int *) ;

void FUNC_14(int VAR_14, const char *VAR_15[])
{
 const char *VAR_16, *VAR_17;
    char *VAR_18, VAR_19[VAR_0];
 int VAR_20;
 extern jmp_buf VAR_21;

 if (VAR_14 < 2) {
  (void) FUNC_12(VAR_4, " ");
  FUNC_8("(remote-files) ");
  (void) FUNC_3(VAR_13);
  (void) FUNC_4(&VAR_4[FUNC_13(VAR_4)]);
  FUNC_7();
  VAR_14 = VAR_6;
  VAR_15 = VAR_7;
 }
 if (VAR_14 < 2) {
  FUNC_8("usage:%s remote-files\n", VAR_15[0]);
  (void) FUNC_3(VAR_13);
  VAR_1 = -1;
  return;
 }
 VAR_10 = VAR_15[0];
 VAR_9 = 1;

 (void) FUNC_11(VAR_21);
 while ((VAR_16 = FUNC_10(VAR_15,VAR_12)) != ((void*)0)) {
  if (*VAR_16 == '\0') {
   VAR_9 = 0;
   continue;
  }
  if (VAR_9 && FUNC_0(VAR_15[0], VAR_16)) {
   VAR_17 = VAR_16;
   if (VAR_8) {
    while (*VAR_17 && !FUNC_5(*VAR_17)) {
     VAR_17++;
    }
    if (!*VAR_17) {
     VAR_17 = VAR_16;
     VAR_18 = VAR_19;
     while ((*VAR_18 = *VAR_17)) {
      if (FUNC_6(*VAR_18)) {
       *VAR_18 = 'a' + *VAR_18 - 'A';
      }
      VAR_17++;
      VAR_18++;
     }
    }
    VAR_17 = VAR_19;
   }
   if (VAR_11) {
    VAR_17 = FUNC_2(VAR_17);
   }
   if (VAR_5) {
    VAR_17 = FUNC_1(VAR_17);
   }
   FUNC_9("RETR", VAR_17, VAR_16, "w",
       VAR_17 != VAR_16 || !VAR_3);
   if (!VAR_9 && VAR_2) {
    VAR_20 = VAR_3;
    VAR_3 = 1;
    if (FUNC_0("Continue with","mget")) {
     VAR_9++;
    }
    VAR_3 = VAR_20;
   }
  }
 }

 VAR_9 = 0;
}
