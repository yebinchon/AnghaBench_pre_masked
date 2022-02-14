
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct TYPE_5__ {scalar_t__ type; struct TYPE_5__* next; struct TYPE_5__* children; int content; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(xmlNodePtr VAR_3)
{
 xmlNodePtr VAR_4;
 xmlNodePtr VAR_5 = ((void*)0);

 VAR_4 = VAR_3->children;
 while (VAR_4 != ((void*)0)) {
  if (VAR_5 != ((void*)0)) {
   FUNC_2(VAR_5);
   FUNC_1(VAR_5);
   VAR_5 = ((void*)0);
  }
  if (VAR_4->type == VAR_2) {
   if (FUNC_0(VAR_4->content)) {
    VAR_5 = VAR_4;
   }
  } else if ((VAR_4->type != VAR_1) &&
             (VAR_4->type != VAR_0)) {
   VAR_5 = VAR_4;
  } else if (VAR_4->children != ((void*)0)) {
   FUNC_3(VAR_4);
  }
  VAR_4 = VAR_4->next;
 }
 if (VAR_5 != ((void*)0)) {
  FUNC_2(VAR_5);
  FUNC_1(VAR_5);
 }
}
