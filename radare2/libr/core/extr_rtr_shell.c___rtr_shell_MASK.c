
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int prompt2 ;
typedef int prompt ;
struct TYPE_4__ {char* member_0; char* member_1; char* member_2; } ;
typedef TYPE_1__ TextLog ;
typedef int RSocket ;
typedef int RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (char*,int *,int*) ;
 char* FUNC_9 (char*,...) ;
 char* FUNC_10 (char const*) ;
 int FUNC_11 (int *,TYPE_1__) ;
 int FUNC_12 (int *,TYPE_1__,char const*) ;
 int FUNC_13 (char*,int,char*,char*,char*,...) ;
 int FUNC_14 (char const*,char*) ;
 int FUNC_15 (char const*) ;
 char* FUNC_16 (char const*,char*) ;

__attribute__((used)) static void FUNC_17(RCore *VAR_0, int VAR_1) {
 char *VAR_2 = "http";
 char *VAR_3 = "";
 char *VAR_4= "";
 char *VAR_5= "";
 char VAR_6[64], VAR_7[64], *VAR_8, *VAR_9;
 int VAR_10;
 const char* VAR_11;
 RSocket *VAR_12 = ((void*)0);

 TextLog VAR_13 = { VAR_3, VAR_4, VAR_5 };
 FUNC_13 (VAR_6, sizeof (VAR_6), "[%s://%s:%s/%s]> ",
   VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_13 (VAR_7, sizeof (VAR_7), "[%s:%s]$ ", VAR_3, VAR_4);
 for (;;) {
  FUNC_6 (VAR_6);
  VAR_11 = FUNC_5 ();
  if (!VAR_11 || !*VAR_11) {
   break;
  }
  if (*VAR_11 == 'q') {
   break;
  }
  if (!FUNC_14 (VAR_11, "!sh")) {
   for (;;) {
    FUNC_6 (VAR_7);
    VAR_11 = FUNC_5 ();
    if (!VAR_11 || !*VAR_11 || !FUNC_14 (VAR_11, "exit")) {
     break;
    }
    VAR_9 = FUNC_10 (VAR_11);
    char *VAR_14 = FUNC_9 ("http://%s:%s/%s!%s", VAR_3, VAR_4, VAR_5, VAR_11);
    VAR_8 = FUNC_8 (VAR_14, ((void*)0), &VAR_10);
    if (VAR_8) {
     VAR_8[VAR_10] = 0;
     VAR_11 = FUNC_16 (VAR_8, "\n\n");
     if (VAR_11) {
      VAR_11 = FUNC_16 (VAR_11 + 1, "\n\n");
     }
     VAR_11 = VAR_11? VAR_11 + 2: VAR_8;
     const char *VAR_15 = (VAR_11[FUNC_15 (VAR_11) - 1] == '\n')? "": "\n";
     FUNC_1 ("%s%s", VAR_11, VAR_15);
     FUNC_4 (VAR_8);
     FUNC_0 (VAR_8);
    }
    FUNC_0 (VAR_9);
    FUNC_0 (VAR_14);
   }
  } else if (VAR_11[0]=='v' || VAR_11[0] == 'V') {
   if (VAR_11[1]==' ') {
    FUNC_12 (VAR_0, VAR_13, VAR_11 + 1);
   } else {
    FUNC_12 (VAR_0, VAR_13, ((void*)0));
   }
  } else if (!FUNC_14 (VAR_11, "TT")) {
   FUNC_11 (VAR_0, VAR_13);
  } else {
   char *VAR_16 = FUNC_9 ("%d %s", VAR_1, VAR_11);
   FUNC_3 (VAR_0, VAR_16);
   FUNC_2 ();
   FUNC_4 (VAR_11);
  }
 }
 FUNC_7 (VAR_12);
}
