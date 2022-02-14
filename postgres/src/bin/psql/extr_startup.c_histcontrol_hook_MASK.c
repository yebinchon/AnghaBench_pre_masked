
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int histcontrol; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_5)
{
 FUNC_0(VAR_5 != ((void*)0));
 if (FUNC_2(VAR_5, "ignorespace") == 0)
  VAR_4.histcontrol = VAR_2;
 else if (FUNC_2(VAR_5, "ignoredups") == 0)
  VAR_4.histcontrol = VAR_1;
 else if (FUNC_2(VAR_5, "ignoreboth") == 0)
  VAR_4.histcontrol = VAR_0;
 else if (FUNC_2(VAR_5, "none") == 0)
  VAR_4.histcontrol = VAR_3;
 else
 {
  FUNC_1("HISTCONTROL", VAR_5,
       "none, ignorespace, ignoredups, ignoreboth");
  return 0;
 }
 return 1;
}
