
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_state {int dummy; } ;


 char* FUNC_0 (struct match_state*,char const*,char const*) ;
 scalar_t__ FUNC_1 (struct match_state*,char const*,char const*,char const*) ;

__attribute__((used)) static const char *
FUNC_2(struct match_state *VAR_0, const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 for (;;) {
  const char *VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3 + 1);
  if (VAR_4 != ((void*)0))
   return VAR_4;
  else if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3))
   VAR_1++;
  else
   return ((void*)0);
 }
}
