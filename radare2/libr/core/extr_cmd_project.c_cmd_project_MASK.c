
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef char ut8 ;
struct TYPE_13__ {int config; } ;
typedef TYPE_1__ RCore ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_4 (char const*,int) ;
 char* FUNC_5 (char*,int) ;
 char* FUNC_6 (int ,char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,char*,char const*) ;
 int FUNC_10 (TYPE_1__*,char const*) ;
 int FUNC_11 (TYPE_1__*,char const*) ;
 int FUNC_12 (TYPE_1__*,char const*) ;
 char* FUNC_13 (TYPE_1__*,char const*) ;
 int FUNC_14 (TYPE_1__*,char const) ;
 char* FUNC_15 (TYPE_1__*,char const*) ;
 int FUNC_16 (TYPE_1__*,char const*,int) ;
 int FUNC_17 (TYPE_1__*,char const*) ;
 int FUNC_18 (TYPE_1__*,char const*,int ) ;
 int FUNC_19 (char*,char const*,int ,int) ;
 char* FUNC_20 (char*,int*) ;
 int * FUNC_21 (char*,char*) ;
 char* FUNC_22 (char*,char const*) ;
 int FUNC_23 (char*,char const*,char*) ;
 void* FUNC_24 (char const*,char) ;
 char* FUNC_25 (char const*) ;
 int FUNC_26 (char const*) ;
 int FUNC_27 (char*,char const*) ;

