
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_off_t ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static zend_off_t FUNC_1(char* VAR_0, zend_off_t VAR_1)
{
 zend_off_t VAR_2 =-1;
 zend_off_t VAR_3;

 for(VAR_3=VAR_1-1; VAR_3>=0; VAR_3--) {
  if(FUNC_0(*(VAR_0+VAR_3)) ){

   if(VAR_3>=2 && FUNC_0(*(VAR_0+VAR_3-2)) ){

    VAR_2 = VAR_3-2;
   } else {
    VAR_2 = VAR_3;
   }
   break;
  }
 }
 if(VAR_2 < 1){

  VAR_2 =-1;
 }
 return VAR_2;
}
