
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct option {char* member_0; float member_3; int member_2; int const member_1; } ;
struct TYPE_6__ {int (* print_gvars ) (TYPE_1__*,int ,char) ;int (* print_types ) (TYPE_1__*,int ) ;int (* pdb_parse ) (TYPE_1__*) ;int file_name; } ;
typedef TYPE_1__ R_PDB ;


 int FUNC_0 (int,char**,char*,struct option*,int*) ;
 int FUNC_1 (TYPE_1__*) ;

 char* VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,char) ;

int FUNC_8(int VAR_1, char **VAR_2) {
 R_PDB VAR_3;

 static struct option VAR_4[] =
 {
  {"pdb_file", 128, 0, 'f'},
  {"print_types", 129, 0, 't'},
  {"print_globals", 128, 0, 'g'},
  {"help", 129, 0, 'h'},
  {0, 0, 0, 0}
 };

 int VAR_5 = 0;
 int VAR_6 = 0;
 char *VAR_7 = 0;

 while(1) {
  VAR_6 = FUNC_0 (VAR_1, VAR_2, ":f:tg:h",
       VAR_4, &VAR_5);

  if (VAR_6 == -1)
   break;

  switch (VAR_6) {
  case 'f':
   VAR_7 = VAR_0;
   FUNC_4 (&VAR_3.file_name, VAR_0);
   if (!FUNC_1(&VAR_3)) {
    FUNC_3("initialization error of pdb parser\n");
    return 0;
   }
   VAR_3.pdb_parse(&VAR_3);
   break;
  case 't':
   VAR_3.print_types(&VAR_3, 0);
   break;
  case 'g':
   VAR_3.print_gvars(&VAR_3, 0, 'r');
   break;
  default:
   FUNC_2();
   return 0;
  }
 }

 return 0;
}
