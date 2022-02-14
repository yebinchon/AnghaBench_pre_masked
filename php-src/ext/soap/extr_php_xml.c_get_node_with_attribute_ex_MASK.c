
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* xmlAttrPtr ;
struct TYPE_11__ {TYPE_1__* children; } ;
struct TYPE_10__ {struct TYPE_10__* next; int properties; } ;
struct TYPE_9__ {scalar_t__ content; } ;


 TYPE_3__* FUNC_0 (int ,char*,char*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

xmlNodePtr FUNC_3(xmlNodePtr VAR_0, char *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4, char *VAR_5)
{
 xmlAttrPtr VAR_6;

 while (VAR_0 != ((void*)0)) {
  if (VAR_1 != ((void*)0)) {
   VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_2);
   if (VAR_0==((void*)0)) {
    return ((void*)0);
   }
  }

  VAR_6 = FUNC_0(VAR_0->properties, VAR_3, VAR_5);
  if (VAR_6 != ((void*)0) && FUNC_2((char*)VAR_6->children->content, VAR_4) == 0) {
   return VAR_0;
  }
  VAR_0 = VAR_0->next;
 }
 return ((void*)0);
}
