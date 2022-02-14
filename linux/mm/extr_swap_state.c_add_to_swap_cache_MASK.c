
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int dummy; } ;
struct address_space {unsigned long nrpages; int i_pages; } ;
typedef scalar_t__ pgoff_t ;
typedef int gfp_t ;
struct TYPE_15__ {scalar_t__ xa_index; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int,struct page*) ;
 int FUNC_7 (TYPE_2__,int *,scalar_t__,int ) ;
 int FUNC_8 (int ,int ,unsigned long) ;
 int VAR_1 ;
 unsigned long FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*,unsigned long) ;
 int FUNC_13 (struct page*,unsigned long) ;
 int FUNC_14 (struct page*,scalar_t__) ;
 struct address_space* FUNC_15 (TYPE_1__) ;
 scalar_t__ FUNC_16 (TYPE_1__) ;
 TYPE_2__ VAR_2 ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (TYPE_2__*,int ) ;
 int FUNC_22 (TYPE_2__*,struct page*) ;
 int FUNC_23 (TYPE_2__*) ;

int FUNC_24(struct page *VAR_3, swp_entry_t VAR_4, gfp_t VAR_5)
{
 struct address_space *VAR_6 = FUNC_15(VAR_4);
 pgoff_t VAR_7 = FUNC_16(VAR_4);
 FUNC_7(VAR_2, &VAR_6->i_pages, VAR_7, FUNC_10(VAR_3));
 unsigned long VAR_8, VAR_9 = FUNC_9(VAR_3);

 FUNC_6(!FUNC_2(VAR_3), VAR_3);
 FUNC_6(FUNC_4(VAR_3), VAR_3);
 FUNC_6(!FUNC_3(VAR_3), VAR_3);

 FUNC_12(VAR_3, VAR_9);
 FUNC_5(VAR_3);

 do {
  FUNC_19(&VAR_2);
  FUNC_17(&VAR_2);
  if (FUNC_18(&VAR_2))
   goto unlock;
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   FUNC_6(VAR_2.xa_index != VAR_7 + VAR_8, VAR_3);
   FUNC_14(VAR_3 + VAR_8, VAR_4.val + VAR_8);
   FUNC_22(&VAR_2, VAR_3);
   FUNC_20(&VAR_2);
  }
  VAR_6->nrpages += VAR_9;
  FUNC_8(FUNC_11(VAR_3), VAR_0, VAR_9);
  FUNC_0(VAR_1, VAR_9);
unlock:
  FUNC_23(&VAR_2);
 } while (FUNC_21(&VAR_2, VAR_5));

 if (!FUNC_18(&VAR_2))
  return 0;

 FUNC_1(VAR_3);
 FUNC_13(VAR_3, VAR_9);
 return FUNC_18(&VAR_2);
}
