
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TaskFunction_t ;
typedef int StackType_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

StackType_t *FUNC_0( StackType_t *VAR_3, TaskFunction_t VAR_4, void *VAR_5 )
{


 VAR_3--;
 *VAR_3 = VAR_0;
 VAR_3--;
 *VAR_3 = ( ( StackType_t ) VAR_4 ) & VAR_1;
 VAR_3--;
 *VAR_3 = ( StackType_t ) VAR_2;
 VAR_3 -= 5;
 *VAR_3 = ( StackType_t ) VAR_5;
 VAR_3 -= 8;

 return VAR_3;
}
