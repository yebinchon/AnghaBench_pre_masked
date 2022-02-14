
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct size_class {int size; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;
 unsigned long FUNC_3 (struct page*,void*) ;
 scalar_t__ FUNC_4 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_5(struct size_class *VAR_2,
     struct page *VAR_3, int *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 0;
 int VAR_7 = *VAR_4;
 unsigned long VAR_8 = 0;
 void *VAR_9 = FUNC_1(VAR_3);

 VAR_6 = FUNC_0(VAR_3);
 VAR_6 += VAR_2->size * VAR_7;

 while (VAR_6 < VAR_1) {
  VAR_5 = FUNC_3(VAR_3, VAR_9 + VAR_6);
  if (VAR_5 & VAR_0) {
   VAR_8 = VAR_5 & ~VAR_0;
   if (FUNC_4(VAR_8))
    break;
   VAR_8 = 0;
  }

  VAR_6 += VAR_2->size;
  VAR_7++;
 }

 FUNC_2(VAR_9);

 *VAR_4 = VAR_7;

 return VAR_8;
}
