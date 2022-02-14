
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_info_struct {unsigned char* swap_map; } ;
struct swap_cluster_info {int dummy; } ;
struct page {int _mapcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,struct page*) ;
 struct swap_info_struct* FUNC_6 (TYPE_1__) ;
 int FUNC_7 (int *) ;
 struct page* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (int) ;
 struct swap_cluster_info* FUNC_11 (struct swap_info_struct*,unsigned long) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*,int*) ;
 int FUNC_16 (unsigned char) ;
 unsigned long FUNC_17 (TYPE_1__) ;
 int FUNC_18 (struct swap_cluster_info*) ;

__attribute__((used)) static int FUNC_19(struct page *VAR_2, int *VAR_3,
      int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9 = 0;
 struct swap_info_struct *VAR_10;
 struct swap_cluster_info *VAR_11 = ((void*)0);
 unsigned char *VAR_12 = ((void*)0);
 int VAR_13, VAR_14 = 0;


 FUNC_5(FUNC_2(VAR_2), VAR_2);

 if (!FUNC_0(VAR_0) || FUNC_10(!FUNC_4(VAR_2))) {
  VAR_13 = FUNC_15(VAR_2, VAR_3);
  if (FUNC_3(VAR_2))
   VAR_14 = FUNC_14(VAR_2);
  if (VAR_4)
   *VAR_4 = VAR_14;
  return VAR_13 + VAR_14;
 }

 VAR_2 = FUNC_8(VAR_2);

 VAR_7 = VAR_8 = VAR_6 = 0;
 if (FUNC_3(VAR_2)) {
  swp_entry_t VAR_15;

  VAR_15.val = FUNC_13(VAR_2);
  VAR_10 = FUNC_6(VAR_15);
  if (VAR_10) {
   VAR_12 = VAR_10->swap_map;
   VAR_9 = FUNC_17(VAR_15);
  }
 }
 if (VAR_12)
  VAR_11 = FUNC_11(VAR_10, VAR_9);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_13 = FUNC_7(&VAR_2[VAR_5]._mapcount) + 1;
  VAR_7 += VAR_13;
  if (VAR_12) {
   VAR_14 = FUNC_16(VAR_12[VAR_9 + VAR_5]);
   VAR_8 += VAR_14;
  }
  VAR_6 = FUNC_12(VAR_6, VAR_13 + VAR_14);
 }
 FUNC_18(VAR_11);
 if (FUNC_1(VAR_2)) {
  VAR_6 -= 1;
  VAR_7 -= VAR_1;
 }
 VAR_13 = FUNC_9(VAR_2);
 VAR_6 += VAR_13;
 VAR_7 += VAR_13;
 if (VAR_3)
  *VAR_3 = VAR_7;
 if (VAR_4)
  *VAR_4 = VAR_8;

 return VAR_6;
}
