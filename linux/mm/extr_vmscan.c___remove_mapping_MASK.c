
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int val; } ;
typedef TYPE_2__ swp_entry_t ;
struct page {int dummy; } ;
struct address_space {int i_pages; TYPE_1__* a_ops; } ;
struct TYPE_6__ {void (* freepage ) (struct page*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,void*) ;
 int FUNC_5 (struct page*,TYPE_2__) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct address_space*) ;
 int FUNC_8 (struct address_space*) ;
 int FUNC_9 (struct page*,TYPE_2__) ;
 scalar_t__ FUNC_10 (struct page*) ;
 struct address_space* FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*,int) ;
 int FUNC_14 (struct page*,int) ;
 int FUNC_15 (struct page*,TYPE_2__) ;
 scalar_t__ FUNC_16 (int ) ;
 void* FUNC_17 (struct page*) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_20(struct address_space *VAR_0, struct page *VAR_1,
       bool VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(!FUNC_2(VAR_1));
 FUNC_0(VAR_0 != FUNC_11(VAR_1));

 FUNC_18(&VAR_0->i_pages, VAR_3);
 VAR_4 = 1 + FUNC_6(VAR_1);
 if (!FUNC_13(VAR_1, VAR_4))
  goto cannot_free;

 if (FUNC_16(FUNC_1(VAR_1))) {
  FUNC_14(VAR_1, VAR_4);
  goto cannot_free;
 }

 if (FUNC_3(VAR_1)) {
  swp_entry_t VAR_5 = { .val = FUNC_12(VAR_1) };
  FUNC_9(VAR_1, VAR_5);
  FUNC_5(VAR_1, VAR_5);
  FUNC_19(&VAR_0->i_pages, VAR_3);
  FUNC_15(VAR_1, VAR_5);
 } else {
  void (*VAR_6)(struct page *);
  void *VAR_7 = ((void*)0);

  VAR_6 = VAR_0->a_ops->freepage;
  if (VAR_2 && FUNC_10(VAR_1) &&
      !FUNC_8(VAR_0) && !FUNC_7(VAR_0))
   VAR_7 = FUNC_17(VAR_1);
  FUNC_4(VAR_1, VAR_7);
  FUNC_19(&VAR_0->i_pages, VAR_3);

  if (VAR_6 != ((void*)0))
   VAR_6(VAR_1);
 }

 return 1;

cannot_free:
 FUNC_19(&VAR_0->i_pages, VAR_3);
 return 0;
}
