
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* next; } ;



struct property *FUNC_0(struct property *VAR_0)
{
 struct property *VAR_1 = VAR_0;
 struct property *VAR_2 = ((void*)0);
 struct property *VAR_3;

 while (VAR_1) {
  VAR_3 = VAR_1->next;
  VAR_1->next = VAR_2;
  VAR_2 = VAR_1;
  VAR_1 = VAR_3;
 }
 return VAR_2;
}
