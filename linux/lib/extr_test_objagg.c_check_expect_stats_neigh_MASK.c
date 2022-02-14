
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_stats {int stats_info_count; int * stats_info; } ;
struct expect_stats {int * info; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(const struct objagg_stats *VAR_1,
        const struct expect_stats *VAR_2,
        int VAR_3)
{
 int VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_3 - 1; VAR_4 >= 0; VAR_4--) {
  VAR_5 = FUNC_1(&VAR_1->stats_info[VAR_4],
           &VAR_2->info[VAR_3], ((void*)0));
  if (VAR_5)
   break;
  VAR_5 = FUNC_0(&VAR_1->stats_info[VAR_4],
      &VAR_2->info[VAR_3], ((void*)0));
  if (!VAR_5)
   return 0;
 }
 for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_1->stats_info_count; VAR_4++) {
  VAR_5 = FUNC_1(&VAR_1->stats_info[VAR_4],
           &VAR_2->info[VAR_3], ((void*)0));
  if (VAR_5)
   break;
  VAR_5 = FUNC_0(&VAR_1->stats_info[VAR_4],
      &VAR_2->info[VAR_3], ((void*)0));
  if (!VAR_5)
   return 0;
 }
 return -VAR_0;
}
