
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linked_page {struct linked_page* next; } ;


 struct linked_page* VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1)
{
 struct linked_page *VAR_2 = VAR_1;

 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;
}
