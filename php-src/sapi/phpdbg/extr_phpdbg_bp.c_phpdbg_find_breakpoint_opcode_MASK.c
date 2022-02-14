
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_uchar ;
typedef int phpdbg_breakbase_t ;


 size_t VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char const*,int ) ;
 int * FUNC_4 (int *,int ) ;

__attribute__((used)) static inline phpdbg_breakbase_t *FUNC_5(zend_uchar VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3) {
  return ((void*)0);
 }

 return FUNC_4(&FUNC_0(VAR_1)[VAR_0], FUNC_3(VAR_3, FUNC_1(VAR_3)));
}
