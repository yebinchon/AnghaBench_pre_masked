
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int * free_area; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int,struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int *,int) ;
 unsigned int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 struct zone* FUNC_8 (struct page*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct zone*) ;

__attribute__((used)) static int FUNC_11(struct zone *VAR_0,
     struct page *VAR_1, struct page *VAR_2,
     int VAR_3, int *VAR_4)
{
 struct page *VAR_5;
 unsigned int VAR_6;
 int VAR_7 = 0;

 for (VAR_5 = VAR_1; VAR_5 <= VAR_2;) {
  if (!FUNC_9(FUNC_7(VAR_5))) {
   VAR_5++;
   continue;
  }

  if (!FUNC_0(VAR_5)) {





   if (VAR_4 &&
     (FUNC_1(VAR_5) || FUNC_3(VAR_5)))
    (*VAR_4)++;

   VAR_5++;
   continue;
  }


  FUNC_2(FUNC_6(VAR_5) != FUNC_10(VAR_0), VAR_5);
  FUNC_2(FUNC_8(VAR_5) != VAR_0, VAR_5);

  VAR_6 = FUNC_5(VAR_5);
  FUNC_4(VAR_5, &VAR_0->free_area[VAR_6], VAR_3);
  VAR_5 += 1 << VAR_6;
  VAR_7 += 1 << VAR_6;
 }

 return VAR_7;
}
