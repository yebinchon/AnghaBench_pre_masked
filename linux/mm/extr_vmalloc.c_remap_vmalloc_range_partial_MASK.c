
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int flags; void* addr; } ;
struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vm_struct* FUNC_2 (void*) ;
 int FUNC_3 (struct vm_struct*) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,struct page*) ;
 struct page* FUNC_5 (void*) ;

int FUNC_6(struct vm_area_struct *VAR_6, unsigned long VAR_7,
    void *VAR_8, unsigned long VAR_9)
{
 struct vm_struct *VAR_10;

 VAR_9 = FUNC_0(VAR_9);

 if (!FUNC_1(VAR_7) || !FUNC_1(VAR_8))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_8);
 if (!VAR_10)
  return -VAR_0;

 if (!(VAR_10->flags & (VAR_5 | VAR_2)))
  return -VAR_0;

 if (VAR_8 + VAR_9 > VAR_10->addr + FUNC_3(VAR_10))
  return -VAR_0;

 do {
  struct page *VAR_11 = FUNC_5(VAR_8);
  int VAR_12;

  VAR_12 = FUNC_4(VAR_6, VAR_7, VAR_11);
  if (VAR_12)
   return VAR_12;

  VAR_7 += VAR_1;
  VAR_8 += VAR_1;
  VAR_9 -= VAR_1;
 } while (VAR_9 > 0);

 VAR_6->vm_flags |= VAR_4 | VAR_3;

 return 0;
}
