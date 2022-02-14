
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timelib_sll ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int,int,int,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(timelib_sll *VAR_2, timelib_sll *VAR_3, timelib_sll *VAR_4, timelib_sll *VAR_5, timelib_sll *VAR_6, timelib_sll VAR_7)
{
 timelib_sll VAR_8;
 timelib_sll VAR_9, VAR_10;
 timelib_sll VAR_11;

 FUNC_1(1, 13, 12, VAR_3, VAR_2);

 VAR_10 = *VAR_2;
 VAR_9 = *VAR_3;




 if (!VAR_7) {
  while (*VAR_6 < 0) {
   FUNC_0(&VAR_10, &VAR_9);
   VAR_8 = FUNC_3(VAR_10);
   VAR_11 = VAR_8 ? VAR_1[VAR_9] : VAR_0[VAR_9];



   *VAR_6 += VAR_11;
   (*VAR_5)--;
  }
 } else {
  while (*VAR_6 < 0) {
   VAR_8 = FUNC_3(VAR_10);
   VAR_11 = VAR_8 ? VAR_1[VAR_9] : VAR_0[VAR_9];



   *VAR_6 += VAR_11;
   (*VAR_5)--;
   FUNC_2(&VAR_10, &VAR_9);
  }
 }



}
