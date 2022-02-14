
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_off_t ;


 scalar_t__ FUNC_0 (char const) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static zend_off_t FUNC_2(const char* VAR_0)
{
 zend_off_t VAR_1 =-1;
 size_t VAR_2 = 0;

 if( VAR_0 && ((VAR_2=FUNC_1(VAR_0))>0) ){
  zend_off_t VAR_3 = 0;
  for( VAR_3=0; (size_t)VAR_3 < VAR_2 ; VAR_3++){
   if( FUNC_0(*(VAR_0+VAR_3)) ){
    if( VAR_3==1){

     VAR_1 =0;
     break;
    } else {

     if( FUNC_0(*(VAR_0+VAR_3+2)) ){

      VAR_1 = VAR_3+1;
      break;
     }
    }
   }
  }

 }
 return VAR_1;
}
