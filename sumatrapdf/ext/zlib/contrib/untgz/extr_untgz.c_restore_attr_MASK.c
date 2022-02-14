
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_item {struct attr_item* next; int mode; int fname; int time; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct attr_item*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct attr_item **VAR_0)
{
  struct attr_item *VAR_1, *VAR_2;

  for (VAR_1 = *VAR_0; VAR_1 != ((void*)0); )
    {
      FUNC_2(VAR_1->fname,VAR_1->time);
      FUNC_0(VAR_1->fname,VAR_1->mode);
      VAR_2 = VAR_1;
      VAR_1 = VAR_1->next;
      FUNC_1(VAR_2);
    }
  *VAR_0 = ((void*)0);
}
