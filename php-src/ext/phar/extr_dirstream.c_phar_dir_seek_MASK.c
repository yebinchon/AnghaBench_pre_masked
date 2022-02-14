
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zend_off_t ;
struct TYPE_3__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(php_stream *VAR_3, zend_off_t VAR_4, int VAR_5, zend_off_t *VAR_6)
{
 HashTable *VAR_7 = (HashTable *)VAR_3->abstract;

 if (!VAR_7) {
  return -1;
 }

 if (VAR_5 == VAR_0) {
  VAR_5 = VAR_1;
  VAR_4 = FUNC_2(VAR_7) + VAR_4;
 }

 if (VAR_5 == VAR_1) {
  FUNC_0(VAR_7);
 }

 if (VAR_4 < 0) {
  return -1;
 } else {
  *VAR_6 = 0;
  while (*VAR_6 < VAR_4 && FUNC_1(VAR_7) == VAR_2) {
   ++(*VAR_6);
  }
  return 0;
 }
}
