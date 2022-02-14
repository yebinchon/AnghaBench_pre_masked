
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef TYPE_2__* xmlNsPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef TYPE_4__* xmlAttrPtr ;
typedef TYPE_5__* sdlTypePtr ;
typedef int sdlPtr ;
struct TYPE_36__ {int encode; } ;
struct TYPE_35__ {TYPE_1__* children; } ;
struct TYPE_34__ {int name; struct TYPE_34__* next; struct TYPE_34__* children; int doc; int properties; } ;
struct TYPE_33__ {int href; } ;
struct TYPE_32__ {int content; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_4__* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (int ,char**,char**) ;
 int FUNC_6 (int ,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_7 (int ,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_8 (int ,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_9 (int ,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_10 (int ,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_11 (int ,TYPE_4__*,TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,char*,int ) ;
 TYPE_2__* FUNC_14 (int ,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_15(sdlPtr VAR_2, xmlAttrPtr VAR_3, xmlNodePtr VAR_4, sdlTypePtr VAR_5)
{
 xmlAttrPtr VAR_6;
 xmlNodePtr VAR_7;

 VAR_6 = FUNC_2(VAR_4->properties, "base");
 if (VAR_6 != ((void*)0)) {
  char *VAR_8, *VAR_9;
  xmlNsPtr VAR_10;

  FUNC_5(VAR_6->children->content, &VAR_8, &VAR_9);
  VAR_10 = FUNC_14(VAR_4->doc, VAR_4, FUNC_0(VAR_9));
  if (VAR_10 != ((void*)0)) {
   VAR_5->encode = FUNC_3(VAR_2, VAR_5, VAR_10->href, FUNC_0(VAR_8));
  }
  if (VAR_8) {FUNC_1(VAR_8);}
  if (VAR_9) {FUNC_1(VAR_9);}
 } else {
  FUNC_12(VAR_0, "Parsing Schema: restriction has no 'base' attribute");
 }

 VAR_7 = VAR_4->children;
 if (VAR_7 != ((void*)0) && FUNC_4(VAR_7,"annotation")) {

  VAR_7 = VAR_7->next;
 }
 if (VAR_7 != ((void*)0)) {
  if (FUNC_4(VAR_7,"group")) {
   FUNC_10(VAR_2, VAR_3, VAR_7, VAR_5, ((void*)0));
   VAR_7 = VAR_7->next;
  } else if (FUNC_4(VAR_7,"all")) {
   FUNC_6(VAR_2, VAR_3, VAR_7, VAR_5, ((void*)0));
   VAR_7 = VAR_7->next;
  } else if (FUNC_4(VAR_7,"choice")) {
   FUNC_9(VAR_2, VAR_3, VAR_7, VAR_5, ((void*)0));
   VAR_7 = VAR_7->next;
  } else if (FUNC_4(VAR_7,"sequence")) {
   FUNC_11(VAR_2, VAR_3, VAR_7, VAR_5, ((void*)0));
   VAR_7 = VAR_7->next;
  }
 }
 while (VAR_7 != ((void*)0)) {
  if (FUNC_4(VAR_7,"attribute")) {
   FUNC_7(VAR_2, VAR_3, VAR_7, VAR_5, ((void*)0));
  } else if (FUNC_4(VAR_7,"attributeGroup")) {
   FUNC_8(VAR_2, VAR_3, VAR_7, VAR_5, ((void*)0));
  } else if (FUNC_4(VAR_7,"anyAttribute")) {

   VAR_7 = VAR_7->next;
   break;
  } else {
   FUNC_13(VAR_0, "Parsing Schema: unexpected <%s> in restriction", VAR_7->name);
  }
  VAR_7 = VAR_7->next;
 }
 if (VAR_7 != ((void*)0)) {
  FUNC_13(VAR_0, "Parsing Schema: unexpected <%s> in restriction", VAR_7->name);
 }

 return VAR_1;
}
