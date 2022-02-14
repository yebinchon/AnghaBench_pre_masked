
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_3__* xmlNodePtr ;
typedef char xmlChar ;
typedef TYPE_4__* xmlAttrPtr ;
struct TYPE_16__ {TYPE_2__* children; struct TYPE_16__* next; int * ns; } ;
struct TYPE_15__ {TYPE_1__* doc; TYPE_4__* properties; } ;
struct TYPE_14__ {char* content; } ;
struct TYPE_13__ {int children; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_4__*,char*) ;
 TYPE_4__* FUNC_1 (TYPE_4__*,char*,int ) ;
 TYPE_3__* FUNC_2 (int ,int *,char*,char*) ;
 TYPE_3__* FUNC_3 (int ,int *,int *,char*,char*,int ) ;
 int FUNC_4 (int ,char*,char*) ;

__attribute__((used)) static xmlNodePtr FUNC_5(xmlNodePtr VAR_2)
{
 if (VAR_2 && VAR_2->properties) {
  xmlAttrPtr VAR_3;

  VAR_3 = VAR_2->properties;
  while (1) {
   VAR_3 = FUNC_0(VAR_3, "href");
   if (VAR_3 == ((void*)0) || VAR_3->ns == ((void*)0)) {break;}
   VAR_3 = VAR_3->next;
  }
  if (VAR_3) {

   if (VAR_3->children->content[0] == '#') {
    xmlNodePtr VAR_4 = FUNC_2(VAR_2->doc->children, ((void*)0), "id", (char*)&VAR_3->children->content[1]);
    if (!VAR_4) {
     FUNC_4(VAR_0, "Encoding: Unresolved reference '%s'", VAR_3->children->content);
    }
    return VAR_4;
   } else {

    FUNC_4(VAR_0, "Encoding: External reference '%s'", VAR_3->children->content);
   }
  }

  VAR_3 = FUNC_1(VAR_2->properties, "ref", VAR_1);
  if (VAR_3) {
   xmlChar* VAR_5;
   xmlNodePtr VAR_6;

   if (VAR_3->children->content[0] == '#') {
    VAR_5 = VAR_3->children->content+1;
   } else {
    VAR_5 = VAR_3->children->content;
   }
   VAR_6 = FUNC_3(VAR_2->doc->children, ((void*)0), ((void*)0), "id", (char*)VAR_5, VAR_1);
   if (!VAR_6) {
    FUNC_4(VAR_0, "Encoding: Unresolved reference '%s'", VAR_3->children->content);
   } else if (VAR_6 == VAR_2) {
    FUNC_4(VAR_0, "Encoding: Violation of id and ref information items '%s'", VAR_3->children->content);
   }
   return VAR_6;
  }
 }
 return VAR_2;
}
