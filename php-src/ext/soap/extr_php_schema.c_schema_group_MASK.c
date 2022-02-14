
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_9__ ;
typedef struct TYPE_50__ TYPE_8__ ;
typedef struct TYPE_49__ TYPE_7__ ;
typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_1__ ;


typedef TYPE_3__* xmlNsPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef TYPE_5__* xmlAttrPtr ;
struct TYPE_48__ {int s; int member_0; } ;
typedef TYPE_6__ smart_str ;
typedef TYPE_7__* sdlTypePtr ;
typedef int sdlType ;
typedef TYPE_8__* sdlPtr ;
typedef TYPE_9__* sdlContentModelPtr ;
typedef int sdlContentModel ;
struct TYPE_44__ {int * content; int group_ref; } ;
struct TYPE_51__ {void* kind; TYPE_2__ u; } ;
struct TYPE_50__ {int * groups; } ;
struct TYPE_49__ {TYPE_9__* model; } ;
struct TYPE_47__ {TYPE_1__* children; } ;
struct TYPE_46__ {int name; struct TYPE_46__* next; struct TYPE_46__* children; int properties; int doc; } ;
struct TYPE_45__ {scalar_t__ href; } ;
struct TYPE_43__ {scalar_t__ content; } ;
typedef int HashTable ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 TYPE_5__* FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_8 (TYPE_4__*,char*) ;
 int FUNC_9 (scalar_t__,char**,char**) ;
 int FUNC_10 (TYPE_8__*,TYPE_5__*,TYPE_4__*,TYPE_7__*,TYPE_9__*) ;
 int FUNC_11 (TYPE_8__*,TYPE_5__*,TYPE_4__*,TYPE_7__*,TYPE_9__*) ;
 int FUNC_12 (TYPE_4__*,TYPE_9__*) ;
 int FUNC_13 (TYPE_8__*,TYPE_5__*,TYPE_4__*,TYPE_7__*,TYPE_9__*) ;
 int FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (TYPE_6__*,char) ;
 int FUNC_16 (TYPE_6__*,char*) ;
 int FUNC_17 (TYPE_6__*) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,char*,int ) ;
 TYPE_3__* FUNC_20 (int ,TYPE_4__*,int ) ;
 int * FUNC_21 (int *,int ,TYPE_7__*) ;
 int FUNC_22 (int *,int ,int *,int ,int ) ;
 int FUNC_23 (int *,TYPE_9__*) ;

