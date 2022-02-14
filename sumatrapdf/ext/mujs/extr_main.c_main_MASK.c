
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,char*,int) ;
 int * FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int,int ) ;
 int FUNC_14 (char) ;
 char* FUNC_15 () ;
 char* FUNC_16 (int ) ;
 char* VAR_11 ;
 int FUNC_17 (char,int ) ;
 int VAR_12 ;
 char* VAR_13 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (int,char**,char*) ;
 int VAR_14 ;

int
FUNC_21(int VAR_15, char **VAR_16)
{
 char *VAR_17;
 js_State *VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22, VAR_23;

 while ((VAR_23 = FUNC_20(VAR_15, VAR_16, "is")) != -1) {
  switch (VAR_23) {
  default: FUNC_18(); break;
  case 'i': VAR_21 = 1; break;
  case 's': VAR_20 = 1; break;
  }
 }

 VAR_18 = FUNC_10(((void*)0), ((void*)0), VAR_20 ? VAR_0 : 0);

 FUNC_9(VAR_18, VAR_3, "gc", 0);
 FUNC_12(VAR_18, "gc");

 FUNC_9(VAR_18, VAR_4, "load", 1);
 FUNC_12(VAR_18, "load");

 FUNC_9(VAR_18, VAR_2, "compile", 2);
 FUNC_12(VAR_18, "compile");

 FUNC_9(VAR_18, VAR_5, "print", 0);
 FUNC_12(VAR_18, "print");

 FUNC_9(VAR_18, VAR_10, "write", 0);
 FUNC_12(VAR_18, "write");

 FUNC_9(VAR_18, VAR_7, "read", 1);
 FUNC_12(VAR_18, "read");

 FUNC_9(VAR_18, VAR_8, "readline", 0);
 FUNC_12(VAR_18, "readline");

 FUNC_9(VAR_18, VAR_9, "repr", 0);
 FUNC_12(VAR_18, "repr");

 FUNC_9(VAR_18, VAR_6, "quit", 1);
 FUNC_12(VAR_18, "quit");

 FUNC_5(VAR_18, VAR_11);
 FUNC_5(VAR_18, VAR_13);

 if (VAR_14 == VAR_15) {
  VAR_21 = 1;
 } else {
  VAR_23 = VAR_14++;

  FUNC_8(VAR_18);
  VAR_22 = 0;
  while (VAR_14 < VAR_15) {
   FUNC_11(VAR_18, VAR_16[VAR_14++]);
   FUNC_13(VAR_18, -2, VAR_22++);
  }
  FUNC_12(VAR_18, "scriptArgs");

  if (FUNC_4(VAR_18, VAR_16[VAR_23]))
   VAR_19 = 1;
 }

 if (VAR_21) {
  if (FUNC_3(0)) {
   FUNC_19();
   FUNC_17('\t', VAR_12);
   VAR_17 = FUNC_16(VAR_1);
   while (VAR_17) {
    FUNC_1(VAR_18, VAR_17);
    if (*VAR_17)
     FUNC_0(VAR_17);
    FUNC_2(VAR_17);
    VAR_17 = FUNC_16(VAR_1);
   }
   FUNC_14('\n');
  } else {
   VAR_17 = FUNC_15();
   if (!VAR_17 || !FUNC_5(VAR_18, VAR_17))
    VAR_19 = 1;
   FUNC_2(VAR_17);
  }
 }

 FUNC_7(VAR_18, 0);
 FUNC_6(VAR_18);

 return VAR_19;
}
