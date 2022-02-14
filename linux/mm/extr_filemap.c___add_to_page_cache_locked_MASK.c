
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; int index; } ;
struct mem_cgroup {int dummy; } ;
struct address_space {int nrpages; int nrexceptional; int i_pages; } ;
typedef int pgoff_t ;
typedef int gfp_t ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int,struct page*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct page*,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *,struct address_space*) ;
 int FUNC_8 (struct page*,struct mem_cgroup*,int) ;
 int FUNC_9 (struct page*,struct mem_cgroup*,int,int) ;
 int FUNC_10 (struct page*,int ,int,struct mem_cgroup**,int) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 scalar_t__ FUNC_13 (void*) ;
 int VAR_4 ;
 int FUNC_14 (int *) ;
 void* FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,struct page*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct page *VAR_5,
          struct address_space *VAR_6,
          pgoff_t VAR_7, gfp_t VAR_8,
          void **VAR_9)
{
 FUNC_4(VAR_4, &VAR_6->i_pages, VAR_7);
 int VAR_10 = FUNC_0(VAR_5);
 struct mem_cgroup *VAR_11;
 int VAR_12;
 void *VAR_13;

 FUNC_3(!FUNC_1(VAR_5), VAR_5);
 FUNC_3(FUNC_2(VAR_5), VAR_5);
 FUNC_7(&VAR_4, VAR_6);

 if (!VAR_10) {
  VAR_12 = FUNC_10(VAR_5, VAR_3->mm,
           VAR_8, &VAR_11, 0);
  if (VAR_12)
   return VAR_12;
 }

 FUNC_6(VAR_5);
 VAR_5->mapping = VAR_6;
 VAR_5->index = VAR_7;

 do {
  FUNC_16(&VAR_4);
  VAR_13 = FUNC_15(&VAR_4);
  if (VAR_13 && !FUNC_13(VAR_13))
   FUNC_18(&VAR_4, -VAR_0);
  FUNC_19(&VAR_4, VAR_5);
  if (FUNC_14(&VAR_4))
   goto unlock;

  if (FUNC_13(VAR_13)) {
   VAR_6->nrexceptional--;
   if (VAR_9)
    *VAR_9 = VAR_13;
  }
  VAR_6->nrpages++;


  if (!VAR_10)
   FUNC_5(VAR_5, VAR_2);
unlock:
  FUNC_20(&VAR_4);
 } while (FUNC_17(&VAR_4, VAR_8 & VAR_1));

 if (FUNC_14(&VAR_4))
  goto error;

 if (!VAR_10)
  FUNC_9(VAR_5, VAR_11, 0, 0);
 FUNC_12(VAR_5);
 return 0;
error:
 VAR_5->mapping = ((void*)0);

 if (!VAR_10)
  FUNC_8(VAR_5, VAR_11, 0);
 FUNC_11(VAR_5);
 return FUNC_14(&VAR_4);
}
