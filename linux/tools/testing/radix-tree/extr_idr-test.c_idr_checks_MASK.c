
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {unsigned int index; } ;


 int FUNC_0 (int ) ;
 struct item* VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *,struct item*,int,int,int ) ;
 unsigned int FUNC_4 (int *,struct item*,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int) ;
 struct item* FUNC_17 (unsigned long,int ) ;
 int VAR_6 ;
 int FUNC_18 (int *,unsigned long) ;

void FUNC_19(void)
{
 unsigned long VAR_7;
 FUNC_0(VAR_5);

 for (VAR_7 = 0; VAR_7 < 10000; VAR_7++) {
  struct item *VAR_8 = FUNC_17(VAR_7, 0);
  FUNC_1(FUNC_3(&VAR_5, VAR_8, 0, 20000, VAR_2) == VAR_7);
 }

 FUNC_1(FUNC_3(&VAR_5, VAR_0, 5, 30, VAR_2) < 0);

 for (VAR_7 = 0; VAR_7 < 5000; VAR_7++)
  FUNC_18(&VAR_5, VAR_7);

 FUNC_13(&VAR_5, 3);

 FUNC_8(&VAR_5, VAR_6, &VAR_5);
 FUNC_6(&VAR_5);

 FUNC_1(FUNC_10(&VAR_5));

 FUNC_13(&VAR_5, 3);
 FUNC_13(&VAR_5, 0);

 FUNC_1(FUNC_3(&VAR_5, VAR_0, 0, 0, VAR_2) == 0);
 FUNC_13(&VAR_5, 1);
 for (VAR_7 = 1; VAR_7 < VAR_4; VAR_7++)
  FUNC_1(FUNC_3(&VAR_5, VAR_0, 0, 0, VAR_2) == VAR_7);
 FUNC_13(&VAR_5, 1 << 30);
 FUNC_6(&VAR_5);

 for (VAR_7 = VAR_3 - 3UL; VAR_7 < VAR_3 + 1UL; VAR_7++) {
  struct item *VAR_9 = FUNC_17(VAR_7, 0);
  FUNC_1(FUNC_3(&VAR_5, VAR_9, VAR_7, VAR_7 + 10, VAR_2) == VAR_7);
 }
 FUNC_1(FUNC_3(&VAR_5, VAR_0, VAR_7 - 2, VAR_7, VAR_2) == -VAR_1);
 FUNC_1(FUNC_3(&VAR_5, VAR_0, VAR_7 - 2, VAR_7 + 10, VAR_2) == -VAR_1);

 FUNC_8(&VAR_5, VAR_6, &VAR_5);
 FUNC_6(&VAR_5);
 FUNC_6(&VAR_5);

 FUNC_1(FUNC_10(&VAR_5));

 FUNC_15(&VAR_5, VAR_3 - 3UL);
 for (VAR_7 = VAR_3 - 3UL; VAR_7 < VAR_3 + 3UL; VAR_7++) {
  struct item *VAR_10;
  unsigned int VAR_11;
  if (VAR_7 <= VAR_3)
   VAR_10 = FUNC_17(VAR_7, 0);
  else
   VAR_10 = FUNC_17(VAR_7 - VAR_3 - 1, 0);

  VAR_11 = FUNC_4(&VAR_5, VAR_10, 0, 0, VAR_2);
  FUNC_1(VAR_11 == VAR_10->index);
 }

 FUNC_8(&VAR_5, VAR_6, &VAR_5);
 FUNC_6(&VAR_5);
 FUNC_1(FUNC_10(&VAR_5));

 for (VAR_7 = 1; VAR_7 < 10000; VAR_7++) {
  struct item *VAR_12 = FUNC_17(VAR_7, 0);
  FUNC_1(FUNC_3(&VAR_5, VAR_12, 1, 20000, VAR_2) == VAR_7);
 }

 FUNC_8(&VAR_5, VAR_6, &VAR_5);
 FUNC_6(&VAR_5);

 FUNC_14();
 FUNC_5();
 FUNC_12();
 FUNC_11();
 FUNC_9(0);
 FUNC_9(1);
 FUNC_9(4);
 FUNC_16(4);
 FUNC_16(1);
 FUNC_16(0);
 FUNC_2(&VAR_5);
 FUNC_7();
}
