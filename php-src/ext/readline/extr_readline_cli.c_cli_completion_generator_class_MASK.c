
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
typedef TYPE_1__ zend_class_entry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 char* FUNC_2 (char const*,size_t,int*,int ,void**) ;
 char VAR_1 ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_2, size_t VAR_3, int *VAR_4)
{
 zend_class_entry *VAR_5;
 char *VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, FUNC_0(VAR_0), (void**)&VAR_5);
 if (VAR_6) {
  VAR_1 = '\0';
  VAR_6 = FUNC_3(FUNC_1(VAR_5->name));
 }

 return VAR_6;
}
