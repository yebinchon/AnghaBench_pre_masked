
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int val; } ;
typedef TYPE_2__ swp_entry_t ;
struct page {scalar_t__ index; TYPE_1__* mapping; } ;
struct lruvec {int dummy; } ;
struct list_head {int dummy; } ;
struct address_space {int i_pages; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_10__ {int lru_lock; } ;
typedef TYPE_3__ pg_data_t ;
struct TYPE_8__ {int i_pages; int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,int *) ;
 int FUNC_7 (struct page*,int,struct lruvec*,struct list_head*) ;
 int FUNC_8 (int *,unsigned long,struct page*,int ) ;
 struct page* FUNC_9 (struct page*) ;
 struct lruvec* FUNC_10 (struct page*,TYPE_3__*) ;
 int FUNC_11 (struct page*) ;
 TYPE_3__* FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*,int) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (struct page*,int ) ;
 struct address_space* FUNC_21 (TYPE_2__) ;
 unsigned long FUNC_22 (TYPE_2__) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static void FUNC_26(struct page *VAR_3, struct list_head *VAR_4,
  pgoff_t VAR_5, unsigned long VAR_6)
{
 struct page *VAR_7 = FUNC_9(VAR_3);
 pg_data_t *VAR_8 = FUNC_12(VAR_7);
 struct lruvec *VAR_9;
 struct address_space *VAR_10 = ((void*)0);
 unsigned long VAR_11 = 0;
 int VAR_12;

 VAR_9 = FUNC_10(VAR_7, VAR_8);


 FUNC_11(VAR_7);

 if (FUNC_3(VAR_7) && FUNC_5(VAR_7)) {
  swp_entry_t VAR_13 = { .val = FUNC_13(VAR_7) };

  VAR_11 = FUNC_22(VAR_13);
  VAR_10 = FUNC_21(VAR_13);
  FUNC_24(&VAR_10->i_pages);
 }

 for (VAR_12 = VAR_1 - 1; VAR_12 >= 1; VAR_12--) {
  FUNC_7(VAR_7, VAR_12, VAR_9, VAR_4);

  if (VAR_7[VAR_12].index >= VAR_5) {
   FUNC_1(VAR_7 + VAR_12);
   FUNC_6(VAR_7 + VAR_12, ((void*)0));
   if (FUNC_2(VAR_0) && FUNC_4(VAR_7))
    FUNC_18(VAR_7->mapping->host, 1);
   FUNC_16(VAR_7 + VAR_12);
  } else if (!FUNC_3(VAR_3)) {
   FUNC_8(&VAR_7->mapping->i_pages, VAR_7[VAR_12].index,
     VAR_7 + VAR_12, 0);
  } else if (VAR_10) {
   FUNC_8(&VAR_10->i_pages, VAR_11 + VAR_12,
     VAR_7 + VAR_12, 0);
  }
 }

 FUNC_0(VAR_7);

 FUNC_20(VAR_7, VAR_2);


 if (FUNC_3(VAR_7)) {

  if (FUNC_5(VAR_7)) {
   FUNC_14(VAR_7, 2);
   FUNC_25(&VAR_10->i_pages);
  } else {
   FUNC_15(VAR_7);
  }
 } else {

  FUNC_14(VAR_7, 2);
  FUNC_25(&VAR_7->mapping->i_pages);
 }

 FUNC_19(&VAR_8->lru_lock, VAR_6);

 FUNC_17(VAR_7);

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  struct page *VAR_14 = VAR_7 + VAR_12;
  if (VAR_14 == VAR_3)
   continue;
  FUNC_23(VAR_14);
  FUNC_16(VAR_14);
 }
}
