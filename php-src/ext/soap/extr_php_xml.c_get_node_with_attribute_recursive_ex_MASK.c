
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* xmlAttrPtr ;
struct TYPE_10__ {TYPE_1__* children; } ;
struct TYPE_9__ {struct TYPE_9__* next; struct TYPE_9__* children; int properties; } ;
struct TYPE_8__ {scalar_t__ content; } ;


 TYPE_3__* FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

xmlNodePtr FUNC_3(xmlNodePtr VAR_0, char *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4, char *VAR_5)
{
 while (VAR_0 != ((void*)0)) {
  if (FUNC_1(VAR_0, VAR_1, VAR_2)) {
   xmlAttrPtr VAR_6 = FUNC_0(VAR_0->properties, VAR_3, VAR_5);
   if (VAR_6 != ((void*)0) && FUNC_2((char*)VAR_6->children->content, VAR_4) == 0) {
    return VAR_0;
   }
  }
  if (VAR_0->children != ((void*)0)) {
   xmlNodePtr VAR_7 = FUNC_3(VAR_0->children, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
   if (VAR_7) {
    return VAR_7;
   }
  }
  VAR_0 = VAR_0->next;
 }
 return ((void*)0);
}
