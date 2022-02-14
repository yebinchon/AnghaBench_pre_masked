
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int,struct page*) ;
 unsigned long FUNC_3 (unsigned long*,unsigned long,unsigned long) ;
 unsigned long* FUNC_4 (struct page*,unsigned long) ;
 int FUNC_5 (struct page*) ;
 unsigned long FUNC_6 (struct page*,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

void FUNC_8(struct page *VAR_4, unsigned long VAR_5,
     unsigned long VAR_6,
     unsigned long VAR_7,
     unsigned long VAR_8)
{
 unsigned long *VAR_9;
 unsigned long VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;

 FUNC_0(VAR_2 != 4);
 FUNC_0(VAR_1 > (1 << VAR_3));

 VAR_9 = FUNC_4(VAR_4, VAR_6);
 VAR_10 = FUNC_6(VAR_4, VAR_6);
 VAR_11 = VAR_10 / VAR_0;
 VAR_10 &= (VAR_0-1);

 FUNC_2(!FUNC_7(FUNC_5(VAR_4), VAR_6), VAR_4);

 VAR_10 += VAR_7;
 VAR_8 <<= (VAR_0 - VAR_10 - 1);
 VAR_5 <<= (VAR_0 - VAR_10 - 1);

 VAR_13 = FUNC_1(VAR_9[VAR_11]);
 for (;;) {
  VAR_12 = FUNC_3(&VAR_9[VAR_11], VAR_13, (VAR_13 & ~VAR_8) | VAR_5);
  if (VAR_13 == VAR_12)
   break;
  VAR_13 = VAR_12;
 }
}
