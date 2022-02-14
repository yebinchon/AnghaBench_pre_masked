
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_format_desc {struct ff_format_desc* next; } ;


 int FUNC_0 (void*) ;

void FUNC_1(const struct ff_format_desc *VAR_0)
{
 const struct ff_format_desc *VAR_1 = VAR_0;
 while (VAR_1 != ((void*)0)) {
  const struct ff_format_desc *VAR_2 = VAR_1->next;
  FUNC_0((void *)VAR_1);
  VAR_1 = VAR_2;
 }
}
