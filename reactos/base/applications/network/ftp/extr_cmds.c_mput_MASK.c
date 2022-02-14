
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jmp_buf ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int VAR_2 ;
 char const* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *) ;
 char** FUNC_7 (char const*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char const) ;
 scalar_t__ FUNC_9 (char) ;
 int * VAR_6 ;
 int FUNC_10 () ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 char** VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 char const* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_11 (char*,...) ;
 scalar_t__ VAR_14 ;
 char* FUNC_12 (char const**,int ) ;
 int FUNC_13 (char*,char const*,char const*,int) ;
 int FUNC_14 (int ) ;
 int VAR_15 ;
 int FUNC_15 (int *,char*) ;
 size_t FUNC_16 (int *) ;
 scalar_t__ VAR_16 ;

void FUNC_17(int VAR_17, const char *VAR_18[])
{
 register int VAR_19;
 int VAR_20;
 extern jmp_buf VAR_21;
 const char *VAR_22;

 if (VAR_17 < 2) {
  (void) FUNC_15(VAR_6, " ");
  FUNC_11("(local-files) ");
  (void) FUNC_4(VAR_15);
  (void) FUNC_6(&VAR_6[FUNC_16(VAR_6)]);
  FUNC_10();
  VAR_17 = VAR_8;
  VAR_18 = VAR_9;
 }
 if (VAR_17 < 2) {
  FUNC_11("usage:%s local-files\n", VAR_18[0]);
  (void) FUNC_4(VAR_15);
  VAR_1 = -1;
  return;
 }
 VAR_12 = VAR_18[0];
 VAR_11 = 1;

 (void) FUNC_14(VAR_21);
 if (VAR_14) {
  const char *VAR_23;
  char *VAR_24, VAR_25[VAR_0];

  while ((VAR_23 = FUNC_12(VAR_18,0)) != ((void*)0)) {
   if (*VAR_23 == 0) {
    VAR_11 = 0;
    continue;
   }
   if (VAR_11 && FUNC_1(VAR_18[0], VAR_23)) {
    VAR_22 = VAR_23;
    if (VAR_10) {
     while (*VAR_22 && !FUNC_8(*VAR_22)) {
      VAR_22++;
     }
     if (!*VAR_22) {
      VAR_22 = VAR_23;
      VAR_24 = VAR_25;
      while ((*VAR_24 = *VAR_22)) {
           if (FUNC_9(*VAR_24)) {
              *VAR_24 = 'a' + *VAR_24 - 'A';
           }
           VAR_22++;
           VAR_24++;
      }
     }
     VAR_22 = VAR_25;
    }
    if (VAR_13) {
     VAR_22 = FUNC_3(VAR_22);
    }
    if (VAR_7) {
     VAR_22 = FUNC_2(VAR_22);
    }
    FUNC_13((VAR_16) ? "STOU" : "STOR",
        VAR_23, VAR_22, VAR_23 != VAR_22 || !VAR_5);
    if (!VAR_11 && VAR_3) {
     VAR_20 = VAR_5;
     VAR_5 = 1;
     if (FUNC_1("Continue with","mput")) {
      VAR_11++;
     }
     VAR_5 = VAR_20;
    }
   }
  }

  VAR_11 = 0;
  return;
 }
 for (VAR_19 = 1; VAR_19 < VAR_17; VAR_19++) {
  register char **VAR_26, **VAR_27;

  if (!VAR_2) {
   if (VAR_11 && FUNC_1(VAR_18[0], VAR_18[VAR_19])) {
    VAR_22 = (VAR_13) ? FUNC_3(VAR_18[VAR_19]) : VAR_18[VAR_19];
    VAR_22 = (VAR_7) ? FUNC_2(VAR_22) : VAR_22;
    FUNC_13((VAR_16) ? "STOU" : "STOR",
        VAR_18[VAR_19], VAR_22, VAR_22 != VAR_18[VAR_19] || !VAR_5);
    if (!VAR_11 && VAR_3) {
     VAR_20 = VAR_5;
     VAR_5 = 1;
     if (FUNC_1("Continue with","mput")) {
      VAR_11++;
     }
     VAR_5 = VAR_20;
    }
   }
   continue;
  }
  VAR_27 = FUNC_7(VAR_18[VAR_19]);
  if (VAR_4 != ((void*)0)) {
   FUNC_11("%s\n", VAR_4);
   (void) FUNC_4(VAR_15);
   if (VAR_27) {
    FUNC_0(VAR_27);
    FUNC_5((char *)VAR_27);
   }
   continue;
  }
  for (VAR_26 = VAR_27; VAR_26 && *VAR_26 != ((void*)0); VAR_26++) {
   if (VAR_11 && FUNC_1(VAR_18[0], *VAR_26)) {
    VAR_22 = (VAR_13) ? FUNC_3(*VAR_26) : *VAR_26;
    VAR_22 = (VAR_7) ? FUNC_2(VAR_22) : VAR_22;
    FUNC_13((VAR_16) ? "STOU" : "STOR",
        *VAR_26, VAR_22, *VAR_26 != VAR_22 || !VAR_5);
    if (!VAR_11 && VAR_3) {
     VAR_20 = VAR_5;
     VAR_5 = 1;
     if (FUNC_1("Continue with","mput")) {
      VAR_11++;
     }
     VAR_5 = VAR_20;
    }
   }
  }
  if (VAR_27 != ((void*)0)) {
   FUNC_0(VAR_27);
   FUNC_5((char *)VAR_27);
  }
 }

 VAR_11 = 0;
}