__attribute__((used)) static int FUNC_28(void *VAR_3, const char *VAR_4) {
 RCore *VAR_5 = (RCore *) VAR_3;
 const char *VAR_6, *VAR_7;
 const char *VAR_8 = FUNC_6 (VAR_5->config, "prj.name");
 char *VAR_9 = ((void*)0);

 if (!VAR_4) {
  return 0;
 }
 VAR_9 = FUNC_25 (VAR_8);
 VAR_7 = FUNC_24 (VAR_4, ' ');
 if (VAR_7) {
  VAR_7++;
 } else {
  if (*VAR_4) {
   VAR_7 = VAR_4 + 1;
   if (*VAR_7 == '&') {
    VAR_7++;
   }
  }
 }
 VAR_6 = VAR_7;
 switch (VAR_4[0]) {
 case 'c':
  if (VAR_4[1] == ' ') {
   FUNC_10 (VAR_5, VAR_4 + 2);
  } else {
   FUNC_0 ("Usage: Pc [prjname]\n");
  }
  break;
 case 'o':

  if (VAR_4[1] == '&') {
   FUNC_9 (VAR_5, "& Po %s", VAR_6);
  } else if (VAR_4[1]) {
   FUNC_16 (VAR_5, VAR_6, 0);
  } else {
   if (VAR_6 && *VAR_6) {
    FUNC_7 (VAR_6);
   }
  }
  break;
 case 'd':
 case '-':
  FUNC_11 (VAR_5, VAR_6);
  break;
 case 's':
  if (!VAR_6 || !VAR_6[0]) {
   VAR_6 = VAR_9;
  }
  if (FUNC_17 (VAR_5, VAR_6)) {
   FUNC_7 (VAR_6);
  }
  break;
 case 'S':
  if (VAR_4[1] == ' ') {
   FUNC_18 (VAR_5, VAR_4 + 2, VAR_0);
  } else {
   FUNC_0 ("Usage: PS [file]\n");
  }
  break;
 case 'n':
  if (VAR_4[1] == '?') {
   FUNC_8 (VAR_5, VAR_2);
  } else if (!VAR_8 || !*VAR_8) {
   FUNC_0 ("No project\n");
  } else {
   switch (VAR_4[1]) {
   case '-':

   {
    FILE *VAR_10 = FUNC_21 (VAR_9, "w");
    if (!VAR_10) {
     FUNC_0 ("Cannot open %s\n", VAR_9);
    } else {
     char *VAR_11 = FUNC_15 (VAR_5, VAR_8);
     char *VAR_12 = FUNC_20 (VAR_11, ((void*)0));
     int VAR_13 = 0;
     if (VAR_12) {
      char *VAR_14, *VAR_15;
      for (VAR_14 = VAR_12; VAR_14; VAR_14 = VAR_15) {
       VAR_15 = FUNC_24 (VAR_14, '\n');
       if (VAR_15) {
        *VAR_15++ = 0;
        if (FUNC_27 (VAR_14, VAR_4 + 2)) {
         VAR_13++;
        } else {
         FUNC_2 (VAR_10, "%s\n", VAR_14);
        }
       }
      }
      FUNC_3 (VAR_12);
     }
     if (VAR_13 > 0) {
      FUNC_0 ("Deleted %d lines\n", VAR_13);
     }
     FUNC_3 (VAR_11);
     FUNC_1 (VAR_10);
    }
   }
   break;
   case ' ':
    if (VAR_4[2] == '-') {
     char *VAR_16 = FUNC_15 (VAR_5, VAR_8);

     const char *VAR_17 = FUNC_6 (VAR_5->config, "cfg.editor");
     if (VAR_16 && *VAR_16 && VAR_17 && *VAR_17) {
      FUNC_23 ("%s %s", VAR_17, VAR_16);
     } else {
      FUNC_0 ("No cfg.editor configured\n");
     }
     FUNC_3 (VAR_16);
    } else {


     char *VAR_18 = FUNC_15 (VAR_5, VAR_8);
     char *VAR_19 = FUNC_20 (VAR_18, ((void*)0));
     FILE *VAR_20 = FUNC_21 (VAR_18, "a");
     if (VAR_20) {
      FUNC_2 (VAR_20, "%s\n", VAR_4 + 2);
      FUNC_1 (VAR_20);
     }
     FUNC_3 (VAR_18);
     FUNC_3 (VAR_19);
    }
    break;
   case '+':
    {
     char *VAR_21 = FUNC_15 (VAR_5, VAR_8);
     char *VAR_22 = FUNC_20 (VAR_21, ((void*)0));
     VAR_22 = FUNC_22 (VAR_22, VAR_4 + 2);
     VAR_22 = FUNC_22 (VAR_22, "\n");
     FUNC_19 (VAR_21, (const ut8*)VAR_22, FUNC_26 (VAR_22), 0);
     FUNC_3 (VAR_22);
     FUNC_3 (VAR_21);
    }
    break;
   case 'j':
    if (!VAR_4[2]) {
     int VAR_23 = 0;

     char *VAR_24 = FUNC_15 (VAR_5, VAR_8);
     if (VAR_24) {
      char *VAR_25 = FUNC_20 (VAR_24, &VAR_23);
      char *VAR_26 = FUNC_5 (VAR_25, VAR_23);
      if (VAR_26) {
       FUNC_7 (VAR_26);
       FUNC_3 (VAR_26);
      }
      FUNC_3 (VAR_25);
      FUNC_3 (VAR_24);
     }
    } else if (VAR_4[2] == ' ') {

     ut8 *VAR_27 = FUNC_4 (VAR_4 + 3, -1);
     if (VAR_27) {
      char *VAR_28 = FUNC_15 (VAR_5, VAR_8);
      if (VAR_28) {
       FUNC_19 (VAR_28, VAR_27, FUNC_26 ((const char *) VAR_27), 0);
       FUNC_3 (VAR_28);
      }
      FUNC_3 (VAR_27);
     }
    } else {
     FUNC_0 ("Usage: `Pnj` or `Pnj ...`\n");
    }
    break;
   case 'x':
    FUNC_12 (VAR_5, VAR_8);
    break;
   case 0:
   {
    char *VAR_29 = FUNC_15 (VAR_5, VAR_8);
    char *VAR_30 = FUNC_20 (VAR_29, ((void*)0));
    if (VAR_30) {
     FUNC_7 (VAR_30);
     FUNC_3 (VAR_30);
    }
    FUNC_3 (VAR_29);
   }
   break;
   }
  }
  break;
 case 'i':
  if (VAR_6 && *VAR_6) {
   char *VAR_31 = FUNC_13 (VAR_5, VAR_6);
   FUNC_7 (VAR_31);
   FUNC_3 (VAR_31);
  }
  break;
 case 0:
 case 'j':
  FUNC_14 (VAR_5, VAR_4[0]);
  break;
 default:
  FUNC_8 (VAR_5, VAR_1);
  break;
 }
 FUNC_3 (VAR_9);
 return 1;
}
