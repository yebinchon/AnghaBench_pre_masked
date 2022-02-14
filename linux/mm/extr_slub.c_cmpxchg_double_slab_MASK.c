
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {void* freelist; unsigned long counters; } ;
struct kmem_cache {int flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void**,unsigned long*,void*,unsigned long,void*,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct kmem_cache*,int ) ;

__attribute__((used)) static inline bool FUNC_8(struct kmem_cache *VAR_2, struct page *VAR_3,
  void *VAR_4, unsigned long VAR_5,
  void *VAR_6, unsigned long VAR_7,
  const char *VAR_8)
{
 {
  unsigned long VAR_9;

  FUNC_3(VAR_9);
  FUNC_5(VAR_3);
  if (VAR_3->freelist == VAR_4 &&
     VAR_3->counters == VAR_5) {
   VAR_3->freelist = VAR_6;
   VAR_3->counters = VAR_7;
   FUNC_6(VAR_3);
   FUNC_2(VAR_9);
   return 1;
  }
  FUNC_6(VAR_3);
  FUNC_2(VAR_9);
 }

 FUNC_1();
 FUNC_7(VAR_2, VAR_0);





 return 0;
}
