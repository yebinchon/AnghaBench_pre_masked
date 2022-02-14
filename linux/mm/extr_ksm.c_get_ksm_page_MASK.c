
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stable_node {int kpfn; } ;
struct page {int mapping; } ;
typedef enum get_ksm_page_flags { ____Placeholder_get_ksm_page_flags } get_ksm_page_flags ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct page*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (unsigned long) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct stable_node*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static struct page *FUNC_12(struct stable_node *VAR_5,
     enum get_ksm_page_flags VAR_6)
{
 struct page *VAR_7;
 void *VAR_8;
 unsigned long VAR_9;

 VAR_8 = (void *)((unsigned long)VAR_5 |
     VAR_4);
again:
 VAR_9 = FUNC_2(VAR_5->kpfn);
 VAR_7 = FUNC_6(VAR_9);
 if (FUNC_2(VAR_7->mapping) != VAR_8)
  goto stale;
 while (!FUNC_4(VAR_7)) {
  if (!FUNC_1(VAR_7))
   goto stale;
  FUNC_3();
 }

 if (FUNC_2(VAR_7->mapping) != VAR_8) {
  FUNC_7(VAR_7);
  goto stale;
 }

 if (VAR_6 == VAR_3) {
  if (!FUNC_10(VAR_7)) {
   FUNC_7(VAR_7);
   return FUNC_0(-VAR_0);
  }
 } else if (VAR_6 == VAR_1)
  FUNC_5(VAR_7);

 if (VAR_6 != VAR_2) {
  if (FUNC_2(VAR_7->mapping) != VAR_8) {
   FUNC_11(VAR_7);
   FUNC_7(VAR_7);
   goto stale;
  }
 }
 return VAR_7;

stale:






 FUNC_9();
 if (FUNC_2(VAR_5->kpfn) != VAR_9)
  goto again;
 FUNC_8(VAR_5);
 return ((void*)0);
}
