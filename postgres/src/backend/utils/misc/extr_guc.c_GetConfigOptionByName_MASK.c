
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int flags; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 char* FUNC_1 (struct config_generic*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;
 struct config_generic* FUNC_5 (char const*,int,int ) ;
 int FUNC_6 (int ,int ) ;

char *
FUNC_7(const char *VAR_5, const char **VAR_6, bool VAR_7)
{
 struct config_generic *VAR_8;

 VAR_8 = FUNC_5(VAR_5, 0, VAR_3);
 if (VAR_8 == ((void*)0))
 {
  if (VAR_7)
  {
   if (VAR_6)
    *VAR_6 = ((void*)0);
   return ((void*)0);
  }

  FUNC_2(VAR_3,
    (FUNC_3(VAR_2),
     FUNC_4("unrecognized configuration parameter \"%s\"", VAR_5)));
 }

 if ((VAR_8->flags & VAR_4) &&
  !FUNC_6(FUNC_0(), VAR_0))
  FUNC_2(VAR_3,
    (FUNC_3(VAR_1),
     FUNC_4("must be superuser or a member of pg_read_all_settings to examine \"%s\"",
      VAR_5)));

 if (VAR_6)
  *VAR_6 = VAR_8->name;

 return FUNC_1(VAR_8, 1);
}
