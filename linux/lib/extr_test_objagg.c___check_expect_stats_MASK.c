
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_stats {int stats_info_count; int * stats_info; } ;
struct expect_stats {int info_count; int * info; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char const**) ;
 int FUNC_1 (struct objagg_stats const*,struct expect_stats const*,int) ;
 int FUNC_2 (int *,int *,char const**) ;

__attribute__((used)) static int FUNC_3(const struct objagg_stats *VAR_1,
    const struct expect_stats *VAR_2,
    const char **VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (VAR_1->stats_info_count != VAR_2->info_count) {
  *VAR_3 = "Unexpected object count";
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->stats_info_count; VAR_4++) {
  VAR_5 = FUNC_2(&VAR_1->stats_info[VAR_4],
           &VAR_2->info[VAR_4], VAR_3);
  if (VAR_5)
   return VAR_5;
  VAR_5 = FUNC_0(&VAR_1->stats_info[VAR_4],
      &VAR_2->info[VAR_4], VAR_3);
  if (VAR_5) {



   VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4);
   if (VAR_5)
    return VAR_5;
  }
 }
 return 0;
}
