
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int function_name; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
typedef TYPE_2__ zend_function ;
typedef int HashTable ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*,size_t,int*,int *,void**) ;
 char VAR_0 ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_1, size_t VAR_2, int *VAR_3, HashTable *VAR_4)
{
 zend_function *VAR_5;
 char *VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, (void**)&VAR_5);
 if (VAR_6) {
  VAR_0 = '(';
  VAR_6 = FUNC_2(FUNC_0(VAR_5->common.function_name));
 }

 return VAR_6;
}
