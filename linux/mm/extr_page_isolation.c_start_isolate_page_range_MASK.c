
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 struct page* FUNC_2 (unsigned long,scalar_t__) ;
 scalar_t__ VAR_1 ;
 struct page* FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (struct page*,unsigned int,int) ;
 int FUNC_5 (struct page*,unsigned int) ;

int FUNC_6(unsigned long VAR_2, unsigned long VAR_3,
        unsigned VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 struct page *VAR_8;
 int VAR_9 = 0;

 FUNC_0(!FUNC_1(VAR_2, VAR_1));
 FUNC_0(!FUNC_1(VAR_3, VAR_1));

 for (VAR_6 = VAR_2;
      VAR_6 < VAR_3;
      VAR_6 += VAR_1) {
  VAR_8 = FUNC_2(VAR_6, VAR_1);
  if (VAR_8) {
   if (FUNC_4(VAR_8, VAR_4, VAR_5)) {
    VAR_7 = VAR_6;
    goto undo;
   }
   VAR_9++;
  }
 }
 return VAR_9;
undo:
 for (VAR_6 = VAR_2;
      VAR_6 < VAR_7;
      VAR_6 += VAR_1) {
  struct page *VAR_10 = FUNC_3(VAR_6);
  if (!VAR_10)
   continue;
  FUNC_5(VAR_10, VAR_4);
 }

 return -VAR_0;
}
