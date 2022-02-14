
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long,unsigned long,unsigned long*,int,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long,int ) ;
 unsigned long FUNC_7 () ;
 unsigned long FUNC_8 (int *,unsigned long,unsigned long,unsigned long,int ,int ) ;
 int VAR_5 ;
 int FUNC_9 (int *,int) ;

void FUNC_10(void)
{
 FUNC_0(VAR_5, VAR_0);
 unsigned long VAR_6[VAR_1];
 unsigned long VAR_7, VAR_8, VAR_9 = 0, VAR_10, VAR_11, VAR_12;
 int VAR_13;


 VAR_7 = FUNC_7();
 VAR_8 = FUNC_7();
 if (VAR_7 > VAR_8 && (FUNC_7() % 10)) {
  VAR_11 = VAR_7;
  VAR_7 = VAR_8;
  VAR_8 = VAR_11;
 }


 VAR_11 = FUNC_7();
 if (VAR_11 & 1) {
  FUNC_3(&VAR_5, VAR_7);
  if (VAR_11 & 2) {
   if (VAR_7 <= VAR_8)
    VAR_9++;
   FUNC_6(&VAR_5, VAR_7, 0);
  }
 }
 if (VAR_11 & 4) {
  FUNC_3(&VAR_5, VAR_7-1);
  if (VAR_11 & 8)
   FUNC_6(&VAR_5, VAR_7-1, 0);
 }
 if (VAR_11 & 16) {
  FUNC_3(&VAR_5, VAR_8);
  if (VAR_11 & 32) {
   if (VAR_7 <= VAR_8)
    VAR_9++;
   FUNC_6(&VAR_5, VAR_8, 0);
  }
 }
 if (VAR_11 & 64) {
  FUNC_3(&VAR_5, VAR_8+1);
  if (VAR_11 & 128)
   FUNC_6(&VAR_5, VAR_8+1, 0);
 }

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  do {
   VAR_6[VAR_13] = FUNC_7();
  } while (FUNC_5(&VAR_5, VAR_6[VAR_13]));

  FUNC_3(&VAR_5, VAR_6[VAR_13]);
  if (FUNC_7() & 1) {
   FUNC_6(&VAR_5, VAR_6[VAR_13], 0);
   if (VAR_6[VAR_13] >= VAR_7 && VAR_6[VAR_13] <= VAR_8)
    VAR_9++;
  }


 }


 VAR_10 = FUNC_8(&VAR_5, VAR_7, VAR_8, VAR_1, VAR_2, VAR_3);


 FUNC_1(VAR_10 == VAR_9);
 FUNC_2(&VAR_5, VAR_7, VAR_8, VAR_6, VAR_1, 0, 1);



 VAR_12 = FUNC_7() % (VAR_9 / 10 + 2);
 VAR_10 = FUNC_8(&VAR_5, VAR_7, VAR_8, VAR_12, VAR_2, VAR_4);
 FUNC_1(VAR_10 == VAR_9);



 FUNC_2(&VAR_5, VAR_7, VAR_8, VAR_6, VAR_1, 0, 2);
 FUNC_9(&VAR_5, 0);
 FUNC_9(&VAR_5, 1);
 FUNC_9(&VAR_5, 2);

 FUNC_4(&VAR_5);
}
