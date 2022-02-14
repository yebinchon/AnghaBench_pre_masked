
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int*,int*) ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_1(
          zend_long VAR_4,
          int *VAR_5,
          int *VAR_6,
          zend_long *VAR_7,
          zend_long *VAR_8)
{
 zend_long VAR_9;
 zend_long VAR_10;
 int VAR_11;
 int VAR_12;





 VAR_11 = (VAR_4 + 310) / 6940;


 FUNC_0(VAR_11, &VAR_9, &VAR_10);





 while (VAR_9 < VAR_4 - 6940 + 310) {
  VAR_11++;
  VAR_10 += VAR_2;
  VAR_9 += VAR_10 / VAR_0;
  VAR_10 = VAR_10 % VAR_0;
 }


 for (VAR_12 = 0; VAR_12 < 18; VAR_12++) {
  if (VAR_9 > VAR_4 - 74) {
   break;
  }
  VAR_10 += VAR_1 * VAR_3[VAR_12];
  VAR_9 += VAR_10 / VAR_0;
  VAR_10 = VAR_10 % VAR_0;
 }

 *VAR_5 = VAR_11;
 *VAR_6 = VAR_12;
 *VAR_7 = VAR_9;
 *VAR_8 = VAR_10;
}
