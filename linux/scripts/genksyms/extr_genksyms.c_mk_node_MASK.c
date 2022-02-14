
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int * next; int tag; int string; } ;


 int VAR_0 ;
 struct string_list* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static struct string_list *FUNC_2(const char *VAR_1)
{
 struct string_list *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 VAR_2->string = FUNC_1(VAR_1);
 VAR_2->tag = VAR_0;
 VAR_2->next = ((void*)0);

 return VAR_2;
}
