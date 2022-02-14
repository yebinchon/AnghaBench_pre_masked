
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {int dummy; } ;
struct swap_info_struct {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct page*,int ,int) ;
 struct page* FUNC_6 (int,struct vm_area_struct*,unsigned long) ;
 int FUNC_7 () ;
 struct page* FUNC_8 (int ,int ) ;
 struct swap_info_struct* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct swap_info_struct*) ;
 int FUNC_14 (struct page*,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

struct page *FUNC_18(swp_entry_t VAR_4, gfp_t VAR_5,
   struct vm_area_struct *VAR_6, unsigned long VAR_7,
   bool *VAR_8)
{
 struct page *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 struct swap_info_struct *VAR_11;
 int VAR_12;
 *VAR_8 = 0;

 do {





  VAR_11 = FUNC_9(VAR_4);
  if (!VAR_11)
   break;
  VAR_9 = FUNC_8(FUNC_15(VAR_4),
        FUNC_17(VAR_4));
  FUNC_13(VAR_11);
  if (VAR_9)
   break;
  if (!FUNC_4(VAR_4) && VAR_3)
   break;




  if (!VAR_10) {
   VAR_10 = FUNC_6(VAR_5, VAR_6, VAR_7);
   if (!VAR_10)
    break;
  }




  VAR_12 = FUNC_16(VAR_4);
  if (VAR_12 == -VAR_0) {





   FUNC_7();
   continue;
  } else if (VAR_12)
   break;


  FUNC_2(VAR_10);
  FUNC_3(VAR_10);
  VAR_12 = FUNC_5(VAR_10, VAR_4, VAR_5 & VAR_2);
  if (FUNC_10(!VAR_12)) {

   FUNC_0(VAR_10);
   FUNC_11(VAR_10);
   *VAR_8 = 1;
   return VAR_10;
  }
  FUNC_1(VAR_10);




  FUNC_14(VAR_10, VAR_4);
 } while (VAR_12 != -VAR_1);

 if (VAR_10)
  FUNC_12(VAR_10);
 return VAR_9;
}
