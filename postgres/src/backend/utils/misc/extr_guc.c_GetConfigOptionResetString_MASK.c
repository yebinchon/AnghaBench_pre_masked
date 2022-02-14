
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_string {char const* reset_val; } ;
struct config_real {int reset_val; } ;
struct config_int {int reset_val; } ;
struct config_generic {int flags; int vartype; } ;
struct config_enum {int reset_val; } ;
struct config_bool {int reset_val; } ;
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
FUNC_8(const char *VAR_5)
{
 struct config_generic *VAR_6;
 static char VAR_7[256];

 VAR_6 = FUNC_5(VAR_5, 0, VAR_3);
 if (VAR_6 == ((void*)0))
  FUNC_2(VAR_3,
    (FUNC_3(VAR_2),
     FUNC_4("unrecognized configuration parameter \"%s\"", VAR_5)));
 if ((VAR_6->flags & VAR_4) &&
  !FUNC_6(FUNC_0(), VAR_0))
  FUNC_2(VAR_3,
    (FUNC_3(VAR_1),
     FUNC_4("must be superuser or a member of pg_read_all_settings to examine \"%s\"",
      VAR_5)));

 switch (VAR_6->vartype)
 {
  case 132:
   return ((struct config_bool *) VAR_6)->reset_val ? "on" : "off";

  case 130:
   FUNC_7(VAR_7, sizeof(VAR_7), "%d",
      ((struct config_int *) VAR_6)->reset_val);
   return VAR_7;

  case 129:
   FUNC_7(VAR_7, sizeof(VAR_7), "%g",
      ((struct config_real *) VAR_6)->reset_val);
   return VAR_7;

  case 128:
   return ((struct config_string *) VAR_6)->reset_val;

  case 131:
   return FUNC_1((struct config_enum *) VAR_6,
              ((struct config_enum *) VAR_6)->reset_val);
 }
 return ((void*)0);
}
