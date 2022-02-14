
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (void*) ;
 unsigned int FUNC_1 (struct page*) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*,struct page*,unsigned int,unsigned int) ;
 struct page* FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct scatterlist *VAR_1, void *VAR_2,
  int VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 struct page *VAR_8;

 if (!VAR_3)
  return 0;

 if (!VAR_4)
  return 0;

 VAR_5 = 0;
 VAR_8 = FUNC_4(VAR_2);
 VAR_7 = FUNC_0(VAR_2);
 VAR_6 = 0;

 while (VAR_4 >= VAR_6 + VAR_0 - VAR_7) {
  struct page *VAR_9;

  VAR_6 += VAR_0;
  VAR_2 += VAR_0;
  VAR_9 = FUNC_4(VAR_2);
  if (FUNC_1(VAR_8) != FUNC_1(VAR_9) - VAR_6) {
   FUNC_3(VAR_1, VAR_8, VAR_6 - VAR_7, VAR_7);
   VAR_1 = FUNC_2(VAR_1);
   if (++VAR_5 == VAR_3 || VAR_1 == ((void*)0))
    return VAR_5;
   VAR_8 = VAR_9;
   VAR_4 -= VAR_6 - VAR_7;
   VAR_6 = VAR_7 = 0;
  }
 }
 FUNC_3(VAR_1, VAR_8, VAR_4, VAR_7);
 return VAR_5 + 1;
}
