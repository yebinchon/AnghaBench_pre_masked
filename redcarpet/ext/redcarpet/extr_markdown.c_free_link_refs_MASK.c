
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_ref {int title; int link; struct link_ref* next; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct link_ref*) ;

__attribute__((used)) static void
FUNC_2(struct link_ref **VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  struct link_ref *VAR_3 = VAR_1[VAR_2];
  struct link_ref *VAR_4;

  while (VAR_3) {
   VAR_4 = VAR_3->next;
   FUNC_0(VAR_3->link);
   FUNC_0(VAR_3->title);
   FUNC_1(VAR_3);
   VAR_3 = VAR_4;
  }
 }
}
