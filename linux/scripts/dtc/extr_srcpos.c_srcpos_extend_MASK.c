
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcpos {struct srcpos* next; } ;



struct srcpos *FUNC_0(struct srcpos *VAR_0, struct srcpos *VAR_1)
{
 struct srcpos *VAR_2;

 if (!VAR_0)
  return VAR_1;

 for (VAR_2 = VAR_0; VAR_2->next != ((void*)0); VAR_2 = VAR_2->next);
 VAR_2->next = VAR_1;
 return VAR_0;
}
