
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_string {char const** variable; } ;
struct config_real {int* variable; } ;
struct config_int {int* variable; } ;
struct config_generic {int flags; int vartype; } ;
struct config_enum {int * variable; } ;
struct config_bool {int * variable; } ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;





 char const* FUNC_1 (struct config_enum*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;
 struct config_generic* FUNC_5 (char const*,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int,char*,int) ;

const char *
FUNC_8(const char *VAR_5, bool VAR_6, bool VAR_7)
{
 struct config_generic *VAR_8;
 static char VAR_9[256];

 VAR_8 = FUNC_5(VAR_5, 0, VAR_3);
 if (VAR_8 == ((void*)0))
 {
  if (VAR_6)
   return ((void*)0);
  FUNC_2(VAR_3,
    (FUNC_3(VAR_2),
     FUNC_4("unrecognized configuration parameter \"%s\"",
      VAR_5)));
 }
 if (VAR_7 &&
  (VAR_8->flags & VAR_4) &&
  !FUNC_6(FUNC_0(), VAR_0))
  FUNC_2(VAR_3,
    (FUNC_3(VAR_1),
     FUNC_4("must be superuser or a member of pg_read_all_settings to examine \"%s\"",
      VAR_5)));

 switch (VAR_8->vartype)
 {
  case 132:
   return *((struct config_bool *) VAR_8)->variable ? "on" : "off";

  case 130:
   FUNC_7(VAR_9, sizeof(VAR_9), "%d",
      *((struct config_int *) VAR_8)->variable);
   return VAR_9;

  case 129:
   FUNC_7(VAR_9, sizeof(VAR_9), "%g",
      *((struct config_real *) VAR_8)->variable);
   return VAR_9;

  case 128:
   return *((struct config_string *) VAR_8)->variable;

  case 131:
   return FUNC_1((struct config_enum *) VAR_8,
              *((struct config_enum *) VAR_8)->variable);
 }
 return ((void*)0);
}
