
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; int name; scalar_t__ parent; } ;


 struct resource* FUNC_0 (struct resource*,struct resource*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct resource *VAR_1, struct resource *VAR_2)
{
 if (VAR_2->parent)
  return;

 FUNC_2(&VAR_0);
 for (;;) {
  struct resource *VAR_3;

  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (!VAR_3)
   break;
  if (VAR_3 == VAR_1)
   break;


  if (VAR_3->start < VAR_2->start)
   VAR_2->start = VAR_3->start;
  if (VAR_3->end > VAR_2->end)
   VAR_2->end = VAR_3->end;

  FUNC_1("Expanded resource %s due to conflict with %s\n", VAR_2->name, VAR_3->name);
 }
 FUNC_3(&VAR_0);
}
