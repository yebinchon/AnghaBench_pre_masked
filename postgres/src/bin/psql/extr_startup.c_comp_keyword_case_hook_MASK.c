
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int comp_case; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_5)
{
 FUNC_0(VAR_5 != ((void*)0));
 if (FUNC_2(VAR_5, "preserve-upper") == 0)
  VAR_4.comp_case = VAR_2;
 else if (FUNC_2(VAR_5, "preserve-lower") == 0)
  VAR_4.comp_case = VAR_1;
 else if (FUNC_2(VAR_5, "upper") == 0)
  VAR_4.comp_case = VAR_3;
 else if (FUNC_2(VAR_5, "lower") == 0)
  VAR_4.comp_case = VAR_0;
 else
 {
  FUNC_1("COMP_KEYWORD_CASE", VAR_5,
       "lower, upper, preserve-lower, preserve-upper");
  return 0;
 }
 return 1;
}
