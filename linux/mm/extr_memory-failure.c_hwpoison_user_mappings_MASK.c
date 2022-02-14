
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef enum ttu_flags { ____Placeholder_ttu_flags } ttu_flags ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (struct page*,int *,int) ;
 int FUNC_11 (int *,int,int,unsigned long,int) ;
 scalar_t__ FUNC_12 (struct address_space*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 struct address_space* FUNC_15 (struct page*) ;
 scalar_t__ FUNC_16 (struct page*) ;
 int FUNC_17 (char*,unsigned long,...) ;
 int FUNC_18 (char*,unsigned long) ;
 int FUNC_19 (struct page*,int ) ;
 int VAR_5 ;
 int FUNC_20 (struct page*,int) ;

__attribute__((used)) static bool FUNC_21(struct page *VAR_6, unsigned long VAR_7,
      int VAR_8, struct page **VAR_9)
{
 enum ttu_flags VAR_10 = VAR_4 | VAR_2;
 struct address_space *VAR_11;
 FUNC_0(VAR_5);
 bool VAR_12;
 int VAR_13 = 1, VAR_14;
 struct page *VAR_15 = *VAR_9;
 bool VAR_16 = FUNC_5(VAR_15);





 if (FUNC_6(VAR_6) || FUNC_7(VAR_6))
  return 1;
 if (!(FUNC_4(VAR_15) || FUNC_2(VAR_6)))
  return 1;





 if (!FUNC_14(VAR_15))
  return 1;

 if (FUNC_3(VAR_6)) {
  FUNC_17("Memory failure: %#lx: can't handle KSM pages.\n", VAR_7);
  return 0;
 }

 if (FUNC_8(VAR_6)) {
  FUNC_17("Memory failure: %#lx: keeping poisoned page in swap cache\n",
   VAR_7);
  VAR_10 |= VAR_3;
 }







 VAR_11 = FUNC_15(VAR_15);
 if (!(VAR_8 & VAR_1) && !FUNC_1(VAR_15) && VAR_11 &&
     FUNC_12(VAR_11)) {
  if (FUNC_16(VAR_15)) {
   FUNC_9(VAR_15);
  } else {
   VAR_13 = 0;
   VAR_10 |= VAR_3;
   FUNC_18("Memory failure: %#lx: corrupted page was clean: dropped without side effects\n",
    VAR_7);
  }
 }
 if (VAR_13)
  FUNC_10(VAR_15, &VAR_5, VAR_8 & VAR_0);

 VAR_12 = FUNC_20(VAR_15, VAR_10);
 if (!VAR_12)
  FUNC_17("Memory failure: %#lx: failed to unmap page (mapcount=%d)\n",
         VAR_7, FUNC_13(VAR_15));





 if (VAR_16)
  FUNC_19(VAR_15, 0);
 VAR_14 = FUNC_1(VAR_15) || (VAR_8 & VAR_1);
 FUNC_11(&VAR_5, VAR_14, !VAR_12, VAR_7, VAR_8);

 return VAR_12;
}
