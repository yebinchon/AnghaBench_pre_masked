
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int ) ;

void FUNC_3(HRESULT VAR_1, char *VAR_2)
{
 int VAR_3 = 0;
 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_1(VAR_1);
  VAR_3 = 1;
 }



 FUNC_2(VAR_0, VAR_2, (zend_long)VAR_1);

 if (VAR_3) {
  FUNC_0(VAR_2);
 }
}
