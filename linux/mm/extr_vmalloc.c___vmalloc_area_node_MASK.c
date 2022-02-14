
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {void* addr; unsigned int nr_pages; int size; struct page** pages; int caller; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (void*) ;
 struct page** FUNC_1 (unsigned int,int,int const,int ,int,int ) ;
 struct page* FUNC_2 (int const) ;
 struct page* FUNC_3 (int,int const,int ) ;
 int FUNC_4 (unsigned int,int *) ;
 int FUNC_5 () ;
 unsigned int FUNC_6 (struct vm_struct*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct vm_struct*) ;
 struct page** FUNC_9 (unsigned int,int const,int) ;
 scalar_t__ FUNC_10 (struct vm_struct*,int ,struct page**) ;
 int VAR_10 ;
 int FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int,int *,char*,unsigned int,int ) ;

__attribute__((used)) static void *FUNC_14(struct vm_struct *VAR_11, gfp_t VAR_12,
     pgprot_t VAR_13, int VAR_14)
{
 struct page **VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18;
 const gfp_t VAR_19 = (VAR_12 & VAR_2) | VAR_9;
 const gfp_t VAR_20 = VAR_12 | VAR_8;
 const gfp_t VAR_21 = (VAR_12 & (VAR_0 | VAR_1)) ?
     0 :
     VAR_7;

 VAR_16 = FUNC_6(VAR_11) >> VAR_5;
 VAR_17 = (VAR_16 * sizeof(struct page *));


 if (VAR_17 > VAR_6) {
  VAR_15 = FUNC_1(VAR_17, 1, VAR_19|VAR_21,
    VAR_4, VAR_14, VAR_11->caller);
 } else {
  VAR_15 = FUNC_9(VAR_17, VAR_19, VAR_14);
 }

 if (!VAR_15) {
  FUNC_11(VAR_11->addr);
  FUNC_8(VAR_11);
  return ((void*)0);
 }

 VAR_11->pages = VAR_15;
 VAR_11->nr_pages = VAR_16;

 for (VAR_18 = 0; VAR_18 < VAR_11->nr_pages; VAR_18++) {
  struct page *VAR_22;

  if (VAR_14 == VAR_3)
   VAR_22 = FUNC_2(VAR_20|VAR_21);
  else
   VAR_22 = FUNC_3(VAR_14, VAR_20|VAR_21, 0);

  if (FUNC_12(!VAR_22)) {

   VAR_11->nr_pages = VAR_18;
   FUNC_4(VAR_11->nr_pages, &VAR_10);
   goto fail;
  }
  VAR_11->pages[VAR_18] = VAR_22;
  if (FUNC_7(VAR_12|VAR_21))
   FUNC_5();
 }
 FUNC_4(VAR_11->nr_pages, &VAR_10);

 if (FUNC_10(VAR_11, VAR_13, VAR_15))
  goto fail;
 return VAR_11->addr;

fail:
 FUNC_13(VAR_12, ((void*)0),
     "vmalloc: allocation failure, allocated %ld of %ld bytes",
     (VAR_11->nr_pages*VAR_6), VAR_11->size);
 FUNC_0(VAR_11->addr);
 return ((void*)0);
}
