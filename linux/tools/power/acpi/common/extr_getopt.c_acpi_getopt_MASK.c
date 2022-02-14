
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

int FUNC_3(int VAR_5, char **VAR_6, char *VAR_7)
{
 int VAR_8;
 char *VAR_9;

 if (VAR_4 == 1) {
  if (VAR_2 >= VAR_5 ||
      VAR_6[VAR_2][0] != '-' ||
      VAR_6[VAR_2][1] == '\0') {
   return (VAR_0);
  } else if (FUNC_2(VAR_6[VAR_2], "--") == 0) {
   VAR_2++;
   return (VAR_0);
  }
 }



 VAR_8 = VAR_6[VAR_2][VAR_4];



 if (VAR_8 == ':' ||
     (VAR_9 = FUNC_1(VAR_7, VAR_8)) == ((void*)0)) {
  FUNC_0("Illegal option: -", VAR_8);

  if (VAR_6[VAR_2][++VAR_4] == '\0') {
   VAR_2++;
   VAR_4 = 1;
  }

  return ('?');
 }



 if (*++VAR_9 == ':') {
  if (VAR_6[VAR_2][(int)(VAR_4 + 1)] != '\0') {
   VAR_1 =
       &VAR_6[VAR_2++][(int)
           (VAR_4 + 1)];
  } else if (++VAR_2 >= VAR_5) {
   FUNC_0("Option requires an argument: -",
       VAR_8);

   VAR_4 = 1;
   return ('?');
  } else {
   VAR_1 = VAR_6[VAR_2++];
  }

  VAR_4 = 1;
 }



 else if (*VAR_9 == '+') {
  if (VAR_6[VAR_2][(int)(VAR_4 + 1)] != '\0') {
   VAR_1 =
       &VAR_6[VAR_2++][(int)
           (VAR_4 + 1)];
  } else if (++VAR_2 >= VAR_5) {
   VAR_1 = ((void*)0);
  } else {
   VAR_1 = VAR_6[VAR_2++];
  }

  VAR_4 = 1;
 }



 else if (*VAR_9 == '^') {
  if (VAR_6[VAR_2][(int)(VAR_4 + 1)] != '\0') {
   VAR_1 =
       &VAR_6[VAR_2][(int)(VAR_4 + 1)];
  } else {
   VAR_1 = "^";
  }

  VAR_3 = VAR_1[0];
  VAR_2++;
  VAR_4 = 1;
 }



 else if (*VAR_9 == '|') {
  if (VAR_6[VAR_2][(int)(VAR_4 + 1)] != '\0') {
   VAR_1 =
       &VAR_6[VAR_2][(int)(VAR_4 + 1)];
  } else {
   FUNC_0
       ("Option requires a single-character suboption: -",
        VAR_8);

   VAR_4 = 1;
   return ('?');
  }

  VAR_3 = VAR_1[0];
  VAR_2++;
  VAR_4 = 1;
 }



 else {
  if (VAR_6[VAR_2][++VAR_4] == '\0') {
   VAR_4 = 1;
   VAR_2++;
  }

  VAR_1 = ((void*)0);
 }

 return (VAR_8);
}
