
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* xmlAttrPtr ;
typedef TYPE_4__* sdlContentModelPtr ;
struct TYPE_11__ {int min_occurs; int max_occurs; } ;
struct TYPE_10__ {TYPE_1__* children; } ;
struct TYPE_9__ {int properties; } ;
struct TYPE_8__ {scalar_t__ content; } ;


 void* FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3(xmlNodePtr VAR_0, sdlContentModelPtr VAR_1)
{
 xmlAttrPtr VAR_2 = FUNC_1(VAR_0->properties, "minOccurs");

 if (VAR_2) {
  VAR_1->min_occurs = FUNC_0((char*)VAR_2->children->content);
 } else {
  VAR_1->min_occurs = 1;
 }

 VAR_2 = FUNC_1(VAR_0->properties, "maxOccurs");
 if (VAR_2) {
  if (!FUNC_2((char*)VAR_2->children->content, "unbounded", sizeof("unbounded"))) {
   VAR_1->max_occurs = -1;
  } else {
   VAR_1->max_occurs = FUNC_0((char*)VAR_2->children->content);
  }
 } else {
  VAR_1->max_occurs = 1;
 }
}
