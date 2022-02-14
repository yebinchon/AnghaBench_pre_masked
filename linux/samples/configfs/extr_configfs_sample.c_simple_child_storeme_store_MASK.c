
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_child {unsigned long storeme; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (char*,char**,int) ;
 struct simple_child* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct simple_child *VAR_6 = FUNC_1(VAR_3);
 unsigned long VAR_7;
 char *VAR_8 = (char *) VAR_4;

 VAR_7 = FUNC_0(VAR_8, &VAR_8, 10);
 if (!VAR_8 || (*VAR_8 && (*VAR_8 != '\n')))
  return -VAR_0;

 if (VAR_7 > VAR_2)
  return -VAR_1;

 VAR_6->storeme = VAR_7;

 return VAR_5;
}
