
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;
typedef int collator_compare_func_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static collator_compare_func_t FUNC_0( const zend_long VAR_3 )
{
 collator_compare_func_t VAR_4;

 switch( VAR_3 )
 {
  case 130:
   VAR_4 = VAR_1;
   break;

  case 128:
   VAR_4 = VAR_0;
   break;

  case 129:
  default:
   VAR_4 = VAR_2;
   break;
 }

 return VAR_4;
}
