
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {unsigned long* _watermark; struct free_area* free_area; } ;
struct page {int dummy; } ;
struct free_area {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 size_t VAR_2 ;
 int FUNC_2 (struct zone*,unsigned long,int) ;
 int FUNC_3 (struct page*,struct free_area*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 struct zone* FUNC_8 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct page*,int ) ;
 int FUNC_10 (struct zone*,int ,unsigned long,int ,int ) ;

int FUNC_11(struct page *VAR_5, unsigned int VAR_6)
{
 struct free_area *VAR_7 = &FUNC_8(VAR_5)->free_area[VAR_6];
 unsigned long VAR_8;
 struct zone *VAR_9;
 int VAR_10;

 FUNC_0(!FUNC_1(VAR_5));

 VAR_9 = FUNC_8(VAR_5);
 VAR_10 = FUNC_4(VAR_5);

 if (!FUNC_7(VAR_10)) {






  VAR_8 = VAR_9->_watermark[VAR_2] + (1UL << VAR_6);
  if (!FUNC_10(VAR_9, 0, VAR_8, 0, VAR_0))
   return 0;

  FUNC_2(VAR_9, -(1UL << VAR_6), VAR_10);
 }



 FUNC_3(VAR_5, VAR_7);





 if (VAR_6 >= VAR_4 - 1) {
  struct page *VAR_11 = VAR_5 + (1 << VAR_6) - 1;
  for (; VAR_5 < VAR_11; VAR_5 += VAR_3) {
   int VAR_12 = FUNC_4(VAR_5);
   if (!FUNC_7(VAR_12) && !FUNC_5(VAR_12)
       && !FUNC_6(VAR_12))
    FUNC_9(VAR_5,
         VAR_1);
  }
 }


 return 1UL << VAR_6;
}
