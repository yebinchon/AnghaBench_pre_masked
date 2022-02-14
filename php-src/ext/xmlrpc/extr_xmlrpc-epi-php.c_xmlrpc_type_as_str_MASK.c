
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t XMLRPC_VECTOR_TYPE ;
typedef size_t XMLRPC_VALUE_TYPE ;


 size_t VAR_0 ;
 char** FUNC_0 () ;
 size_t VAR_1 ;

const char* FUNC_1(XMLRPC_VALUE_TYPE VAR_2, XMLRPC_VECTOR_TYPE VAR_3)
{
 const char** VAR_4 = FUNC_0();

 if (VAR_3 == VAR_1) {
  return VAR_4[VAR_2];
 } else {
  return VAR_4[VAR_0 + VAR_3];
 }
}
