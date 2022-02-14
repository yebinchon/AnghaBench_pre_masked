
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int,char**,char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (char*,char*,int *,int *,int *,int *) ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_3(int VAR_6, char **VAR_7) {
 int VAR_8;

 while ((VAR_8 = FUNC_1(VAR_6, VAR_7, "i:o:p:v:")) != -1) {
  switch (VAR_8) {
  case 'i':
   VAR_0 = VAR_1;
   break;
  case 'o':
   VAR_2 = VAR_1;
   break;
  case 'p':
   VAR_3 = VAR_1;
   break;
  case 'v':
   if (FUNC_2(VAR_1, "%hu.%hu.%hu.%hu", &VAR_5[0], &VAR_5[1], &VAR_5[2], &VAR_5[3]) != 4)
    FUNC_0(VAR_4, "Version %s doesn't match suppored 4-digits format\n", VAR_1);
   break;
  }
 }
}
