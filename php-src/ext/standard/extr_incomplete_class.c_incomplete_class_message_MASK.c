
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int zend_object ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ,char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(zend_object *VAR_1, int VAR_2)
{
 zend_string *VAR_3;

 VAR_3 = FUNC_2(VAR_1);

 if (VAR_3) {
  FUNC_1(((void*)0), VAR_2, VAR_0, FUNC_0(VAR_3));
  FUNC_3(VAR_3, 0);
 } else {
  FUNC_1(((void*)0), VAR_2, VAR_0, "unknown");
 }
}
