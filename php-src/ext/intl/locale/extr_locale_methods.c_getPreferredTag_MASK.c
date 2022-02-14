
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t zend_off_t ;


 int * VAR_0 ;
 int * VAR_1 ;
 size_t VAR_2 ;
 char* FUNC_0 (int ) ;
 size_t FUNC_1 (int *,char const*) ;

__attribute__((used)) static char* FUNC_2(const char* VAR_3)
{
 char* VAR_4 = ((void*)0);
 zend_off_t VAR_5 = 0;

 VAR_5 = FUNC_1( VAR_0 ,VAR_3);
 if(VAR_5 < 0) {
  return ((void*)0);
 }
 if( VAR_5 < VAR_2 ){

  VAR_4 = FUNC_0( VAR_1[VAR_5] );
 } else {

  VAR_4 = FUNC_0( VAR_0[VAR_5] );
 }
 return VAR_4;
}
