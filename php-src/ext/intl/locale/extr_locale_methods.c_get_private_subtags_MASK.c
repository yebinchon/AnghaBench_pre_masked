
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int zend_off_t ;


 int FUNC_0 (char const*) ;
 size_t FUNC_1 (char const*) ;
 int * FUNC_2 (char const*,size_t,int ) ;

__attribute__((used)) static zend_string* FUNC_3(const char* VAR_0)
{
 zend_string* VAR_1 = ((void*)0);
 size_t VAR_2 = 0;
 const char* VAR_3 =((void*)0);

 if( VAR_0 && (VAR_2 = FUNC_1(VAR_0)) > 0 ){
  zend_off_t VAR_4 = 0;
  VAR_3 = VAR_0 ;
  while( (VAR_4 = FUNC_0(VAR_3)) > -1){
   if( (*(VAR_3+VAR_4)=='x') || (*(VAR_3+VAR_4)=='X') ){

    if( VAR_4 + 2 == VAR_2){

    }
    else{

     VAR_1 = FUNC_2(VAR_3 + VAR_4+2 , (VAR_2 -( VAR_4 +2) ), 0);
    }
    break;
   }
   else{
    if((size_t)(VAR_4 + 1) >= VAR_2){

     break;
    } else {

     VAR_3 = VAR_3 + VAR_4 +1;
     VAR_2 = FUNC_1(VAR_3);
    }
   }
  }
 }

 return VAR_1;
}
