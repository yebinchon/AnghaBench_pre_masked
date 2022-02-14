
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef TYPE_3__* xmlNodePtr ;
typedef TYPE_4__* xmlAttrPtr ;
typedef TYPE_5__* sdlTypePtr ;
typedef int sdlType ;
typedef TYPE_6__* sdlPtr ;
typedef int encode ;
struct TYPE_37__ {int * types; int * encoders; } ;
struct TYPE_32__ {TYPE_5__* sdl_type; void* type_str; void* ns; } ;
struct TYPE_36__ {char* name; char* namens; void* kind; int * elements; struct TYPE_36__* encode; int to_zval; int to_xml; TYPE_1__ details; } ;
struct TYPE_35__ {TYPE_2__* children; } ;
struct TYPE_34__ {int name; struct TYPE_34__* next; struct TYPE_34__* children; int properties; } ;
struct TYPE_33__ {scalar_t__ content; } ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_6__*,TYPE_5__*,scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (char*) ;
 TYPE_4__* FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*,int) ;
 int FUNC_8 (TYPE_6__*,TYPE_4__*,TYPE_3__*,TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int ,int *,int ,int ) ;
 TYPE_5__* FUNC_13 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_14 (int *,char*,int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_15(sdlPtr VAR_9, xmlAttrPtr VAR_10, xmlNodePtr VAR_11, sdlTypePtr VAR_12)
{
 xmlNodePtr VAR_13;
 xmlAttrPtr VAR_14, VAR_15;

 VAR_15 = FUNC_3(VAR_11->properties, "targetNamespace");
 if (VAR_15 == ((void*)0)) {
  VAR_15 = VAR_10;
 }

 VAR_14 = FUNC_3(VAR_11->properties, "name");
 if (VAR_12 != ((void*)0)) {

  sdlTypePtr VAR_16, VAR_17;

  VAR_16 = FUNC_1(sizeof(sdlType));
  FUNC_4(VAR_16, 0, sizeof(sdlType));
  VAR_16->kind = VAR_3;
  if (VAR_14 != ((void*)0)) {
   VAR_16->name = FUNC_2((char*)VAR_14->children->content);
   VAR_16->namens = FUNC_2((char*)VAR_15->children->content);
  } else {
   VAR_16->name = FUNC_2(VAR_12->name);
   VAR_16->namens = FUNC_2(VAR_12->namens);
  }

  VAR_17 = FUNC_13(VAR_9->types, VAR_16);

  if (VAR_9->encoders == ((void*)0)) {
   VAR_9->encoders = FUNC_1(sizeof(HashTable));
   FUNC_12(VAR_9->encoders, 0, ((void*)0), VAR_5, 0);
  }
  VAR_12->encode = FUNC_1(sizeof(encode));
  FUNC_4(VAR_12->encode, 0, sizeof(encode));
  VAR_12->encode->details.ns = FUNC_2(VAR_16->namens);
  VAR_12->encode->details.type_str = FUNC_2(VAR_16->name);
  VAR_12->encode->details.sdl_type = VAR_17;
  VAR_12->encode->to_xml = VAR_7;
  VAR_12->encode->to_zval = VAR_8;
  FUNC_13(VAR_9->encoders, VAR_12->encode);

  VAR_12 =VAR_17;

 } else if (VAR_14 != ((void*)0)) {
  sdlTypePtr VAR_18, VAR_19;

  VAR_18 = FUNC_1(sizeof(sdlType));
  FUNC_4(VAR_18, 0, sizeof(sdlType));
  VAR_18->kind = VAR_3;
  VAR_18->name = FUNC_2((char*)VAR_14->children->content);
  VAR_18->namens = FUNC_2((char*)VAR_15->children->content);

  if (VAR_12 == ((void*)0)) {
   VAR_19 = FUNC_13(VAR_9->types, VAR_18);
  } else {
   if (VAR_12->elements == ((void*)0)) {
    VAR_12->elements = FUNC_1(sizeof(HashTable));
    FUNC_12(VAR_12->elements, 0, ((void*)0), VAR_6, 0);
   }
   VAR_19 = FUNC_14(VAR_12->elements, VAR_18->name, FUNC_11(VAR_18->name), VAR_18);
  }
  VAR_12 = VAR_19;

  FUNC_0(VAR_9, VAR_12, VAR_15->children->content, VAR_14->children->content);
 } else {
  FUNC_9(VAR_0, "Parsing Schema: simpleType has no 'name' attribute");
 }

 VAR_13 = VAR_11->children;
 if (VAR_13 != ((void*)0) && FUNC_5(VAR_13,"annotation")) {

  VAR_13 = VAR_13->next;
 }
 if (VAR_13 != ((void*)0)) {
  if (FUNC_5(VAR_13,"restriction")) {
   FUNC_7(VAR_9, VAR_10, VAR_13, VAR_12, 1);
   VAR_13 = VAR_13->next;
  } else if (FUNC_5(VAR_13,"list")) {
   VAR_12->kind = VAR_2;
   FUNC_6(VAR_9, VAR_10, VAR_13, VAR_12);
   VAR_13 = VAR_13->next;
  } else if (FUNC_5(VAR_13,"union")) {
   VAR_12->kind = VAR_4;
   FUNC_8(VAR_9, VAR_10, VAR_13, VAR_12);
   VAR_13 = VAR_13->next;
  } else {
   FUNC_10(VAR_0, "Parsing Schema: unexpected <%s> in simpleType", VAR_13->name);
  }
 } else {
  FUNC_9(VAR_0, "Parsing Schema: expected <restriction>, <list> or <union> in simpleType");
 }
 if (VAR_13 != ((void*)0)) {
  FUNC_10(VAR_0, "Parsing Schema: unexpected <%s> in simpleType", VAR_13->name);
 }

 return VAR_1;
}
