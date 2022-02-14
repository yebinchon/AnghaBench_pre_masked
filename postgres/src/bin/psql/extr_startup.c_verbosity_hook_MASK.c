
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int verbosity; scalar_t__ db; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static bool
FUNC_4(const char *VAR_5)
{
 FUNC_0(VAR_5 != ((void*)0));
 if (FUNC_3(VAR_5, "default") == 0)
  VAR_4.verbosity = VAR_0;
 else if (FUNC_3(VAR_5, "verbose") == 0)
  VAR_4.verbosity = VAR_3;
 else if (FUNC_3(VAR_5, "terse") == 0)
  VAR_4.verbosity = VAR_2;
 else if (FUNC_3(VAR_5, "sqlstate") == 0)
  VAR_4.verbosity = VAR_1;
 else
 {
  FUNC_2("VERBOSITY", VAR_5, "default, verbose, terse, sqlstate");
  return 0;
 }

 if (VAR_4.db)
  FUNC_1(VAR_4.db, VAR_4.verbosity);
 return 1;
}
