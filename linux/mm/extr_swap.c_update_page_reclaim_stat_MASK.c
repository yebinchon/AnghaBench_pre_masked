
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone_reclaim_stat {int * recent_rotated; int * recent_scanned; } ;
struct lruvec {struct zone_reclaim_stat reclaim_stat; } ;



__attribute__((used)) static void FUNC_0(struct lruvec *VAR_0,
         int VAR_1, int VAR_2)
{
 struct zone_reclaim_stat *VAR_3 = &VAR_0->reclaim_stat;

 VAR_3->recent_scanned[VAR_1]++;
 if (VAR_2)
  VAR_3->recent_rotated[VAR_1]++;
}
