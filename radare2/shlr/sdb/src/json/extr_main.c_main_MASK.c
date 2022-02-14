
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int Rangstr ;


 char* FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;
 int VAR_0 ;

int FUNC_10(int VAR_1, char **VAR_2) {
 Rangstr VAR_3;
 char VAR_4[4096];
 int VAR_5 = FUNC_1 (VAR_4, 1, sizeof (VAR_4), VAR_0);
 VAR_4[VAR_5] = 0;


 char *VAR_6 = VAR_2[1];


 FUNC_6 (">>>> %s <<<<\n", FUNC_9 (VAR_4));
 FUNC_6 (">>>> %s <<<<\n", FUNC_8 (VAR_4, "  "));

 VAR_6 = "glossary.title";
 char *VAR_7 = FUNC_0 (VAR_4, VAR_6, "patata");
 if (VAR_7) {
  FUNC_6 ("%s\n", VAR_7);
  FUNC_2 (VAR_7);
 } else FUNC_6 ("set failed\n");
 VAR_6 = VAR_2[1];
 VAR_3 = FUNC_3 (VAR_4, VAR_6);
 FUNC_6 ("-- output --\n");
 FUNC_7(&VAR_3);
 FUNC_6 ("\n");
 return 0;
}
