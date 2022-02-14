
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int zend_bool ;


 scalar_t__ FUNC_0 (int *,char*) ;

__attribute__((used)) static zend_bool FUNC_1(zend_string *VAR_0) {
 return FUNC_0(VAR_0, "Traversable")
  || FUNC_0(VAR_0, "Iterator")
  || FUNC_0(VAR_0, "Generator");
}
