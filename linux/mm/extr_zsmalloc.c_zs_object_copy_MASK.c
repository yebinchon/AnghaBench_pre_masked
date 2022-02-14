
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct size_class {int size; } ;
struct page {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 struct page* FUNC_0 (struct page*) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (unsigned long,struct page**,unsigned int*) ;

__attribute__((used)) static void FUNC_6(struct size_class *VAR_2, unsigned long VAR_3,
    unsigned long VAR_4)
{
 struct page *VAR_5, *VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10;
 void *VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0;

 VAR_13 = VAR_14 = VAR_2->size;

 FUNC_5(VAR_4, &VAR_5, &VAR_7);
 FUNC_5(VAR_3, &VAR_6, &VAR_8);

 VAR_9 = (VAR_2->size * VAR_7) & ~VAR_0;
 VAR_10 = (VAR_2->size * VAR_8) & ~VAR_0;

 if (VAR_9 + VAR_2->size > VAR_1)
  VAR_13 = VAR_1 - VAR_9;

 if (VAR_10 + VAR_2->size > VAR_1)
  VAR_14 = VAR_1 - VAR_10;

 VAR_11 = FUNC_1(VAR_5);
 VAR_12 = FUNC_1(VAR_6);

 while (1) {
  VAR_15 = FUNC_4(VAR_13, VAR_14);
  FUNC_3(VAR_12 + VAR_10, VAR_11 + VAR_9, VAR_15);
  VAR_16 += VAR_15;

  if (VAR_16 == VAR_2->size)
   break;

  VAR_9 += VAR_15;
  VAR_13 -= VAR_15;
  VAR_10 += VAR_15;
  VAR_14 -= VAR_15;

  if (VAR_9 >= VAR_1) {
   FUNC_2(VAR_12);
   FUNC_2(VAR_11);
   VAR_5 = FUNC_0(VAR_5);
   VAR_11 = FUNC_1(VAR_5);
   VAR_12 = FUNC_1(VAR_6);
   VAR_13 = VAR_2->size - VAR_16;
   VAR_9 = 0;
  }

  if (VAR_10 >= VAR_1) {
   FUNC_2(VAR_12);
   VAR_6 = FUNC_0(VAR_6);
   VAR_12 = FUNC_1(VAR_6);
   VAR_14 = VAR_2->size - VAR_16;
   VAR_10 = 0;
  }
 }

 FUNC_2(VAR_12);
 FUNC_2(VAR_11);
}