__attribute__((used)) static int FUNC_24(sdlPtr VAR_8, xmlAttrPtr VAR_9, xmlNodePtr VAR_10, sdlTypePtr VAR_11, sdlContentModelPtr VAR_12)
{
 xmlNodePtr VAR_13;
 xmlAttrPtr VAR_14, VAR_15, VAR_16 = ((void*)0);
 sdlContentModelPtr VAR_17 = ((void*)0);

 VAR_14 = FUNC_6(VAR_10->properties, "targetNamespace");
 if (VAR_14 == ((void*)0)) {
  VAR_14 = VAR_9;
 }

 VAR_15 = FUNC_6(VAR_10->properties, "name");
 if (VAR_15 == ((void*)0)) {
  VAR_15 = VAR_16 = FUNC_6(VAR_10->properties, "ref");
 }

 if (VAR_15) {
  smart_str VAR_18 = {0};

  if (VAR_16) {
   char *VAR_19, *VAR_20;
   xmlNsPtr VAR_21;

   FUNC_9(VAR_16->children->content, &VAR_19, &VAR_20);
   VAR_21 = FUNC_20(VAR_10->doc, VAR_10, FUNC_0(VAR_20));
   if (VAR_21 != ((void*)0)) {
    FUNC_16(&VAR_18, (char*)VAR_21->href);
   } else {
    xmlAttrPtr VAR_22 = FUNC_6(VAR_10->properties, "targetNamespace");
    if (VAR_22 == ((void*)0)) {
     VAR_22 = VAR_9;
    }
    if (VAR_22) {
     FUNC_16(&VAR_18, (char*)VAR_22->children->content);
    }
   }
   FUNC_15(&VAR_18, ':');
   FUNC_16(&VAR_18, VAR_19);
   FUNC_14(&VAR_18);

   VAR_17 = FUNC_4(sizeof(sdlContentModel));
   VAR_17->kind = VAR_4;
   VAR_17->u.group_ref = FUNC_5(FUNC_2(VAR_18.s), FUNC_1(VAR_18.s));

   if (VAR_19) {FUNC_3(VAR_19);}
   if (VAR_20) {FUNC_3(VAR_20);}
  } else {
   VAR_17 = FUNC_4(sizeof(sdlContentModel));
   VAR_17->kind = VAR_5;
   VAR_17->u.content = FUNC_4(sizeof(HashTable));
   FUNC_22(VAR_17->u.content, 0, ((void*)0), VAR_6, 0);

   FUNC_16(&VAR_18, (char*)VAR_14->children->content);
   FUNC_15(&VAR_18, ':');
   FUNC_16(&VAR_18, (char*)VAR_15->children->content);
   FUNC_14(&VAR_18);
  }

  if (VAR_11 == ((void*)0)) {
   sdlTypePtr VAR_23;

   VAR_23 = FUNC_4(sizeof(sdlType));
   FUNC_7(VAR_23, 0, sizeof(sdlType));

   if (VAR_8->groups == ((void*)0)) {
    VAR_8->groups = FUNC_4(sizeof(HashTable));
    FUNC_22(VAR_8->groups, 0, ((void*)0), VAR_7, 0);
   }
   if (FUNC_21(VAR_8->groups, VAR_18.s, VAR_23) == ((void*)0)) {
    FUNC_19(VAR_0, "Parsing Schema: group '%s' already defined", FUNC_2(VAR_18.s));
   }

   VAR_11 = VAR_23;
  }
  FUNC_17(&VAR_18);

  if (VAR_12 == ((void*)0)) {
   VAR_11->model = VAR_17;
  } else {
   FUNC_23(VAR_12->u.content, VAR_17);
  }
 } else {
  FUNC_18(VAR_0, "Parsing Schema: group has no 'name' nor 'ref' attributes");
 }

 FUNC_12(VAR_10, VAR_17);

 VAR_13 = VAR_10->children;
 if (VAR_13 != ((void*)0) && FUNC_8(VAR_13,"annotation")) {

  VAR_13 = VAR_13->next;
 }
 if (VAR_13 != ((void*)0)) {
  if (FUNC_8(VAR_13,"choice")) {
   if (VAR_16 != ((void*)0)) {
    FUNC_18(VAR_0, "Parsing Schema: group has both 'ref' attribute and subcontent");
   }
   VAR_17->kind = VAR_3;
   FUNC_11(VAR_8, VAR_9, VAR_13, VAR_11, VAR_17);
   VAR_13 = VAR_13->next;
  } else if (FUNC_8(VAR_13,"sequence")) {
   if (VAR_16 != ((void*)0)) {
    FUNC_18(VAR_0, "Parsing Schema: group has both 'ref' attribute and subcontent");
   }
   VAR_17->kind = VAR_5;
   FUNC_13(VAR_8, VAR_9, VAR_13, VAR_11, VAR_17);
   VAR_13 = VAR_13->next;
  } else if (FUNC_8(VAR_13,"all")) {
   if (VAR_16 != ((void*)0)) {
    FUNC_18(VAR_0, "Parsing Schema: group has both 'ref' attribute and subcontent");
   }
   VAR_17->kind = VAR_2;
   FUNC_10(VAR_8, VAR_9, VAR_13, VAR_11, VAR_17);
   VAR_13 = VAR_13->next;
  } else {
   FUNC_19(VAR_0, "Parsing Schema: unexpected <%s> in group", VAR_13->name);
  }
 }
 if (VAR_13 != ((void*)0)) {
  FUNC_19(VAR_0, "Parsing Schema: unexpected <%s> in group", VAR_13->name);
 }
 return VAR_1;
}
