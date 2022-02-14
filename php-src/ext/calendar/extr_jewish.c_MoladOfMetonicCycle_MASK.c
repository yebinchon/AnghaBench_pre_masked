
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ulong ;
typedef int zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(
           int VAR_3,
           zend_long *VAR_4,
           zend_long *VAR_5)
{
 register zend_ulong VAR_6, VAR_7, VAR_8, VAR_9;


 VAR_6 = VAR_2;




 VAR_6 += VAR_3 * (VAR_1 & 0xFFFF);
 VAR_7 = VAR_6 >> 16;
 VAR_7 += VAR_3 * ((VAR_1 >> 16) & 0xFFFF);




 VAR_9 = VAR_7 / VAR_0;
 VAR_7 -= VAR_9 * VAR_0;
 VAR_6 = (VAR_7 << 16) | (VAR_6 & 0xFFFF);
 VAR_8 = VAR_6 / VAR_0;
 VAR_6 -= VAR_8 * VAR_0;

 *VAR_4 = (VAR_9 << 16) | VAR_8;
 *VAR_5 = VAR_6;
}
