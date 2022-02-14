
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lock; int nr_isolate_pageblock; } ;
struct page {int dummy; } ;
struct memory_isolate_notify {unsigned long start_pfn; scalar_t__ pages_found; int nr_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zone*,unsigned long,int) ;
 int FUNC_1 (struct zone*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct zone*,struct page*,scalar_t__,int,int) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (int ,struct memory_isolate_notify*) ;
 unsigned long FUNC_6 (struct zone*,struct page*,int ,int *) ;
 int FUNC_7 (int) ;
 unsigned long FUNC_8 (struct page*) ;
 struct zone* FUNC_9 (struct page*) ;
 int VAR_3 ;
 int FUNC_10 (struct page*,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct page *VAR_4, int VAR_5, int VAR_6)
{
 struct zone *VAR_7;
 unsigned long VAR_8, VAR_9;
 struct memory_isolate_notify VAR_10;
 int VAR_11;
 int VAR_12 = -VAR_0;

 VAR_7 = FUNC_9(VAR_4);

 FUNC_11(&VAR_7->lock, VAR_8);






 if (FUNC_4(VAR_4))
  goto out;

 VAR_9 = FUNC_8(VAR_4);
 VAR_10.start_pfn = VAR_9;
 VAR_10.nr_pages = VAR_3;
 VAR_10.pages_found = 0;
 VAR_11 = FUNC_5(VAR_1, &VAR_10);
 VAR_11 = FUNC_7(VAR_11);
 if (VAR_11)
  goto out;




 if (!FUNC_3(VAR_7, VAR_4, VAR_10.pages_found, VAR_5,
     VAR_6))
  VAR_12 = 0;






out:
 if (!VAR_12) {
  unsigned long VAR_13;
  int VAR_14 = FUNC_2(VAR_4);

  FUNC_10(VAR_4, VAR_2);
  VAR_7->nr_isolate_pageblock++;
  VAR_13 = FUNC_6(VAR_7, VAR_4, VAR_2,
         ((void*)0));

  FUNC_0(VAR_7, -VAR_13, VAR_14);
 }

 FUNC_12(&VAR_7->lock, VAR_8);
 if (!VAR_12)
  FUNC_1(VAR_7);
 return VAR_12;
}
