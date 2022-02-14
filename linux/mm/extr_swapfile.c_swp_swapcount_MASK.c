
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int * swap_map; } ;
struct swap_cluster_info {int dummy; } ;
struct page {int dummy; } ;
typedef size_t pgoff_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 struct swap_info_struct* FUNC_1 (int ) ;
 unsigned char* FUNC_2 (struct page*) ;
 int FUNC_3 (unsigned char*) ;
 struct page* FUNC_4 (struct page*,int ) ;
 struct swap_cluster_info* FUNC_5 (struct swap_info_struct*,size_t) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (struct swap_info_struct*,struct swap_cluster_info*) ;
 struct page* FUNC_10 (int *) ;

int FUNC_11(swp_entry_t VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 struct swap_info_struct *VAR_10;
 struct swap_cluster_info *VAR_11;
 struct page *VAR_12;
 pgoff_t VAR_13;
 unsigned char *VAR_14;

 VAR_10 = FUNC_1(VAR_6);
 if (!VAR_10)
  return 0;

 VAR_13 = FUNC_8(VAR_6);

 VAR_11 = FUNC_5(VAR_10, VAR_13);

 VAR_7 = FUNC_7(VAR_10->swap_map[VAR_13]);
 if (!(VAR_7 & VAR_0))
  goto out;

 VAR_7 &= ~VAR_0;
 VAR_9 = VAR_3 + 1;

 VAR_12 = FUNC_10(VAR_10->swap_map + VAR_13);
 VAR_13 &= ~VAR_1;
 FUNC_0(FUNC_6(VAR_12) != VAR_4);

 do {
  VAR_12 = FUNC_4(VAR_12, VAR_5);
  VAR_14 = FUNC_2(VAR_12);
  VAR_8 = VAR_14[VAR_13];
  FUNC_3(VAR_14);

  VAR_7 += (VAR_8 & ~VAR_0) * VAR_9;
  VAR_9 *= (VAR_2 + 1);
 } while (VAR_8 & VAR_0);
out:
 FUNC_9(VAR_10, VAR_11);
 return VAR_7;
}
