
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*,int*) ;
 int FUNC_1 (int,int,int) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_2(
          int VAR_3,
          int *VAR_4,
          int *VAR_5,
          zend_long *VAR_6,
          zend_long *VAR_7,
          int *VAR_8)
{
 *VAR_4 = (VAR_3 - 1) / 19;
 *VAR_5 = (VAR_3 - 1) % 19;
 FUNC_0(*VAR_4, VAR_6, VAR_7);

 *VAR_7 += VAR_1 * VAR_2[*VAR_5];
 *VAR_6 += *VAR_7 / VAR_0;
 *VAR_7 = *VAR_7 % VAR_0;

 *VAR_8 = FUNC_1(*VAR_5, *VAR_6, *VAR_7);
}
