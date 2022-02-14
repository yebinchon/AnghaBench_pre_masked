
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int xmlAttrPtr ;
typedef TYPE_2__* sdlTypePtr ;
typedef int sdlPtr ;
struct TYPE_11__ {int kind; } ;
struct TYPE_10__ {int name; struct TYPE_10__* next; struct TYPE_10__* children; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(sdlPtr VAR_4, xmlAttrPtr VAR_5, xmlNodePtr VAR_6, sdlTypePtr VAR_7)
{
 xmlNodePtr VAR_8;

 VAR_8 = VAR_6->children;
 if (VAR_8 != ((void*)0) && FUNC_0(VAR_8,"annotation")) {

  VAR_8 = VAR_8->next;
 }
 if (VAR_8 != ((void*)0)) {
  if (FUNC_0(VAR_8, "restriction")) {
   VAR_7->kind = VAR_3;
   FUNC_2(VAR_4, VAR_5, VAR_8, VAR_7, 0);
   VAR_8 = VAR_8->next;
  } else if (FUNC_0(VAR_8, "extension")) {
   VAR_7->kind = VAR_2;
   FUNC_1(VAR_4, VAR_5, VAR_8, VAR_7);
   VAR_8 = VAR_8->next;
  } else {
   FUNC_4(VAR_0, "Parsing Schema: unexpected <%s> in simpleContent", VAR_8->name);
  }
 } else {
  FUNC_3(VAR_0, "Parsing Schema: expected <restriction> or <extension> in simpleContent");
 }
 if (VAR_8 != ((void*)0)) {
  FUNC_4(VAR_0, "Parsing Schema: unexpected <%s> in simpleContent", VAR_8->name);
 }

 return VAR_1;
}
