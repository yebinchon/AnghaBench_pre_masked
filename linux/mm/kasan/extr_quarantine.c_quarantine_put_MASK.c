
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlist_head {scalar_t__ bytes; } ;
struct kmem_cache {int size; } ;
struct kasan_free_meta {int quarantine_link; } ;


 struct qlist_head VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 struct qlist_head* VAR_4 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct qlist_head*,struct qlist_head*) ;
 int FUNC_5 (struct qlist_head*,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct qlist_head* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct kasan_free_meta *VAR_10, struct kmem_cache *VAR_11)
{
 unsigned long VAR_12;
 struct qlist_head *VAR_13;
 struct qlist_head VAR_14 = VAR_0;
 FUNC_3(VAR_12);

 VAR_13 = FUNC_8(&VAR_3);
 FUNC_5(VAR_13, &VAR_10->quarantine_link, VAR_11->size);
 if (FUNC_9(VAR_13->bytes > VAR_2)) {
  FUNC_4(VAR_13, &VAR_14);

  FUNC_6(&VAR_7);
  FUNC_1(VAR_8, VAR_8 + VAR_14.bytes);
  FUNC_4(&VAR_14, &VAR_4[VAR_9]);
  if (VAR_4[VAR_9].bytes >=
    FUNC_0(VAR_5)) {
   int VAR_15;

   VAR_15 = VAR_9 + 1;
   if (VAR_15 == VAR_1)
    VAR_15 = 0;
   if (VAR_15 != VAR_6)
    VAR_9 = VAR_15;
  }
  FUNC_7(&VAR_7);
 }

 FUNC_2(VAR_12);
}
