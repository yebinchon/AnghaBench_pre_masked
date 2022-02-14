
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ulong ;
typedef int zend_string ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*,size_t) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int **,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static char *FUNC_7(const char *VAR_2, size_t VAR_3, int *VAR_4, HashTable *VAR_5, void **VAR_6)
{
 zend_string *VAR_7;
 zend_ulong VAR_8;

 if (!(*VAR_4 % 2)) {
  FUNC_5(VAR_5);
  (*VAR_4)++;
 }
 while(FUNC_4(VAR_5) == VAR_1) {
  FUNC_3(VAR_5, &VAR_7, &VAR_8);
  if (!VAR_3 || !FUNC_1(FUNC_0(VAR_7), VAR_2, VAR_3)) {
   if (VAR_6) {
    *VAR_6 = FUNC_2(VAR_5);
   }
   FUNC_6(VAR_5);
   return FUNC_0(VAR_7);
  }
  if (FUNC_6(VAR_5) == VAR_0) {
   break;
  }
 }
 (*VAR_4)++;
 return ((void*)0);
}
