
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {int host; } ;
struct TYPE_2__ {int comm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int VAR_6 ;
 int FUNC_8 (int ,struct page*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct page*,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (struct page*,struct address_space*,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct address_space*,struct page*) ;
 int FUNC_15 (struct page*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_16 (struct page*,char*) ;
 int FUNC_17 () ;
 int FUNC_18 (struct address_space*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (struct address_space*) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct page*) ;
 int FUNC_27 (struct page*,int) ;
 int FUNC_28 (struct page*) ;
 int FUNC_29 (char*,int ,int ) ;
 scalar_t__ FUNC_30 (int ) ;

__attribute__((used)) static void FUNC_31(struct address_space *VAR_8,
          struct page *VAR_9)
{
 int VAR_10;






 if (FUNC_7(VAR_9) && FUNC_3(VAR_9))
  FUNC_15(VAR_9);
 else
  FUNC_14(VAR_8, VAR_9);

 FUNC_8(FUNC_5(VAR_9), VAR_9);
 FUNC_8(FUNC_25(VAR_9), VAR_9);
 if (!FUNC_0(VAR_0) && FUNC_30(FUNC_25(VAR_9))) {
  int VAR_11;

  FUNC_29("BUG: Bad page cache in process %s  pfn:%05lx\n",
    VAR_7->comm, FUNC_28(VAR_9));
  FUNC_16(VAR_9, "still mapped when deleted");
  FUNC_17();
  FUNC_13(VAR_6, VAR_1);

  VAR_11 = FUNC_23(VAR_9);
  if (FUNC_21(VAR_8) &&
      FUNC_22(VAR_9) >= VAR_11 + 2) {






   FUNC_24(VAR_9);
   FUNC_27(VAR_9, VAR_11);
  }
 }


 if (FUNC_2(VAR_9))
  return;

 VAR_10 = FUNC_19(VAR_9);

 FUNC_11(FUNC_26(VAR_9), VAR_2, -VAR_10);
 if (FUNC_4(VAR_9)) {
  FUNC_11(FUNC_26(VAR_9), VAR_4, -VAR_10);
  if (FUNC_6(VAR_9))
   FUNC_10(VAR_9, VAR_5);
 } else if (FUNC_6(VAR_9)) {
  FUNC_10(VAR_9, VAR_3);
  FUNC_18(VAR_8);
 }
 if (FUNC_9(FUNC_1(VAR_9)))
  FUNC_12(VAR_9, VAR_8, FUNC_20(VAR_8->host));
}
