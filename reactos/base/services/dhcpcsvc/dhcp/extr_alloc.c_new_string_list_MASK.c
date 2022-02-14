
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {char* string; } ;


 struct string_list* FUNC_0 (int,int) ;

struct string_list *
FUNC_1(size_t VAR_0)
{
 struct string_list *VAR_1;

 VAR_1 = FUNC_0(1, sizeof(struct string_list) + VAR_0);
 if (VAR_1 != ((void*)0))
  VAR_1->string = ((char *)VAR_1) + sizeof(struct string_list);
 return (VAR_1);
}
