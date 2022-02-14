
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_sll ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static timelib_sll FUNC_3(timelib_sll VAR_2, timelib_sll VAR_3, timelib_sll VAR_4, int VAR_5)
{
 timelib_sll VAR_6, VAR_7, VAR_8, VAR_9;




 VAR_6 = FUNC_0(VAR_2 / 100);
 VAR_7 = FUNC_1(VAR_2, 100);
 VAR_8 = FUNC_2(VAR_2) ? VAR_1[VAR_3] : VAR_0[VAR_3];
 VAR_9 = FUNC_1((VAR_6 + VAR_7 + VAR_8 + (VAR_7 / 4) + VAR_4), 7);
 if (VAR_5) {
  if (VAR_9 == 0) {
   VAR_9 = 7;
  }
 }
 return VAR_9;
}
