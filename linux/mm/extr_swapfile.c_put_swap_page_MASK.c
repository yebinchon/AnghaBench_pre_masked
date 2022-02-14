
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_info_struct {unsigned char* swap_map; int lock; } ;
struct swap_cluster_info {int dummy; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct swap_info_struct*,unsigned long,unsigned char) ;
 struct swap_info_struct* FUNC_2 (TYPE_1__) ;
 int FUNC_3 (struct swap_cluster_info*) ;
 int FUNC_4 (struct swap_cluster_info*) ;
 int FUNC_5 (TYPE_1__) ;
 int FUNC_6 (struct page*) ;
 struct swap_cluster_info* FUNC_7 (struct swap_info_struct*,unsigned long) ;
 int FUNC_8 (TYPE_1__,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct swap_info_struct*,unsigned long) ;
 unsigned long FUNC_13 (TYPE_1__) ;
 int FUNC_14 (struct swap_info_struct*,struct swap_cluster_info*) ;

void FUNC_15(struct page *VAR_2, swp_entry_t VAR_3)
{
 unsigned long VAR_4 = FUNC_13(VAR_3);
 unsigned long VAR_5 = VAR_4 / VAR_0;
 struct swap_cluster_info *VAR_6;
 struct swap_info_struct *VAR_7;
 unsigned char *VAR_8;
 unsigned int VAR_9, VAR_10 = 0;
 unsigned char VAR_11;
 int VAR_12 = FUNC_11(FUNC_6(VAR_2));

 VAR_7 = FUNC_2(VAR_3);
 if (!VAR_7)
  return;

 VAR_6 = FUNC_7(VAR_7, VAR_4);
 if (VAR_12 == VAR_0) {
  FUNC_0(!FUNC_4(VAR_6));
  VAR_8 = VAR_7->swap_map + VAR_4;
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_11 = VAR_8[VAR_9];
   FUNC_0(!(VAR_11 & VAR_1));
   if (VAR_11 == VAR_1)
    VAR_10++;
  }
  FUNC_3(VAR_6);
  if (VAR_10 == VAR_0) {
   FUNC_14(VAR_7, VAR_6);
   FUNC_9(&VAR_7->lock);
   FUNC_8(VAR_3, VAR_0);
   FUNC_12(VAR_7, VAR_5);
   FUNC_10(&VAR_7->lock);
   return;
  }
 }
 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++, VAR_3.val++) {
  if (!FUNC_1(VAR_7, VAR_4 + VAR_9, VAR_1)) {
   FUNC_14(VAR_7, VAR_6);
   FUNC_5(VAR_3);
   if (VAR_9 == VAR_12 - 1)
    return;
   FUNC_7(VAR_7, VAR_4);
  }
 }
 FUNC_14(VAR_7, VAR_6);
}
