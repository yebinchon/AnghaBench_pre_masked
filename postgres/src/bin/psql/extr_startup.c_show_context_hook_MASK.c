
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int show_context; scalar_t__ db; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static bool
FUNC_4(const char *VAR_4)
{
 FUNC_0(VAR_4 != ((void*)0));
 if (FUNC_3(VAR_4, "never") == 0)
  VAR_3.show_context = VAR_2;
 else if (FUNC_3(VAR_4, "errors") == 0)
  VAR_3.show_context = VAR_1;
 else if (FUNC_3(VAR_4, "always") == 0)
  VAR_3.show_context = VAR_0;
 else
 {
  FUNC_2("SHOW_CONTEXT", VAR_4, "never, errors, always");
  return 0;
 }

 if (VAR_3.db)
  FUNC_1(VAR_3.db, VAR_3.show_context);
 return 1;
}
