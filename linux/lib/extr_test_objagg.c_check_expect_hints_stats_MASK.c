
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_stats {int dummy; } ;
struct objagg_hints {int dummy; } ;
struct expect_stats {int dummy; } ;


 scalar_t__ FUNC_0 (struct objagg_stats const*) ;
 int FUNC_1 (struct objagg_stats const*) ;
 int FUNC_2 (struct objagg_stats const*,struct expect_stats const*,char const**) ;
 struct objagg_stats* FUNC_3 (struct objagg_hints*) ;
 int FUNC_4 (struct objagg_stats const*) ;

__attribute__((used)) static int FUNC_5(struct objagg_hints *VAR_0,
        const struct expect_stats *VAR_1,
        const char **VAR_2)
{
 const struct objagg_stats *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2);
 FUNC_4(VAR_3);
 return VAR_4;
}
