
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_stats {scalar_t__ stats_info_count; } ;
struct objagg {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct objagg_stats const*) ;
 int FUNC_1 (struct objagg_stats const*) ;
 struct objagg_stats* FUNC_2 (struct objagg*) ;
 int FUNC_3 (struct objagg_stats const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct objagg *VAR_1)
{
 const struct objagg_stats *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 if (VAR_2->stats_info_count != 0) {
  FUNC_4("Stats: Object count is not zero while it should be\n");
  VAR_3 = -VAR_0;
 }

 FUNC_3(VAR_2);
 return VAR_3;
}
