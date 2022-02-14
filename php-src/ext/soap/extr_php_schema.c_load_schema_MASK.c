
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_10__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef int xmlChar ;
typedef TYPE_3__* xmlAttrPtr ;
struct TYPE_41__ {TYPE_10__* sdl; void* attributeGroups; void* attributes; } ;
typedef TYPE_4__ sdlCtx ;
struct TYPE_42__ {int * URL; } ;
struct TYPE_40__ {TYPE_1__* children; } ;
struct TYPE_39__ {struct TYPE_39__* next; int name; TYPE_7__* doc; int properties; struct TYPE_39__* children; } ;
struct TYPE_38__ {int content; } ;
struct TYPE_37__ {void* types; } ;
typedef int HashTable ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_10__*,TYPE_3__*,TYPE_2__*,int *,TYPE_4__*) ;
 int FUNC_5 (TYPE_10__*,TYPE_3__*,TYPE_2__*,int *,TYPE_4__*) ;
 int FUNC_6 (TYPE_10__*,TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_10__*,TYPE_3__*,TYPE_2__*,int *,int *) ;
 int FUNC_8 (TYPE_10__*,TYPE_3__*,TYPE_2__*,int *,int *) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*,int *,TYPE_3__*,int) ;
 int FUNC_10 (TYPE_10__*,TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int ) ;
 int * FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*,int ,int *) ;
 int * FUNC_16 (TYPE_7__*,TYPE_2__*) ;
 TYPE_3__* FUNC_17 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 int FUNC_19 (void*,int ,int *,int ,int ) ;

int FUNC_20(sdlCtx *VAR_4, xmlNodePtr VAR_5)
{
 xmlNodePtr VAR_6;
 xmlAttrPtr VAR_7;

 if (!VAR_4->sdl->types) {
  VAR_4->sdl->types = FUNC_1(sizeof(HashTable));
  FUNC_19(VAR_4->sdl->types, 0, ((void*)0), VAR_3, 0);
 }
 if (!VAR_4->attributes) {
  VAR_4->attributes = FUNC_1(sizeof(HashTable));
  FUNC_19(VAR_4->attributes, 0, ((void*)0), VAR_2, 0);
 }
 if (!VAR_4->attributeGroups) {
  VAR_4->attributeGroups = FUNC_1(sizeof(HashTable));
  FUNC_19(VAR_4->attributeGroups, 0, ((void*)0), VAR_3, 0);
 }

 VAR_7 = FUNC_2(VAR_5->properties, "targetNamespace");
 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_17(VAR_5, FUNC_0("targetNamespace"), FUNC_0(""));
  FUNC_15(VAR_5, FUNC_0(""), ((void*)0));
 }

 VAR_6 = VAR_5->children;
 while (VAR_6 != ((void*)0)) {
  if (FUNC_3(VAR_6,"include")) {
   xmlAttrPtr VAR_8;

   VAR_8 = FUNC_2(VAR_6->properties, "schemaLocation");
   if (VAR_8 == ((void*)0)) {
    FUNC_11(VAR_0, "Parsing Schema: include has no 'schemaLocation' attribute");
   } else {
    xmlChar *VAR_9;
    xmlChar *VAR_10 = FUNC_16(VAR_6->doc, VAR_6);

    if (VAR_10 == ((void*)0)) {
       VAR_9 = FUNC_13(VAR_8->children->content, VAR_6->doc->URL);
    } else {
       VAR_9 = FUNC_13(VAR_8->children->content, VAR_10);
       FUNC_14(VAR_10);
    }
    FUNC_9(VAR_4, ((void*)0), VAR_9, VAR_7, 0);
    FUNC_14(VAR_9);
   }

  } else if (FUNC_3(VAR_6,"redefine")) {
   xmlAttrPtr VAR_11;

   VAR_11 = FUNC_2(VAR_6->properties, "schemaLocation");
   if (VAR_11 == ((void*)0)) {
    FUNC_11(VAR_0, "Parsing Schema: redefine has no 'schemaLocation' attribute");
   } else {
     xmlChar *VAR_12;
    xmlChar *VAR_13 = FUNC_16(VAR_6->doc, VAR_6);

    if (VAR_13 == ((void*)0)) {
       VAR_12 = FUNC_13(VAR_11->children->content, VAR_6->doc->URL);
    } else {
       VAR_12 = FUNC_13(VAR_11->children->content, VAR_13);
       FUNC_14(VAR_13);
    }
    FUNC_9(VAR_4, ((void*)0), VAR_12, VAR_7, 0);
    FUNC_14(VAR_12);

   }

  } else if (FUNC_3(VAR_6,"import")) {
   xmlAttrPtr VAR_14, VAR_15;
   xmlChar *VAR_16 = ((void*)0);

   VAR_14 = FUNC_2(VAR_6->properties, "namespace");
   VAR_15 = FUNC_2(VAR_6->properties, "schemaLocation");

   if (VAR_14 != ((void*)0) && VAR_7 != ((void*)0) && FUNC_18(VAR_14->children->content, VAR_7->children->content) == 0) {
    if (VAR_15) {
     FUNC_12(VAR_0, "Parsing Schema: can't import schema from '%s', namespace must not match the enclosing schema 'targetNamespace'", VAR_15->children->content);
    } else {
     FUNC_11(VAR_0, "Parsing Schema: can't import schema. Namespace must not match the enclosing schema 'targetNamespace'");
    }
   }
   if (VAR_15) {
    xmlChar *VAR_17 = FUNC_16(VAR_6->doc, VAR_6);

    if (VAR_17 == ((void*)0)) {
       VAR_16 = FUNC_13(VAR_15->children->content, VAR_6->doc->URL);
    } else {
       VAR_16 = FUNC_13(VAR_15->children->content, VAR_17);
       FUNC_14(VAR_17);
    }
   }
   FUNC_9(VAR_4, VAR_14, VAR_16, VAR_7, 1);
   if (VAR_16 != ((void*)0)) {FUNC_14(VAR_16);}
  } else if (FUNC_3(VAR_6,"annotation")) {
  } else {
   break;
  }
  VAR_6 = VAR_6->next;
 }

 while (VAR_6 != ((void*)0)) {
  if (FUNC_3(VAR_6,"simpleType")) {
   FUNC_10(VAR_4->sdl, VAR_7, VAR_6, ((void*)0));
  } else if (FUNC_3(VAR_6,"complexType")) {
   FUNC_6(VAR_4->sdl, VAR_7, VAR_6, ((void*)0));
  } else if (FUNC_3(VAR_6,"group")) {
   FUNC_8(VAR_4->sdl, VAR_7, VAR_6, ((void*)0), ((void*)0));
  } else if (FUNC_3(VAR_6,"attributeGroup")) {
   FUNC_5(VAR_4->sdl, VAR_7, VAR_6, ((void*)0), VAR_4);
  } else if (FUNC_3(VAR_6,"element")) {
   FUNC_7(VAR_4->sdl, VAR_7, VAR_6, ((void*)0), ((void*)0));
  } else if (FUNC_3(VAR_6,"attribute")) {
   FUNC_4(VAR_4->sdl, VAR_7, VAR_6, ((void*)0), VAR_4);
  } else if (FUNC_3(VAR_6,"notation")) {

  } else if (FUNC_3(VAR_6,"annotation")) {

  } else {
   FUNC_12(VAR_0, "Parsing Schema: unexpected <%s> in schema", VAR_6->name);
  }
  VAR_6 = VAR_6->next;
 }
 return VAR_1;
}
