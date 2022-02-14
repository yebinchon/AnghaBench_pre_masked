
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_ulong ;
typedef int zend_bool ;
typedef scalar_t__ xmlNodePtr ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int * FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static zend_bool FUNC_6(zval *VAR_1, xmlNodePtr VAR_2)
{
 zval *VAR_3;

 if (FUNC_0(VAR_0)) {
  if ((VAR_3 = FUNC_4(FUNC_0(VAR_0), (zend_ulong)VAR_2)) != ((void*)0)) {
   if (!FUNC_3(VAR_1) ||
       !FUNC_3(VAR_3) ||
       FUNC_2(VAR_1) != FUNC_2(VAR_3)) {
    FUNC_5(VAR_1);
    FUNC_1(VAR_1, VAR_3);
    return 1;
   }
  }
 }
 return 0;
}
