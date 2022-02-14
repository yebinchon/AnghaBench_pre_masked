
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct zone*,struct page*,struct page*,int,int*) ;
 unsigned long FUNC_1 (struct page*) ;
 int VAR_0 ;
 struct page* FUNC_2 (unsigned long) ;
 int FUNC_3 (struct zone*,unsigned long) ;

int FUNC_4(struct zone *VAR_1, struct page *VAR_2,
    int VAR_3, int *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 struct page *VAR_7, *VAR_8;

 if (VAR_4)
  *VAR_4 = 0;

 VAR_5 = FUNC_1(VAR_2);
 VAR_5 = VAR_5 & ~(VAR_0-1);
 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = VAR_7 + VAR_0 - 1;
 VAR_6 = VAR_5 + VAR_0 - 1;


 if (!FUNC_3(VAR_1, VAR_5))
  VAR_7 = VAR_2;
 if (!FUNC_3(VAR_1, VAR_6))
  return 0;

 return FUNC_0(VAR_1, VAR_7, VAR_8, VAR_3,
        VAR_4);
}
