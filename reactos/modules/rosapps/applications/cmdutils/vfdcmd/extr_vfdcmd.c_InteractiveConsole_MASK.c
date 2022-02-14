
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input ;
typedef int args ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char const**) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char**,int) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int ) ;
 char* FUNC_14 (char*,int,int ) ;
 char* VAR_7 ;
 scalar_t__ FUNC_15 (char) ;
 int FUNC_16 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char) ;

int FUNC_20()
{
 char VAR_10[1024];

 int VAR_11;
 char *VAR_12[10];

 char VAR_13;
 char *VAR_14;



 FUNC_5(((void*)0), VAR_4);



 FUNC_6(VAR_6);



 FUNC_9(((void*)0));

 FUNC_3(VAR_3);



 VAR_7 = "";



 for (;;) {



  FUNC_16("[VFD] ");
  FUNC_13(VAR_9);



  FUNC_13(VAR_8);
  VAR_14 = FUNC_14(VAR_10, sizeof(VAR_10), VAR_8);

  if (VAR_14 == ((void*)0)) {



   FUNC_16("exit\n");
   break;
  }



  while (*VAR_14 == ' ' || *VAR_14 == '\t' || *VAR_14 == '\n') {
   VAR_14++;
  }

  if (*VAR_14 == '\0') {



   continue;
  }



  if (!FUNC_12(VAR_14, "dir", 3) ||
   !FUNC_12(VAR_14, "attrib", 6)) {




   FUNC_18(VAR_14);
   FUNC_16("\n");
   continue;
  }
  else if (*VAR_14 == '.') {



   FUNC_18(VAR_14 + 1);
   FUNC_16("\n");
   continue;
  }



  VAR_11 = 0;
  FUNC_10(VAR_12, sizeof(VAR_12));

  do {


   VAR_12[VAR_11++] = VAR_14;



   if (*VAR_14 == '\"' || *VAR_14 == '\'') {
    VAR_13 = *(VAR_14++);
   }
   else {
    VAR_13 = ' ';
   }



   while (*VAR_14 && *VAR_14 != '\n') {
    if (VAR_13 == ' ') {
     if (*VAR_14 == '\t' || *VAR_14 == ' ') {
      break;
     }
    }
    else {
     if (*VAR_14 == VAR_13) {
      VAR_13 = ' ';
     }
    }
    VAR_14++;
   }



   if (*VAR_14) {
    *(VAR_14++) = '\0';
   }



   while (*VAR_14 == ' ' || *VAR_14 == '\t' || *VAR_14 == '\n') {
    VAR_14++;
   }

   if (*VAR_14 == '\0') {



    break;
   }
  }
  while (VAR_11 < sizeof(VAR_12) / sizeof(VAR_12[0]));



  if (!FUNC_11(VAR_12[0], "exit") ||
   !FUNC_11(VAR_12[0], "quit") ||
   !FUNC_11(VAR_12[0], "bye")) {



   break;
  }
  else if (!FUNC_11(VAR_12[0], "cd") ||
   !FUNC_11(VAR_12[0], "chdir")) {



   if (VAR_12[1]) {
    char VAR_15[VAR_2];
    int VAR_16;



    if (FUNC_11(VAR_12[1], "/d")) {
     VAR_16 = 1;
    }
    else {
     VAR_16 = 2;
    }

    VAR_14 = VAR_12[VAR_16];

    if (*VAR_14 == '\"' || *VAR_14 == '\'') {



     VAR_14++;

     while (*VAR_14 && *VAR_14 != *VAR_12[VAR_16]) {
      VAR_14++;
     }

     VAR_12[VAR_16]++;
     *VAR_14 = '\0';
    }
    else {




     while (VAR_16 < VAR_11 - 1) {
      *(VAR_12[VAR_16] + FUNC_17(VAR_12[VAR_16])) = ' ';
      VAR_16++;
     }
    }



    FUNC_0(VAR_14, VAR_15);

    if (!FUNC_7(VAR_15)) {
     DWORD VAR_17 = FUNC_2();

     if (VAR_17 == VAR_0) {
      VAR_17 = VAR_1;
     }

     FUNC_16("%s", FUNC_8(VAR_17));
    }
   }
   else {
    if (!FUNC_1(sizeof(VAR_10), VAR_10)) {
     FUNC_16("%s", FUNC_8(FUNC_2()));
    }
    else {
     FUNC_16("%s\n", VAR_10);
    }
   }
  }
  else if (FUNC_15(*VAR_12[0]) &&
   *(VAR_12[0] + 1) == ':' &&
   *(VAR_12[0] + 2) == '\0') {



   *VAR_12[0] = (char)FUNC_19(*VAR_12[0]);
   *(VAR_12[0] + 2) = '\\';
   *(VAR_12[0] + 3) = '\0';

   if (!FUNC_7(VAR_12[0])) {
    FUNC_16("%s", FUNC_8(FUNC_2()));
   }
  }
  else {



   FUNC_4(VAR_11, (const char **)VAR_12);
  }

  FUNC_16("\n");
 }

 return VAR_5;
}
