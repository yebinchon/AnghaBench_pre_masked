
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct action {int next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char**,int (*) (char const*,char const*)) ;

__attribute__((used)) static struct action *FUNC_1(
  struct action *VAR_1
){
  VAR_1 = (struct action *)FUNC_0((char *)VAR_1,(char **)&VAR_1->next,
                              (int(*)(const char*,const char*))VAR_0);
  return VAR_1;
}
