
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;
struct TYPE_10__ {int entry; int func; int flags; } ;
typedef TYPE_2__ wait_queue_entry_t ;
struct wait_page_queue {int bit_nr; struct page* page; TYPE_2__ wait; } ;
struct page {int flags; } ;
typedef enum behavior { ____Placeholder_behavior } behavior ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_4 ;
 int FUNC_3 (struct page*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned long*) ;
 int FUNC_13 (unsigned long*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int,int *) ;
 int FUNC_20 (int,int *) ;
 int VAR_7 ;

__attribute__((used)) static inline int FUNC_21(wait_queue_head_t *VAR_8,
 struct page *VAR_9, int VAR_10, int VAR_11, enum behavior VAR_12)
{
 struct wait_page_queue VAR_13;
 wait_queue_entry_t *VAR_14 = &VAR_13.wait;
 bool VAR_15;
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 unsigned long VAR_18;
 int VAR_19 = 0;

 if (VAR_10 == VAR_3 &&
     !FUNC_1(VAR_9) && FUNC_2(VAR_9)) {
  if (!FUNC_0(VAR_9)) {
   FUNC_6();
   VAR_17 = 1;
  }
  FUNC_12(&VAR_18);
  VAR_16 = 1;
 }

 FUNC_8(VAR_14);
 VAR_14->flags = VAR_12 == VAR_2 ? VAR_5 : 0;
 VAR_14->func = VAR_7;
 VAR_13.page = VAR_9;
 VAR_13.bit_nr = VAR_10;

 for (;;) {
  FUNC_17(&VAR_8->lock);

  if (FUNC_10(FUNC_11(&VAR_14->entry))) {
   FUNC_4(VAR_8, VAR_14);
   FUNC_3(VAR_9);
  }

  FUNC_15(VAR_11);

  FUNC_18(&VAR_8->lock);

  VAR_15 = FUNC_20(VAR_10, &VAR_9->flags);
  if (VAR_12 == VAR_0)
   FUNC_14(VAR_9);

  if (FUNC_10(VAR_15))
   FUNC_9();

  if (VAR_12 == VAR_2) {
   if (!FUNC_19(VAR_10, &VAR_9->flags))
    break;
  } else if (VAR_12 == VAR_4) {
   if (!FUNC_20(VAR_10, &VAR_9->flags))
    break;
  }

  if (FUNC_16(VAR_11, VAR_6)) {
   VAR_19 = -VAR_1;
   break;
  }

  if (VAR_12 == VAR_0) {







   break;
  }
 }

 FUNC_7(VAR_8, VAR_14);

 if (VAR_16) {
  if (VAR_17)
   FUNC_5();
  FUNC_13(&VAR_18);
 }
 return VAR_19;
}
