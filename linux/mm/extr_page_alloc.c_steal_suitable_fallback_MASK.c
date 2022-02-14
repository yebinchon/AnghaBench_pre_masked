
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {struct free_area* free_area; int flags; } ;
struct page {int dummy; } ;
struct free_area {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zone*) ;
 int FUNC_1 (struct page*,unsigned int,int) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct zone*,struct page*,int,int*) ;
 int FUNC_5 (struct page*,struct free_area*,int) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_6 (struct page*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct page*,int) ;

__attribute__((used)) static void FUNC_9(struct zone *VAR_6, struct page *VAR_7,
  unsigned int VAR_8, int VAR_9, bool VAR_10)
{
 unsigned int VAR_11 = FUNC_6(VAR_7);
 struct free_area *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_16 = FUNC_2(VAR_7);





 if (FUNC_3(VAR_16))
  goto single_page;


 if (VAR_11 >= VAR_5) {
  FUNC_1(VAR_7, VAR_11, VAR_9);
  goto single_page;
 }






 FUNC_0(VAR_6);
 if (VAR_8 & VAR_0)
  FUNC_7(VAR_2, &VAR_6->flags);


 if (!VAR_10)
  goto single_page;

 VAR_13 = FUNC_4(VAR_6, VAR_7, VAR_9,
      &VAR_14);





 if (VAR_9 == VAR_1) {
  VAR_15 = VAR_14;
 } else {







  if (VAR_16 == VAR_1)
   VAR_15 = VAR_4
      - (VAR_13 + VAR_14);
  else
   VAR_15 = 0;
 }


 if (!VAR_13)
  goto single_page;





 if (VAR_13 + VAR_15 >= (1 << (VAR_5-1)) ||
   VAR_3)
  FUNC_8(VAR_7, VAR_9);

 return;

single_page:
 VAR_12 = &VAR_6->free_area[VAR_11];
 FUNC_5(VAR_7, VAR_12, VAR_9);
}
