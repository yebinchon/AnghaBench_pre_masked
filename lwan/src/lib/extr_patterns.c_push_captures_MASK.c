
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str_find {int dummy; } ;
struct match_state {int level; } ;


 int FUNC_0 (struct match_state*,int,char const*,char const*,struct str_find*) ;

__attribute__((used)) static int
FUNC_1(struct match_state *VAR_0, const char *VAR_1, const char *VAR_2,
    struct str_find *VAR_3, size_t VAR_4)
{
 int VAR_5;
 int VAR_6 = (VAR_0->level <= 0 && VAR_1) ? 1 : VAR_0->level;

 if (VAR_6 > (int)VAR_4)
  VAR_6 = (int)VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  if (FUNC_0(VAR_0, VAR_5, VAR_1, VAR_2, VAR_3 + VAR_5) == -1)
   break;


 return (VAR_6);
}
