
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_ht_sta {int dummy; } ;
struct mcs_group {scalar_t__ bw; int streams; } ;



__attribute__((used)) static bool
FUNC_0(struct minstrel_ht_sta *VAR_0, const struct mcs_group *VAR_1,
      int VAR_2, const struct mcs_group *VAR_3)
{
 if (VAR_3->bw < VAR_1->bw)
  return 0;

 if (VAR_3->streams == VAR_1->streams)
  return 1;

 if (VAR_2 < 4 && VAR_3->streams == VAR_1->streams - 1)
  return 1;

 return VAR_3->streams == VAR_1->streams + 1;
}
