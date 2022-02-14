
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long nr_badpages; unsigned int* badpages; unsigned int last_page; } ;
union swap_header {TYPE_1__ info; } ;
struct swap_info_struct {unsigned int cluster_next; unsigned long max; unsigned int pages; int free_clusters; int discard_clusters; } ;
struct swap_cluster_info {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ FUNC_1 (struct swap_cluster_info*) ;
 int FUNC_2 (int *,struct swap_cluster_info*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct swap_cluster_info*,int ) ;
 int FUNC_5 (struct swap_info_struct*,struct swap_cluster_info*,unsigned long) ;
 int FUNC_6 (char*) ;
 unsigned long FUNC_7 (unsigned long,unsigned int) ;
 int FUNC_8 (struct swap_info_struct*,int *) ;

__attribute__((used)) static int FUNC_9(struct swap_info_struct *VAR_5,
     union swap_header *VAR_6,
     unsigned char *VAR_7,
     struct swap_cluster_info *VAR_8,
     unsigned long VAR_9,
     sector_t *VAR_10)
{
 unsigned int VAR_11, VAR_12;
 unsigned int VAR_13;
 int VAR_14;
 unsigned long VAR_15 = FUNC_0(VAR_9, VAR_2);
 unsigned long VAR_16 = VAR_5->cluster_next / VAR_2 % VAR_3;
 unsigned long VAR_17, VAR_18;

 VAR_13 = VAR_9 - 1;

 FUNC_3(&VAR_5->free_clusters);
 FUNC_3(&VAR_5->discard_clusters);

 for (VAR_17 = 0; VAR_17 < VAR_6->info.nr_badpages; VAR_17++) {
  unsigned int VAR_19 = VAR_6->info.badpages[VAR_17];
  if (VAR_19 == 0 || VAR_19 > VAR_6->info.last_page)
   return -VAR_1;
  if (VAR_19 < VAR_9) {
   VAR_7[VAR_19] = VAR_4;
   VAR_13--;




   FUNC_5(VAR_5, VAR_8, VAR_19);
  }
 }


 for (VAR_17 = VAR_9; VAR_17 < FUNC_7(VAR_9, VAR_2); VAR_17++)
  FUNC_5(VAR_5, VAR_8, VAR_17);

 if (VAR_13) {
  VAR_7[0] = VAR_4;




  FUNC_5(VAR_5, VAR_8, 0);
  VAR_5->max = VAR_9;
  VAR_5->pages = VAR_13;
  VAR_14 = FUNC_8(VAR_5, VAR_10);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_13 = VAR_5->pages;
 }
 if (!VAR_13) {
  FUNC_6("Empty swap-file\n");
  return -VAR_1;
 }

 if (!VAR_8)
  return VAR_14;






 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_11 = (VAR_12 + VAR_16) % VAR_3;
  for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_15, VAR_3); VAR_17++) {
   VAR_18 = VAR_17 * VAR_3 + VAR_11;
   if (VAR_18 >= VAR_15)
    continue;
   if (FUNC_1(&VAR_8[VAR_18]))
    continue;
   FUNC_4(&VAR_8[VAR_18], VAR_0);
   FUNC_2(&VAR_5->free_clusters, VAR_8,
           VAR_18);
  }
 }
 return VAR_14;
}
