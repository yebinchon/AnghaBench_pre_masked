
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct pglist_data {int lru_lock; } ;
struct page {struct address_space* mapping; } ;
struct list_head {int dummy; } ;
struct deferred_split {int split_queue_lock; int split_queue_len; } ;
struct anon_vma {int dummy; } ;
struct address_space {int i_pages; int host; } ;
typedef int pgoff_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 struct pglist_data* FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int,struct page*) ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (struct page*,int ) ;
 int FUNC_15 (struct page*,struct list_head*,int,unsigned long) ;
 int FUNC_16 (struct anon_vma*) ;
 int FUNC_17 (struct anon_vma*) ;
 int FUNC_18 (struct page*,int*) ;
 struct page* FUNC_19 (struct page*) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct page*,char*) ;
 struct deferred_split* FUNC_23 (struct page*) ;
 int FUNC_24 (struct address_space*) ;
 int FUNC_25 (struct address_space*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 () ;
 int FUNC_31 (struct page*) ;
 int FUNC_32 (struct page*) ;
 struct anon_vma* FUNC_33 (struct page*) ;
 int FUNC_34 (struct page*) ;
 int FUNC_35 (struct page*) ;
 scalar_t__ FUNC_36 (struct page*,int) ;
 int FUNC_37 (struct page*) ;
 int FUNC_38 (char*,int,int) ;
 int FUNC_39 (struct anon_vma*) ;
 int FUNC_40 (struct page*) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int *,unsigned long) ;
 int FUNC_43 (int *) ;
 int FUNC_44 (int *,unsigned long) ;
 int FUNC_45 (TYPE_1__) ;
 int FUNC_46 (struct page*) ;
 int FUNC_47 (struct page*) ;
 int FUNC_48 (int *) ;
 int FUNC_49 (int *) ;
 int VAR_7 ;
 struct page* FUNC_50 (int *) ;

int FUNC_51(struct page *VAR_8, struct list_head *VAR_9)
{
 struct page *VAR_10 = FUNC_19(VAR_8);
 struct pglist_data *VAR_11 = FUNC_3(FUNC_37(VAR_10));
 struct deferred_split *VAR_12 = FUNC_23(VAR_8);
 struct anon_vma *VAR_13 = ((void*)0);
 struct address_space *VAR_14 = ((void*)0);
 int VAR_15, VAR_16, VAR_17, VAR_18;
 bool VAR_19;
 unsigned long VAR_20;
 pgoff_t VAR_21;

 FUNC_12(FUNC_27(VAR_8), VAR_8);
 FUNC_12(!FUNC_6(VAR_8), VAR_8);
 FUNC_12(!FUNC_5(VAR_8), VAR_8);

 if (FUNC_11(VAR_8))
  return -VAR_1;

 if (FUNC_4(VAR_10)) {
  VAR_13 = FUNC_33(VAR_10);
  if (!VAR_13) {
   VAR_18 = -VAR_1;
   goto out;
  }
  VAR_21 = -1;
  VAR_14 = ((void*)0);
  FUNC_16(VAR_13);
 } else {
  VAR_14 = VAR_10->mapping;


  if (!VAR_14) {
   VAR_18 = -VAR_1;
   goto out;
  }

  VAR_13 = ((void*)0);
  FUNC_24(VAR_14);
  VAR_21 = FUNC_1(FUNC_26(VAR_14->host), VAR_4);
 }





 if (!FUNC_18(VAR_10, &VAR_17)) {
  VAR_18 = -VAR_1;
  goto out_unlock;
 }

 VAR_19 = FUNC_7(VAR_8);
 FUNC_47(VAR_10);
 FUNC_12(FUNC_20(VAR_10), VAR_10);


 if (VAR_19)
  FUNC_30();


 FUNC_42(&VAR_11->lru_lock, VAR_20);

 if (VAR_14) {
  FUNC_13(VAR_7, &VAR_14->i_pages, FUNC_34(VAR_10));





  FUNC_48(&VAR_14->i_pages);
  if (FUNC_50(&VAR_7) != VAR_10)
   goto fail;
 }


 FUNC_41(&VAR_12->split_queue_lock);
 VAR_15 = FUNC_31(VAR_10);
 VAR_16 = FUNC_46(VAR_10);
 if (!VAR_16 && FUNC_36(VAR_10, 1 + VAR_17)) {
  if (!FUNC_29(FUNC_32(VAR_10))) {
   VAR_12->split_queue_len--;
   FUNC_28(FUNC_32(VAR_10));
  }
  if (VAR_14) {
   if (FUNC_8(VAR_8))
    FUNC_14(VAR_8, VAR_3);
   else
    FUNC_14(VAR_8, VAR_2);
  }

  FUNC_43(&VAR_12->split_queue_lock);
  FUNC_15(VAR_8, VAR_9, VAR_21, VAR_20);
  if (FUNC_9(VAR_10)) {
   swp_entry_t VAR_22 = { .val = FUNC_35(VAR_10) };

   VAR_18 = FUNC_45(VAR_22);
  } else
   VAR_18 = 0;
 } else {
  if (FUNC_2(VAR_0) && VAR_16) {
   FUNC_38("total_mapcount: %u, page_count(): %u\n",
     VAR_16, VAR_15);
   if (FUNC_10(VAR_8))
    FUNC_22(VAR_10, ((void*)0));
   FUNC_22(VAR_8, "total_mapcount(head) > 0");
   FUNC_0();
  }
  FUNC_43(&VAR_12->split_queue_lock);
fail: if (VAR_14)
   FUNC_49(&VAR_14->i_pages);
  FUNC_44(&VAR_11->lru_lock, VAR_20);
  FUNC_40(VAR_10);
  VAR_18 = -VAR_1;
 }

out_unlock:
 if (VAR_13) {
  FUNC_17(VAR_13);
  FUNC_39(VAR_13);
 }
 if (VAR_14)
  FUNC_25(VAR_14);
out:
 FUNC_21(!VAR_18 ? VAR_5 : VAR_6);
 return VAR_18;
}
